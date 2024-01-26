#include<bits/stdc++.h>
using namespace std;

void swaparr(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[6]={11,22,33,44,55,66};
    int b[5]={22,33,44,55,66};
    swaparr(a,6);
    swaparr(b,5);
    print(a,6);
    print(b,5);
    return 0;
}