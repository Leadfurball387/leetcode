#include <iostream>
#include <vector>



std::vector<int> twoSum(std::vector<int>& nums, int target) {

    std::vector<int> addends{};

    for (int i = 0; i < size(nums) - 1; i++) {
        for (int j = 1; j < size(nums); j++) {
            if (nums[i] + nums[j] == target) {
                if (i == j) {
                    continue;
                }
                else {
                    addends.push_back(i);
                    addends.push_back(j);
                    return addends;
                }
            }
        }
    }
    
    return addends;
}

int main() {

    std::vector<int> nums{ 2,5,5,11 };
    int target{ 10 };

    for (int i : twoSum(nums, target)) {
        std::cout << i << '\n';
    }

	return 0;
}