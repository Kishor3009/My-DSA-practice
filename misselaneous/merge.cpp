#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums3;
        int i=0, j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            } 
            else{
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            nums3.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            nums3.push_back(nums2[j]);
            j++;
        }
        nums1.clear();
        nums1.assign(nums3.begin(),nums3.end());
    }

int main(){
    vector<int>a = {2,4,6,7};
    vector<int>b = {1,4,5,9};
    merge(a,4,b,4);
    for(int num : a) {
        cout << num << " ";
    }
    return 0;
}