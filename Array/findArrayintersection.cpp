#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int>ans;
	int i=0, j=0;
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end());
	while(i<n && j<m){
		if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	return ans;
}

int main(){
    vector<int>a = {2,3,5};
    vector<int>b = {1,2,5};
    vector<int>c= findArrayIntersection(a,3,b,3);
    for(auto it:c){
        cout<<it<<" ";
    }
    return 0;
}