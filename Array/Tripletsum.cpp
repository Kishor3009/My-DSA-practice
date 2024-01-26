#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>>ans;\
	set<vector<int>>temp;
	sort(arr.begin(),arr.end());

	for(int i=0;i<arr.size()-2;i++){
		int l=i+1, r=n-1;
		while(l<r){
			if(arr[l]+arr[i]+arr[r]==K){
				temp.insert({arr[l],arr[i],arr[r]});
			}
			if(arr[l]+arr[i]+arr[r]>K) r--;
			else{
				l++;
			}
		}
	}
	for(auto i:temp){
		ans.push_back(i);
	}
	return ans;
}

int main(){
    vector<int>a={3, 2, 7, 4, 5};
    vector<vector<int>>b=findTriplets(a,5,12);
    for(auto it:b){
        for (int num : it)
        {
            cout << num << " ";
        }
    }
    return 0;
}