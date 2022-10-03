/*Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Example 2:
Input: nums = [0,1]
Output: [[0,1],[1,0]]*/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {      
        vector<vector<int>> res;
        vector<int> k= nums;
        
        // uses next_permutation function to create permutation 
        next_permutation(k.begin(), k.end());
        res.push_back(k);
        
         // keep doing permutation till the original array doesn't come again
         while(k!=nums){
             next_permutation(k.begin(), k.end());
             res.push_back(k);
        }
        
        return res;}

};

