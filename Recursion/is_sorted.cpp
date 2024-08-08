#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool is_sorted(int arr[],int size){   //
    //base case
    if(size<=1){
        return true;
    }
    if(arr[0]>arr[1]){
        return 0;
    }else{
        bool remainingpart=is_sorted(arr+1,size-1);
        return remainingpart;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    bool ans=is_sorted(arr,size);
    if(ans){
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}