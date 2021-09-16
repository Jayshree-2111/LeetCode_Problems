class Solution {
public:
    int removeDuplicates(vector<int>& nums) {  //Vector of type int, containing all array elements
        int k=1; //type of temporary variable, denoting index values of nums array
        for(int i=0;i<nums.size()-1;i++) //using vector STL to find size of array
            if(nums[i]!=nums[i+1]) //Comaparing if first element is not equal to next element. If they are not equal, simply condition is true else, control comes out.
            {
                nums[k++]=nums[i+1]; //Updating the next compared element with distinct element
            } 
        return k; //Returning number of distinct elements available in array
    }
};
