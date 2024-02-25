#include<bits/stdc++.h>
using namespace std;

int isSorted(int *arr, int size){
    if(size==0 || size==1) return true;
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans =isSorted(arr+1,size-1);
        return  ans;
    }
}

int main(){
    int arr[5]={2,4,5,14,9};
    int size=5;
    int ans=isSorted(arr,size);
    if(ans){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"Not sorted"<<endl;
    }
    return 0;
}