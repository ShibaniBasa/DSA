#include<iostream>
using namespace std;

int nth_prime(int n){
    int i,j,k;
    int count=0;
    while(i!=n){
     for(k=0;i<10;k++){
        for(j=1;j<=n;j++){
            if(k%j==0){
               count=count+1;
               return count;
               return k;
            }
        }
     }
     i++;
    }
    if(count>1){
        return 0;
    }else{
        return k;
    }
}
int main(){
    int num;
    cout<<"Enter the nth term:";
    cin>>num;
    cout<<nth_prime(num);
}
