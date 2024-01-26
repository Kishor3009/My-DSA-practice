#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[7]={2,3,6,7,3,2,7};
    cout<<findUnique(arr,7);
    return 0;
}