class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> res;

        int k = 1;
        while (1)
        {
            if (k <= n)
            {
                res.push_back(k);
                k *= 10;
            }
            else
            {
                k /= 10;
                while (k % 10 == 9)
                    k /= 10;
                k++;

                if (k == 1) break;
            }
        }

        return res;
    }
};
