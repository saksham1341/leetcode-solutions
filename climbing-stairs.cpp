class Solution {
public:
    map <int, int> mem;

    int climbStairs(int n) {
        if (mem.find(n) != mem.end()) return mem[n];
        else if (n < 0) return 0;
        else if (n == 0 || n == 1) return 1;

        mem[n] = climbStairs(n - 1) + climbStairs(n - 2);

        return mem[n];
    }
};
