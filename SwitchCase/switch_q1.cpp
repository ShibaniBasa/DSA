#include<iostream>
using namespace std;

int main(){
    int num1=1;
    char num2='2'; 
  /*pehle wale switch se num2 '2' ke lye case '2' mein jaayenge phir waha aur ek switch case h tho
     waha num1 h jiska value 1 h tho nested switch ko display kardenge.
  */
    switch(num2){                        //switch(exp){case const1: the data type of const1 depends upon the data-type of expression}
        case 1: cout<<"First"<<endl;
                break;
        case 2: cout<<"Second"<<endl;
                break;
        case '1':cout<<"ye string ke lye h bhai"<<endl; //jab bhi expression k datatype char mein hoga 
                 break;
        case '2':switch(num1){                
                    case 1:cout<<"Ye nested switch se h"<<endl;
                }
                break;
        default:cout<<"meaw!galat choice!!";
                break;
    }
    return 0;
}
