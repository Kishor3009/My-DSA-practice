#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){
        int minin=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minin]){
                minin=j;
            }
        }
        swap(arr[minin],arr[i]);
    }
}

int main(){
    vector<int>arr={33,11,22,66,44,55};
    int n=arr.size();
    selectionSort(arr, n);
    for(int num : arr) {
        cout << num << " ";
    }
    return 0;
}