#include<bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
    vector<int>arr={33,11,22,66,44,55};
    int n=arr.size();
    insertionSort(n,arr);
    for(int num : arr) {
        cout << num << " ";
    }
    return 0;
}