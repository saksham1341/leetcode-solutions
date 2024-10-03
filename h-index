class Solution {
public:
    int hIndex(vector<int>& citations) {
        vector<int> citationCounts(1001, 0);

        for (auto i: citations)
            citationCounts[i]++;
        
        int s = 0;
        int i = 1001;
        
        do
            s += citationCounts[--i];
        while (s < i);
        
        return i;
    }
};
