#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //create a 2d array
    int arr[3][4];
    //taking input row wise
    /*for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }*/
    //taking input column wise
    for(int col=0;col<4;col++){  //jab column wise data lena pdega tho column pehle lenge phir row lenge
        for(int row=0;row<3;row++){
            cin>>arr[row][col];
        }
    }
    //showing output 
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col];
        }
        cout<<endl;
    }
    return 0;
}

//various initializaion of 2-d array
//int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}
//int arr[3][4]={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}}