#include<bits/stdc++.h>
using namespace std;

int sum(int *arr, int size){
    if(size==0) return 0;
    if(size==1) return arr[0];

    return arr[0]+sum(arr+1,size-1);
}

int main(){
    int arr[5]={2,4,5,1,9};
    int size=5;
    int ans=sum(arr,size);
    cout<<"total : "<<ans;
    return 0;
}