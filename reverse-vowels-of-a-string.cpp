class Solution {
public:
    bool isVowel(char x)
    {
        switch (x)
        {
            case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U': return true;
            default: return false;
        }

        return false;
    }

    string reverseVowels(string s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;


        while (j > i)
        {
            swap(s[i++], s[j--]);
        }

        return s;
    }
};
