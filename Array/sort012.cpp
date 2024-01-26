#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int temp;
   int k=0;
   for(int i=0;i<n;i++){
      for(int j=0;j<n-i;j++){
         if(arr[i]>arr[j+k]){
            temp=arr[i];
            arr[i]=arr[j+k];
            arr[j+k]=temp;
         }
      }
      k++;
   }
}

int main(){
    int arr[6] = {0,1,2,0,1,2};
    sort012(arr,6);
    for(int i =0; i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}