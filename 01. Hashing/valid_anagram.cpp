/*
----------------------------------------
Problem: Valid Anagram
LeetCode: 242

Pattern: Hashing (Frequency Array)

Difficulty: Easy

Approach:
1. If the lengths of both strings are different,
   they cannot be anagrams.
2. Create a frequency array of size 26
   (for lowercase English letters).
3. Increase the frequency for each character in
   the first string.
4. Decrease the frequency for each character in
   the second string.
5. If every frequency becomes 0, both strings
   are anagrams.

Time Complexity: O(n)
Space Complexity: O(1)
----------------------------------------
*/
class Solution {
public:
    bool isAnagram(string s, string t) {

        // If lengths are different, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        // Frequency array for 26 lowercase English letters
        int freq[26] = {0};

        // Count characters from first string
        // and remove characters from second string
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        // Check whether every frequency becomes zero
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        // Strings are anagrams
        return true;
    }
};
