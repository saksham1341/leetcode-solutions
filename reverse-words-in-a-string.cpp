class Solution {
public:
    string reverseWords(string s) {
        string wrd;
        string res;

        for (auto c: s)
        {
            if (c == ' ')
            {
                if (wrd.size())
                {
                    res = wrd + " " + res;
                    wrd = "";
                }
            }
            else wrd += c;
        }

        if (wrd.size())
            res = wrd + " " + res;

        return res.substr(0, res.size() - 1);
    }
};
