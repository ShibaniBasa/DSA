#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getSum(int *arr,int n){ 
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    
    //variable size array created in the heap memory
    int* arr=new int[n];

    //taking inputs in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=getSum(arr,n);
    cout<<"Answer is:"<<ans<<endl;
    return 0;
}