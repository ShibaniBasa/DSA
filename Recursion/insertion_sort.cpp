#include <iostream>
#include <algorithm>
using namespaces std;

void insertion_sort(int *arr[],int n){\

    //base condition
    if(n==0||n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    insertion_sort(arr,n-1);
}
int main(){
    int arr[5]={2,5,1,6,9};
    insertion_sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0; 
}