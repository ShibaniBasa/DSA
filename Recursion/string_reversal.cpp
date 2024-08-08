#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void string_reversal(string &s,int start,int end){  //here we passes the address of string as we want to modify the real string instead of creating a copy and reversing it so not string_reversal(string s,int start, int end)
    
    //base condition
    if(start>end){
        return;
    }
    swap(s[start++],s[end--]);
    string_reversal(s,start,end);
}

int main(){
    string s;
    cout<<"Enter your string:"<<endl;
    cin>>s;
    int len=s.length()-1;
    string_reversal(s,0,len);
    cout<<s<<endl;
    return 0;
}