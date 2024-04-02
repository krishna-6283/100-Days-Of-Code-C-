class Solution {
public:
    int lengthOfLastWord(std::string s) {
        reverse(s.begin(), s.end());
        int count = 0;
        while (count < s.size() && s[count] == ' ') {
            count++;
        }
        int ans = 0;
        for (int j = count; j < s.size() && s[j] != ' '; j++) {
            ans++;
        }
        return ans;
    }
};