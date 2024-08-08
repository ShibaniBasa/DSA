#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A'&& ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
        return 0;
}
char toLowerCase(char s){
    if((s>='a'&& s<='z')||(s>='0' && s<='9')){
        return s;
    }else{
        char temp=s-'A'+'a';
            return temp;
    }
}
bool checkPalindrome(string s) {
    int start=0;
    int end=s.length()-1;
    while(start<=end){
        if(s[start]!=s[end]){
            return 0;
        }else{
            start++;
            end--;
        }
    }
    return 1; 
}
bool isPalindrome(string s) {
    //pehle faltu character hatao
    string temp= "";
    for(int j=0;j<s.length();j++){
        if(valid(s[j])){
                temp.push_back(s[j]);
        }
    }
    //lowercase me kardo
    for(int j=0;j<temp.length();j++){
            temp[j]=toLowerCase(temp[j]);
    }

    return checkPalindrome(temp);
}  

int main(){
    char ch[10];
    cout<<"Enter the string which you wanted to enter:";
    cin>>ch;
    cout<<"Pallindrome or not"<<isPalindrome(ch)<<endl;

    return 0;
}
