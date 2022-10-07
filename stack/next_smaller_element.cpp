Given an array, print the Next Smaller Element (NSE) for every element.
The NSE for an element x is the first smaller element on the right side of x in the array.
Elements for which no smaller element exist (on the right side), consider NSE as -1. 
Example:
2 1 4 3
ans-1 -1 3 -1

class Solution{  
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        while(arr[i]<=s.top()){
            s.pop();
        }
        ans[i]=s.top();
        s.push(arr[i]);
    }
    return ans;
}
}
