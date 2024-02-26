#include<bits/stdc++.h>
using namespace std;

bool binary(int *arr, int s, int e, int k){
    if(s>e) return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==k) return true;
    if(arr[mid]<k){
        binary(arr,mid+1,e,k);
    }
    else{
        binary(arr,s,mid-1,k);
    }
}

int main(){
    int arr[6] = {2,4,6,8,11,15};
    int size=6;
    int k=11;
    cout<<"Is present or not : "<<binary(arr,0,5,12);
    return 0;
}