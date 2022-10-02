// Given string str of length N. The task is to find the minimum characters to be added at the front to make string palindrome.
// Note: A palindrome is a word which reads the same backward as forward. Example: "madam".

// Example 1:

// Input:
// S = "abc"
// Output: 2
// Explanation: 
// Add 'b' and 'c' at front of above string to make it
// palindrome : "cbabc"
 //SOLUTION
class Solution{
  public:
    int minChar(string str){
        //Write your code here
        int i=0,m=str.length()-1,ans=str.length()-1;
        while(i<m){
            if(str[i]==str[m]){i+=1;m-=1;}
            else{i=0;ans-=1;m=ans;}
        }
        return str.length()-ans-1;
    }
};
