//  Xor Bits
//  Time Complexity - O(n)
//  Space Complexity - O(1)
class Solution {
   public:
    int singleNonDuplicate(vector<int>& nums) {
        int xors = 0;
        for (auto x : nums) xors ^= x;
        return xors;
    }
};

//  Binary Search
//  Time Complexity - O(logn)
//  Space Complexity - O(n)
class Solution {
   public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (right - left > 0) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == nums[mid ^ 1])
                left = mid + 1;
            else
                right = mid;
        }
        return nums[left];
    }
};
