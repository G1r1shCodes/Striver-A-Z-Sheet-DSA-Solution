#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int i : nums) {
            freq[i]++;
        }

        vector<vector<int>> result;
        for (auto it : freq) {
            result.push_back({it.first, it.second});
        }

        return result;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> res = sol.countFrequencies(nums);

    // Print result
    cout << "\nFrequencies:\n";
    for (auto pair : res) {
        cout << "[" << pair[0] << ", " << pair[1] << "]\n";
    }

    return 0;
}
