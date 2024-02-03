#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   

    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    vector<int>arr={33,11,22,66,44,55};
    int n=arr.size();
    bubbleSort(arr, n);
    for(int num : arr) {
        cout << num << " ";
    }
    return 0;
}