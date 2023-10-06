#include <iostream>
#include<vector>
using namespace std;
 
 vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }

int main(){
    vector<int> curVector={3,4,1,5,6,7};
    vector<int> result={};
    int target=9;
    result =twoSum(curVector,target);
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
}