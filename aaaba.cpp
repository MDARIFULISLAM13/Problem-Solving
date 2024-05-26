#include <iostream>
#include <vector>
#include <bitset>

std::vector<int> findSubset(const std::vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < (1 << n); ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                sum += nums[j];
            }
        }
        if (sum == target) {
            std::vector<int> subset;
            for (int j = 0; j < n; ++j) {
                if (i & (1 << j)) {
                    subset.push_back(nums[j]);
                }
            }
            return subset;
        }
    }
    return {}; // No subset found
}

int main() {
    std::vector<int> nums = { 1, 4, 16, 32 };
    int target = 27;

    std::vector<int> subset = findSubset(nums, target);

    if (!subset.empty()) {
        std::cout << "Subset: ";
        for (int num : subset) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "No subset found." << std::endl;
    }

    return 0;
}
