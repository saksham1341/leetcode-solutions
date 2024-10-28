class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a = 0, b = 0;

        while (b < t.size())
        {
            if (t[b] == s[a])
                a++;
            
            b++;
        }

        return a == s.size();
    }
};
