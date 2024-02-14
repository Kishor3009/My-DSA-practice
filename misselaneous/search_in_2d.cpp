#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size();
        int col= matrix[0].size();

        int rowIndex=0;
        int colIndex=col-1;

        while(rowIndex<row && colIndex>=0){
            int ele=matrix[rowIndex][colIndex];

            if(ele==target){
                return 1;
            }
            if(ele<target){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        return 0;
    }

int main(){
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int t;
    cout<<"Enter the element to be searched"<<endl;
    cin>>t;
    if(searchMatrix(matrix,t)==1){
        cout<<"found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

    return 0;
}