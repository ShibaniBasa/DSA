#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    string str;
    cout << "Enter a String: ";
    getline(cin, str);
    cout << "String before Replacing is : " << str << endl;
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(str[i]);
        }
    }
    
    cout << "String after Reverse is :"<<temp<<endl;
}