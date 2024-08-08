#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sayDigit(int n,string arr[]){

    //base case
    if(n==0){
        return;
    }
    
    //processing
    int digit=n%10;
    n=n/10;
    
    cout<<arr[digit]<<" ";//function calling ke wajeh se ulta hoke aarha tho ulta print hoga
    //recursive function call
    sayDigit(n, arr);
    //cout<<arr[digit]<<" ";//yaha seedha print hoga.
}
int main(){
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigit(n,arr);
    return 0;
}