Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
Example 1:
Input: nums = [3,2,3]
Output: 3
class Solution {
public:
//MOORE VOTING ALGORITHM
    int majorityElement(vector<int>& nums) {
        int count=1;
        int k;
        for(int i=0;i<nums.size();i++){
        if(k==nums[i]) count ++;
        else{
            count--;
            if(count==0){
                k=nums[i];count=1;
            }
        }
       
        }
        return k;
    }
};
