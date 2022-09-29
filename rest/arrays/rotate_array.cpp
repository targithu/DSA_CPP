class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //soln 1
        vector<int>temp(nums.size());
      for(int i=0;i<nums.size();i++){
          int l=(i+k)%nums.size();
          temp[l]=nums[i];
      }
        nums=temp;
        
        
        //soln 2
         k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
