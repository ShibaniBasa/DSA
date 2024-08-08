#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fib(int n) {
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    int ans=fib(n-1)+fib(n-2);
    cout<<ans<<endl;
}

int main(){

    int num;
    cout<<"Enter the number you want to display the fibonacci series for:"<<endl;
    cin>>num;
    cout<< fib(num) <<endl;
    return 0;

}