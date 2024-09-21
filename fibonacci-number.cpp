class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        else if (n == 1) return 1;

        int arr[3] = {0, 0, 1};
        for (int i = 2; i <= n; i++)
        {
            arr[0] = arr[1];
            arr[1] = arr[2];
            arr[2] = arr[0] + arr[1];
        }

        return arr[2];
    }
};
