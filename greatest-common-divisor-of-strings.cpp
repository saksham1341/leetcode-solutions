class Solution {
public:
    int gcd(int a, int b)
    {
        if (b == 0) return a;
        else return gcd(b, a % b);
    }
    
    string gcdOfStrings(string str1, string str2) {
        if (str1.size() < str2.size()) swap(str1, str2);

        int x = gcd(str1.size(), str2.size());

        int j = 0;
        for (int i = 0; i < str1.size(); i++)
        {
            if (str1[i] != str2[j]) return ;
            else j = (j + 1) % x;
        }

        j = 0;
        for (int i = 0; i < str2.size(); i++)
        {
            if (str2[i] != str2[j]) return ;
            else j = (j + 1) % x;
        }

        return str2.substr(0, x);
    }
};
