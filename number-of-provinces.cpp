class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> arr(n, -1);
        stack<int> s;
        int pc = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != -1) continue;

            s.push(i);

            while (!s.empty())
            {
                int x = s.top();
                s.pop();

                if (arr[x] != -1) continue;
                
                arr[x] = pc;
                for (int j = 0; j < n; j++)
                    if (j != x && isConnected[x][j]) s.push(j);
            }

            pc++;
        }

        return pc;
    }
};
