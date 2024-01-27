#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
        int rights=accumulate(nums.begin(),nums.end(),0);
        int lefts=0;
        for(int i=0;i<nums.size();i++){
            rights-=nums[i];
            if(lefts==rights) return i;
            lefts+=nums[i];
        }
        return -1;
    }

int main(){
    vector<int>arr={1,7,3,6,5,6};
    cout<<pivotIndex(arr);
    return 0;
}