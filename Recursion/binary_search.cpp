#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binary_search(int arr[],int start,int end, int key){
    
    //base condition
    if(start>end){
        return false;
    }

    int mid=start+(end-start)/2;
    //cout<<arr[mid]<<endl;

    if(arr[mid]==key){
        return mid; 
    }
    if(arr[mid]>key){
        return binary_search(arr,start,mid-1,key);  
    }else{
        return binary_search(arr,mid+1,end,key); 
    }
}

int main(){
    int arr[6] = {2,4,6,9,9,9};
    int size = 6;

    int ans = binary_search(arr,0,6,4);
    if(ans){
        cout<<"Found"<<endl;
    }else{
        cout<<"Notfound"<<endl;
    }

    return 0;
}