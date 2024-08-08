#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;

    //creation of 2-d array
    int** arr=new int*[row];   //here wo ek array bnata which contains a multiple row
    for(int i=0;i<row;i++){    //yaha  wo row mein column daal rha h
        arr[i]=new int[col];
    }
    //creation done

    //taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //displaying output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;     //column khatm hone ke baad naya row start krne ke lye new line k tab enter kiya
    }

    //releasing memory
    for(int i=0;i<row;i++){
        delete [] arr[i];    //isse pehle column wala delete hooga
    }
    delete []arr;  //phir row wala
     
    return 0;
}