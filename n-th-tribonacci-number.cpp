class Solution {
public:
    int tribonacci(int n) {
        int arr[] = {0, 0, 1, 1};

        if (n == 0) return 0;
        else if (n == 1) return 1;
        else if (n == 2) return 1;

        for (int i = 3; i <= n; i++)
        {
            arr[0] = arr[1];
            arr[1] = arr[2];
            arr[2] = arr[3];
            arr[3] = arr[0] + arr[1] + arr[2];
        }

        return arr[3];
    }
};
