class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] == 0)
            {
                if (i == 0 || flowerbed[i - 1] == 0)
                {
                    if (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)
                    {
                        flowerbed[i] = 1;
                        count++;
                        i++;
                    }
                }
            } else i++;
        }
        cout << count << endl;
        return count >= n;
    }
};
