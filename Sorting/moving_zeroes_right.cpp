#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void move_zeroes_right(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
}
int main(){
    int arr[6]={0,1,0,0,2,3};
    move_zeroes_right(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
    return 0;
}
