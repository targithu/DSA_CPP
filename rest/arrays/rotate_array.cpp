class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
      for(int i=0;i<nums.size();i++){
          int l=(i+k)%nums.size();
          temp[l]=nums[i];
      }
        nums=temp;
    }
};
