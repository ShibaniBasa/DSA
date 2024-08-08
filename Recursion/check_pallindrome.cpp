#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_pallindrome(string s,int start,int end){
    //base condition
    if(start>end){
        return true;
    }
    if(s[start]!=s[end]){
        return false;
    }else{
        return is_pallindrome(s,start+1,end-1);
    }
}

int main(){
    string s;
    cout<<"Enter your string:"<<endl;
    cin>>s;
    int end=s.length()-1;
    bool ans=is_pallindrome(s,0,end);
    if(ans){
        cout<<"Yes, pallindrome"<<endl;
    }else{
        cout<<"Not yet"<<endl;
    }
    return 0;
}