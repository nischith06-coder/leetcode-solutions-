#include <vector>
#include <algorithm>

void moveZeroes(std::vector<int>& nums) {
    int last_non_zero = 0;
    for (int cur = 0; cur < nums.size(); ++cur) {
        if (nums[cur] != 0) {
            std::swap(nums[last_non_zero], nums[cur]);
            last_non_zero++;
        }
    }
}