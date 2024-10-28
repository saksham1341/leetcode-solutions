class Solution {
public:
    int lengthOfLastWord(string s) {
        int e = s.size() - 1;
        while (s[e] == ' ') e--;

        int b = e;
        while (b >= 0 && s[b] != ' ') b--;

        return e - b;
    }
};
