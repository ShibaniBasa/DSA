#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool linear_search(int arr[],int size,int key){
    
    //base condition
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true; 
    }else{
        bool remain_array=linear_search(arr+1,size-1,key);
        return remain_array;
    }
}

int main(){
    int arr[5] = {2,4,9,9,9};
    int size = 5;

    int ans = linear_search(arr, size,2);
    if(ans){
        cout<<"Found"<<endl;
    }else{
        cout<<"Notfound"<<endl;
    }

    return 0;

}