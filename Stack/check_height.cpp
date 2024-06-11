#include<bits/stdc++.h>
using namespace std;

int heightChecker(vector<int>& heights) {
        int n=heights.size();
        vector<int>arr=heights;
        // for(auto it : heights){
        //     arr.push_back(it);
        // }
        int c=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
        for(int i=0;i<n;i++){
            if(arr[i]!=heights[i]) c++;
        }
        return c;
    }

int main(){
    vector<int>a = {1,1,4,2,1,3};
    int n=heightChecker(a);
    cout<<n<<endl;
    return 0;
}