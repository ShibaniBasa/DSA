#include <bits/stdc++.h> 
void wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector <int> ans;
    for(int col=0;col<mCols;col++){
        if(col&1){
            for(int row=nRows-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }else{
            for(int row=0;row<nRows;row++){
                cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
    }
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    wavePrint(arr,3,3);
    return 0;
}

//timecomplexity: if n rows and m column thn->o(nm)