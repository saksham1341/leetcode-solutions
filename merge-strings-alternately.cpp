class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1 = word1.size();
        int l2 = word2.size();
        
        string res;

        int ind1 = 0;
        int ind2 = 0;


        while (ind1 < l1 && ind2 < l2)
        {
            res += word1[ind1++];
            res += word2[ind2++];
        }
        
        while (ind1 < l1)
            res += word1[ind1++];

        while (ind2 < l2)
            res += word2[ind2++];
        
        return res;
    }
};
