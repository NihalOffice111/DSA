// John is at a toy store help him pick maximum number of toys.
// He can only select in a continuous manner and he can select only two types of toys.

// Example:
// Input:
// 1
// abaccab

#include <bits/stdc++.h>
using namespace std;

int pickToys(string str)
{
    int i = 0, j = 0;
    unordered_map<char, int> mp;
    int maxi = 0;

    while (j < str.length())
    {
        // Add character to map
        mp[str[j]]++;

        // If more than two distinct toys, shrink the window
        while (mp.size() > 2)
        {
            mp[str[i]]--;
            if (mp[str[i]] == 0)
            {
                mp.erase(str[i]);
            }
            i++;
        }

        // Update the maximum only when we have at most 2 unique characters
       
            maxi = max(maxi, j - i + 1);
        
        
        j++;
    }
    return maxi;
}


int main()
{
    // 15 Test Cases
    string testCases[] = {
        "abaccab",       // 4  -> "acca"
        "aabbcc",        // 4  -> "aabb" or "bbcc"
        "abcabcabc",     // 2  -> "ab", "bc", "ca"
        "aaaaaa",        // 6  -> "aaaaaa"
        "abc",           // 2  -> "ab", "bc"
        "a",             // 1  -> "a"
        "ab",            // 2  -> "ab"
        "aabbbaacc",     // 6  -> "bbbaaa"
        "ababababab",    // 10 -> "ababababab"
        "aabbbaa",       // 6  -> "aabbba"
        "abcbbbccaa",    // 6  -> "bbbcca"
        "cccccc",        // 6  -> "cccccc"
        "baccbccabcabc", // 5  -> "bccbc"
        "aaabbbcccddd",  // 4  -> "aaab" or "bbcc"
        "bbaccbccbaab",  // 5  -> "bccbc"
    };

    for (int i = 0; i < 15; i++)
    {
        cout << "Test Case " << i + 1 << ": Input = \"" << testCases[i]
             << "\", Output = " << pickToys(testCases[i]) << endl;
    }

    return 0;
}