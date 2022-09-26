class Solution {
public:


void function(vector<int>& candidates,vector<int>& r,int target,int index,int sum)
{
    if(index==candidates.size())
       r.push_back(sum);
      return;
    
  
    function(candidates,target,index+1,sum+candidates[index]);
   
    function(candidates,target,index+1,sum);      
}
//SUBSETSUMS GFG
vector<int>SubsetSums(vector<int>& candidates, int target) {
  vector<int>r;
    function(candidates,r,target,0,0);
  sort(r.begin(),r.end());
    return r;
}
};
