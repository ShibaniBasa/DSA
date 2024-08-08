#include <iostream>
using namespace std;

void bubble_sort(int *arr,int n){

    //base case-already sorted
    if(n==0 || n==1){    //if there is no item in the array then there is nothing to array
        return;
    }

    //1 case solve largest element ko end me rakh dega
    for(int i=0;i<n-1;i++){      
        //we swapped for one single item
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    //Recursive call
    bubble_sort(arr,n-1);
}
int main(){
    int arr[5]={2,5,1,6,9};
    bubble_sort(arr,3);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0; 
}

