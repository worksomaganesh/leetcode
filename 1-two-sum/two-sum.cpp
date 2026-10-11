#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap; // stores {value: index}

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // Complement already map lo unte, pair dorikesindi
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }

            // Map lo lekapothe, current number & index ni save cheyali
            numMap[nums[i]] = i;
        }

        return {};
    }
};