//  Brute
//  Time Complexity - O((N*M)log(N*M))
//  Space Complexity - O(N*M)
int findMedian(vector<vector<int>> &arr, int n, int m) {
    vector<int> a;
    for (auto x : arr) {
        for (auto y : x) {
            a.push_back(y);
        }
    }
    sort(a.begin(), a.end());
    return a[a.size() / 2];
}

//  Binary Search
//  Time Complexity - O(32*NlogM)
//  Space Complexity - O(1)
int countSmallerThanMid(vector<int> &row, int mid) {
    int l = 0, h = row.size() - 1;
    while (l <= h) {
        int md = (l + h) >> 1;
        if (row[md] <= mid)
            l = md + 1;
        else
            h = md - 1;
    }
    return l;
}

int Solution::findMedian(vector<vector<int>> &A) {
    int low = 1, high = 1e9;
    int n = A.size(), m = A[0].size();
    while (low <= high) {
        int mid = (low + high) / 2;
        int cnt = 0;
        for (int i = 0; i < n; i++) cnt += countSmallerThanMid(A[i], mid);

        if (cnt <= (n * m) / 2)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
