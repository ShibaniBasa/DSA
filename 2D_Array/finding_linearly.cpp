#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int finding_key(int arr[][3],int key, int row, int cols){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (arr[i][j]==key)
            {
               cout<<"Found"<<i<<j<<endl;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int key;
    cout<<"Enter the key you want to search:"<<endl;
    cin>>key;
    finding_key(arr,key,3,3);
    return 0;
}

//time complexity - O(n^2)