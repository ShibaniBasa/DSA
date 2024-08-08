#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void add_rowwise(int arr[][3],int row,int cols){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    add_rowwise(arr,3,3);
    return 0;
}


