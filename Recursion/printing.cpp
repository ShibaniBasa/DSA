#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int printing(int num){
    if(num==0){
        return 0;
    }
    cout<<num;
    //concepttttttt
    /*jab tak num==0 nahi hota tab tak number print karte raho, ek baar print karao
    phir decrease karo, phir print karo*/

    return printing(num-1);
    //agar ham printing wala statement recursive function ke neeche likhde tho num 1-2-3-4 aise print hojayega, kyunki return reversely karega aur print bhi waisa hi hoga.
    //cout<<num;
}

int main(){

    int num;
    cout<<"Enter the number you want to calculate the factorial for:"<<endl;
    cin>>num;
    int ans=printing(num);
    cout<<ans;
    return 0;

}