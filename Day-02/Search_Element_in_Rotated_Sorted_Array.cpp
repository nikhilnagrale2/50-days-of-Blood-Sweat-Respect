//  Linear Search
//  Time Complexity - O(n)
//  Space Complexity - O(1)
class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int res = -1;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] == target) {
                res = i;
                break;
            }

        return res;
    }
};

//  Binary Search
//  Time Complexity - O(logn)
//  Space Complexity - O(1)
class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return mid;
            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            } else {
                if (nums[mid] <= target && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};