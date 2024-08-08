#include<bits/stdc++.h>
using namespace std;

void calculate(int amount){
    int remain = amount;
    int count_500 =0, count_100 = 0, count_50=0, count_20=0 , count_10 =0, count_2=0,count_1=0;


    for(int i=1;i<=7;i++){    
    switch (i)              //sare case print krane k ninja technique
    {
    case 1:
        count_500 = remain/500;    //amount/500----->isse 500 ke kitne notes use horeh wo aajayenge
        remain = remain % 500;     //500 use krne ke baad kitne bach gye wo remainder mein aajayenge
        break;
    case 2:
        count_100 = remain/100;  //,,
        remain = remain % 100;
        break;
    case 3:
        count_50 = remain/50;   
        remain = remain % 50;
        break;
    case 4:
        count_20 = remain/20;
        remain = remain % 20;
        break;
    case 5:
        count_10 = remain/10;
        remain = remain % 10;
        break;

    case 6:
        count_2 = remain/2;
        remain = remain % 2;
        break;
    case 7:
        count_1=remain;
        break;
        
    
    default:
    cout<<"Enter a positive number!"<<endl;
        break;
    }
    }


    cout<<"number of 500 notes: "<<count_500<<endl;
    cout<<"number of 100 notes: "<<count_100<<endl;
    cout<<"number of 50 notes: "<<count_50<<endl;
    cout<<"number of 20 notes: "<<count_20<<endl;
    cout<<"number of 10 notes: "<<count_10<<endl;
    cout<<"number of 2 coins: "<<count_2<<endl;
    cout<<"number of 1 coins: "<<count_1<<endl;

}




int main()
{

    int amount;
    cout<<"Enter the amount: "<<endl;
    cin>>amount;

    if(amount>0){
        calculate(amount);
    }
    else{
        cout<<"Enter a positive amount!";
    }



 return 0;
}