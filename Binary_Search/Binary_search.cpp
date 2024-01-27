#include<bits/stdc++.h>
using namespace std;

int Binary_serach(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    //for big values mid = s + (e-s)/2
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int arr[6]={11,22,33,44,55,66};
    int key=55;
    cout<<Binary_serach(arr,6,55)<<endl;
    return 0;
}