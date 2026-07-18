// problem: RansomNote
// platform:leetcode
// level:easy
// hashing algorithm is used here
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int freq[26] = {0};

        // Count all characters in magazine
        for (int i = 0; i < magazine.length(); i++) {
            freq[magazine[i] - 'a']++;
        }

        // Use characters for ransom note
        for (int i = 0; i < ransomNote.length(); i++) {

            freq[ransomNote[i] - 'a']--;

            // Character not available
            if (freq[ransomNote[i] - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};
