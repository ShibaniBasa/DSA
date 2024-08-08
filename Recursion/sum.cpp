#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumDigit(int arr[],int start,int end){

    //base case
    if(start==end){
        return;
    }
    int sum=0;
    sum=sum+arr[start];
    sumDigit(start++,end);
    return sum;
}
int main(){
    int arr[3]={1,2,3,4};
    int ans=sumDigit(arr,0,3);
    cout<<ans<<endl;
    return 0;
}