//  Q)You are given a 2D integer array logs where each logs[i] = [birthi, deathi] indicates the birth and death years of the ith person.

// The population of some year x is the number of people alive during that year. The ith person is counted in year x's population if x is in the inclusive range [birthi, deathi - 1]. Note that the person is not counted in the year that they die.

// Return the earliest year with the maximum population.

 

// Example 1:

// Input: logs = [[1993,1999],[2000,2010]]
// Output: 1993
// Explanation: The maximum population is 1, and 1993 is the earliest year with this population.
Soln:
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int pop[2051] = {}, res = 0;
    for (auto &l : logs) {
        ++pop[l[0]];
        --pop[l[1]];
    }
    for (auto i = 1950; i < 2050; ++i) {
        pop[i] += pop[i - 1];
        res = pop[i] > pop[res] ? i : res;
    }
    return res;
    }
};
