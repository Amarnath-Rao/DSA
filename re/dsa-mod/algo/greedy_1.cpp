//Greedy Choice Property
//Optimal Substructure

/*
Problem Statement
Given arrival and departure times of trains, find the minimum number of platforms required to accommodate all trains at the station so that no train has to wait.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the minimum number of platforms required
int findPlatforms(int arr[], int dep[], int n) {
    // Sort arrival and departure times
    sort(arr, arr + n);
    sort(dep, dep + n);

    int platforms_needed = 1; // At least one platform is needed
    int result = 1; // Result to hold the maximum platforms needed
    int i = 1; // Pointer for arrival array
    int j = 0; // Pointer for departure array

    // Loop through arrival and departure arrays
    while (i < n && j < n) {
        // If next train arrives before the last one departs, we need a platform
        if (arr[i] <= dep[j]) {
            platforms_needed++;
            i++;
        }
        // If the train departs, we free a platform
        else {
            platforms_needed--;
            j++;
        }
        // Update result if needed
        result = max(result, platforms_needed);
    }

    return result; // Return the maximum number of platforms needed
}

int main() {
    int arr[] = {10, 15, 25, 30, 5}; // Arrival times
    int dep[] = {20, 18, 30, 40, 10}; // Departure times
    int n = sizeof(arr) / sizeof(arr[0]);

    int platforms = findPlatforms(arr, dep, n);
    cout << "Minimum number of platforms required: " << platforms << endl;

    return 0;
}
