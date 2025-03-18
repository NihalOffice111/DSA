#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> &arr, int n, int k)
{
    int i = 0;
    int j = 0;

    int sum = 0;
    int maxi = 0;
    while (j < arr.size())
    {
        sum = sum + arr[j];

        if (sum < k)
        {
        }

        else if (sum == k)
        {
            int size = j - i + 1;
            maxi = max(maxi, size);
        }

        else if (sum > k)
        {
            while (sum > k)
            {
                sum = sum - arr[i];
                i++;
            }
            if (sum == k)
            {
                int size = j - i + 1;
                maxi = max(maxi, size);
            }
        }
        j++;
    }
    return maxi;
}

int main()
{
    vector<tuple<int, int, vector<int>>> testCases = {
        {7, 5, {4, 1, 1, 1, 2, 3, 5}},     // Test Case 1
        {5, 7, {1, 2, 3, 4, 5}},           // Test Case 2
        {4, 10, {2, 3, 4, 1}},             // Test Case 3
        {6, 6, {1, 1, 1, 1, 1, 1}},        // Test Case 4
        {3, 5, {2, 2, 2}},                 // Test Case 5
        {5, 8, {2, 2, 2, 2, 2}},           // Test Case 6
        {4, 3, {1, 1, 1, 3}},              // Test Case 7
        {7, 15, {3, 4, 5, 2, 1, 3, 2}},    // Test Case 8
        {2, 1, {1, 1}},                    // Test Case 9
        {5, 10, {5, 5, 5, 5, 5}},          // Test Case 10
        {6, 12, {3, 3, 3, 3, 3, 3}},       // Test Case 11
        {4, 7, {1, 2, 3, 5}},              // Test Case 12
        {3, 4, {4, 4, 4}},                 // Test Case 13
        {8, 20, {2, 3, 4, 5, 1, 2, 3, 5}}, // Test Case 14
        {5, 0, {1, 2, 3, 4, 5}}            // Test Case 15
        
    };

    // Expected outputs for verification
    vector<int> expected = {4, 3, 0, 6, 0, 4, 3, 5, 1, 2, 4, 3, 1, 7, 0};

    // Run each test case
    for (int i = 0; i < testCases.size(); i++)
    {
        int n = get<0>(testCases[i]);
        int k = get<1>(testCases[i]);
        vector<int> arr = get<2>(testCases[i]);

        int result = longestSubarrayWithSumK(arr, n, k);
        cout << "Test Case " << i + 1 << ": ";
        cout << "n = " << n << ", k = " << k << ", arr = [";
        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << (j < n - 1 ? ", " : "");
        }
        cout << "]" << endl;
        cout << "Output: " << result << " | Expected: " << expected[i];
        cout << " | " << (result == expected[i] ? "PASS" : "FAIL") << endl
             << endl;
    }

    return 0;
}