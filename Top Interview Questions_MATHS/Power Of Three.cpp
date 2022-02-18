class Solution {
public:
    bool isPowerOfThree(int n) {
    //APPROACH-1
    /*if(n<1)
    {
        return false;
    }
     while(n%3==0)
      {
          n=n/3;  
      }
    if(n==1) //if it a perfect cube it will have a quotient 1 at the end 
    {
        return true;
    }
        return false;
        
    }*/
     
    //APPROACH-2 (Optimised)
    while(n%3==0 && n>0)
            n=n/3;
        if(n==1)
            return true;
        return false;
    }
        
};
