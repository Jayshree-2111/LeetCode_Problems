class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int length=nums.size();
    for (int i=0;i<nums.size();i++){
      if (nums[i]==val){
          nums.erase(nums.begin()+i);
          length--;
          i--;
      }
    }
    return length;
  }    
};
