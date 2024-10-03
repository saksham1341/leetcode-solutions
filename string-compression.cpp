class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int chr = chars[0];
        int count = 1;
        int slow = 1;
        int fast;

        for (fast = 1; fast < n; fast++)
        {
            if (chars[fast] == chr)
                count++;
            else
            {
                if (count > 1)
                {
                    int len = 1 + floor(log10(count));
                    slow += len;
                    for (int i = 1; i <= len; i++)
                    {
                        chars[slow - i] = '0' + (count % 10);
                        count /= 10;
                    }
                }
                chr = chars[fast];
                chars[slow++] = chr;
                count = 1;
            }
        }

        if (count > 1)
        {
            int len = 1 + floor(log10(count));
            slow += len;
            for (int i = 1; i <= len; i++)
            {
                chars[slow - i] = '0' + (count % 10);
                count /= 10;
            }
        }

        return slow;
    }
};
