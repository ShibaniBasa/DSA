#include<iostream>
using namespace std;
bool linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
}
void swap(int &num1,int &num2){
    int temp=num1;
    num1=num2;
    num2=temp;
}
int main(){
    int arr[10],num,key;
    cout<<"Enter the number of elements you want in an array:"<<endl;
    cin>>num;
    cout<<"Enter the numbers you want in the array:"<<endl;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key you want to num:"<<endl;
    cin>>key;
    bool found= linear_search(arr,num,key);
    if(found){
        cout<<"Found!";
    }else{
        cout<<"Not Found!";
    }
    return 0;
}

//hv to compare with almost all the elements
//time complexity o(n)
//slow