#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void add_colwise(int arr[][3],int rows,int col){
    for(int cols=0;cols<col;cols++){
        int sum=0;
        for(int row=0;row<rows;row++){
            sum+=arr[row][cols];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    add_colwise(arr,3,3);
    return 0;
}
