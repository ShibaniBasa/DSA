#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int power(int num){

    //base condition
    if(num==0){
        return 1;
    }
    //concepttttttt
    /*int chotta_problem=power(num-1);
    int badaproblem=2*chotta_problem
    return badaproblem;*/

    return 2*power(num-1);
}

int main(){

    int num;
    cout<<"Enter the number you want to calculate the factorial for:"<<endl;
    cin>>num;
    int ans=power(num);
    cout<<ans;
    return 0;

}