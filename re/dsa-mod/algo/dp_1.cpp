/*
Optimal Substructure & Overlapping Subproblems
Top-Down (Memoization): In a top-down approach, you would typically use recursion and store the results of subproblems in a cache (or array) to avoid redundant calculations. This is often implemented with recursive function calls.
Bottom-Up (Tabulation): In this approach, you solve all possible subproblems iteratively and use their solutions to build up the solution to the main problem.
*/

/*
Problem Statement
You are climbing a staircase with n steps. You can either climb 1 or 2 steps at a time. In how many distinct ways can you climb to the top?
*/
#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the number of ways to climb stairs using dynamic programming
int climbStairs(int n) {
    if (n == 1) return 1; // Only one way to climb 1 step
    if (n == 2) return 2; // Two ways to climb 2 steps: (1+1) or (2)

    vector<int> dp(n + 1); // Create a dp array to store the number of ways
    dp[1] = 1; // Base case: 1 way to climb 1 step
    dp[2] = 2; // Base case: 2 ways to climb 2 steps

    // Fill the dp array for all steps from 3 to n
    for (int i = 3; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2]; // The number of ways to reach the i-th step
    }

    return dp[n]; // Return the number of ways to climb n steps
}

int main() {
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;

    int ways = climbStairs(n);
    cout << "Number of distinct ways to climb to the top: " << ways << endl;

    return 0;
}
