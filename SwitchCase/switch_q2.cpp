#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char op;
    cout<<"Enter the value for num1 & num2:"<<endl;
    cin>>num1>>num2;
    cout<<"Enter the operation you want to use for calculating: ";
    cin>>op;
    switch(op){
        case '+': cout<<(num1+num2)<<endl;
                  break;
        case '-': cout<<(num1-num2)<<endl;
                  break;
        case '*': cout<<(num1*num2)<<endl;
                  break;
        case '/': cout<<(num1/num2)<<endl;
                  break;
        case '%': cout<<(num1%num2)<<endl;
                  break;
        default:  cout<<"Kuch valid operation choose karo!"<<endl;
                  break;

    }
    return 0;
}