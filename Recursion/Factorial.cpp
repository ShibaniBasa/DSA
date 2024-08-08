#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Recursion mtlb pehle base condition likhna h phir recursion relation banana h
//saare recursion mein ye formulae apply krna h

int factorial(int num){
    //base condition
    if(num==0){
        return 1;
    }
    //concepttttttt
    /*int chotta_problem=factorial(num-1);
    return num*chotta_problem;*/

    return num*factorial(num-1);
}

int main(){

    int num;
    cout<<"Enter the number you want to calculate the factorial for:"<<endl;
    cin>>num;
    int ans=factorial(num);
    cout<<ans;
    return 0;

}