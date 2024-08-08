#include<iostream>
using namespace std;
void swap_alternate(int arr[],int num){
    int start=0;
    int end=1;
    while(end!=num-1){
        swap(arr[start],arr[end]);
        start=start+2;
        end=end+2;
    }
}
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[10],num;
    cout<<"Enter an even number of elements into the array:"<<endl;
    cin>>num;
    cout<<"Enter the numbers you want in the array:"<<endl;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    swap_alternate(arr,num);
    print_array(arr,num);
    return 0;
}