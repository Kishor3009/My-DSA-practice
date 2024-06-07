#include <iostream>
#include <vector>

using namespace std;

void generateSubsets(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& subsets) {
    if (index == nums.size()) {
        if (!current.empty()) {
            subsets.push_back(current);
        }
        return;
    }

    // Include the current element
    current.push_back(nums[index]);
    generateSubsets(nums, index + 1, current, subsets);
    current.pop_back(); // Backtrack

    // Exclude the current element
    generateSubsets(nums, index + 1, current, subsets);
}

vector<vector<int>> allSubsets(vector<int>& nums) {
    vector<vector<int>> subsets;
    vector<int> current;
    generateSubsets(nums, 0, current, subsets);
    return subsets;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = allSubsets(nums);
    for (const auto& subset : result) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
    int co=0;
    for (const auto& subset : result) {
        float m=0;
        float n=0;
        for (int num : subset) {
            m+=num;
            n++;
        }
        float xx=m/n;
        cout<<"tot : "<<xx<<endl;
        int l=0;
        for(int num:subset){
            if(num<xx){
                co++;
                break;
            }
        }
        cout<<"co : "<<co<<endl;
    }
    cout<<"This is max : "<<co<<endl;

    return 0;
}
