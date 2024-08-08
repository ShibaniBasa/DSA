#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int finding_max_sumrow(int arr[][3],int row, int cols){
    int maxi = INT_MIN;
    int rowindex=-1;

    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=i;
        }
    }
    cout<<"The maximum sum is:"<<maxi<<endl;
    return rowindex;
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    finding_max_sumrow(arr,3,3);
    return 0;
}
