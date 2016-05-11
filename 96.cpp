class Solution {
public:
    int a[100];
    int numTrees(int n) {
        a[0] = 1;
        for (int j = 1; j <= n; ++j) {
            for (int i = 0; i < j; ++i) {
                a[j] += a[i] * a[j-1-i];
            }
        }
        return a[n];
    }
};
