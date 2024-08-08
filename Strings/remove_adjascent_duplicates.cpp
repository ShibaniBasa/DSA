#include <iostream>
 #include <string.h>
 using namespace std;

 int main(){

    string s;
    cout << "Enter a String: ";
    getline(cin, s);
    cout << "String before Reverse is : " << s << endl;
    for(int i=0;i<s.length()-1;i++){
            for(int j=i+1;j<s.length();j++){
                if(s[i]==s[j]){
                    s.erase(s[i]);
                    s.erase(s[j]);
                }
            }
    }
    
    cout << "String after Reverse is :"<<s<<endl;
}