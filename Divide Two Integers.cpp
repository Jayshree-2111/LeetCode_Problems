/*class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == 0) return 0;
        if(divisor == 1) return dividend;
        if(divisor == -1) return dividend == INT_MIN ? INT_MAX : 0 - dividend;
        bool neg = (dividend < 0) ^ (divisor < 0);
        int count = 0;
        long long a = abs(dividend);
        long long b = abs(divisor);
        int ct = 1;
        
        while(b <= a){
            count += ct;
            a = a-b;
            b = b<<1;
            ct = ct<<1;
        }
        divisor = abs(divisor);
        while(divisor <= a){
            count++;
            a -= divisor;
        }
        return neg ? 0 - count : count;
    }
}; */

//OPTIMIZED APPROACH

class Solution {
public:
    typedef long long ll;
    int divide(int dd, int divv) {
        if(dd==INT_MIN and divv==-1)
            return INT_MAX;
        ll d=abs(dd),div=abs(divv);
        int res=0;
        while(d-div>=0){
            int count=0;
            while(d-(ll)(div<<1<<count)>=0){
                count++;
            }
            res+=1<<count;
            d-=(ll)(div<<count);
        }
        return (dd > 0) == (divv > 0) ? res : 0-abs(res);
    }
    
};
