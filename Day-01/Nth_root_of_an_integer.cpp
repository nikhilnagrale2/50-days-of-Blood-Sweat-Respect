//  Binary Search
//  Time Complexity - O(Nlog(M*10^d))
//  Space Complexity - O(1)
class Solution {
    double multiply(double mid, int n) {
        double ans = 1;
        for (int i = 1; i <= n; i++) {
            ans = ans * mid;
        }
        return ans;
    }

   public:
    double findNthRootOfM(int n, long long m) {
        double eps = 1e-7;  // I want to have accuracy of 6 decimal places
        double lo = 1, hi = m, mid;
        while (hi - lo > eps) {
            mid = (lo + hi) / 2;
            if (multiply(mid, n) < m) {
                lo = mid;
            } else {
                hi = mid;
            }
        }
        return lo;
    }
};

