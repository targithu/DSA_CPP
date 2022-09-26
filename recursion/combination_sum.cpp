class Solution {
public:
vector<vector<int>>r;
vector<int>t;

void function(vector<int>& candidates,int target,int index)
{
    if(target==0){
        r.push_back(t);
        return;
    }
    
    if(index==candidates.size() || target<0)return;
    
    t.push_back(candidates[index]);
    function(candidates,target-candidates[index],index);
    t.pop_back();
    function(candidates,target,index+1);      
}
//below given in leetcode Q39
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    function(candidates,target,0);
    return r;
}
};