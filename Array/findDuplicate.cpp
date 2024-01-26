#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) 
{//   cout<<arr.size()<<endl;
   int ans=0;
	for(int i=0;i<arr.size();i++){
		ans=ans^arr[i];
	}
	for(int i=1;i<arr.size();i++){
		ans=ans^i;
	}
	return ans;
	
}

int main(){
    vector<int>arr={2,3,4,1,2}; //elements provided must be 1 to n-1
    cout<<findDuplicate(arr);
    return 0;
}