/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse_words(string s){
    vector <string> temp;
    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            temp.push_back(str);
            str="";
        }else{
            str+=s[i];
        }
    }
    temp.push_back(str);

    int i;
    for(i=temp.size()-1;i>0;i--){
        cout<<temp[i]<<" ";
    }
    cout<<temp[0]<<endl;
}

int main(){
    string s = "i like this program very much"; 
     
    return 0;
}*/


 #include <iostream>
 #include <string.h>
 using namespace std;

void reverse_string(string s){
       int start=0;
       int end=s.length()-1;
       while(start<end){
           swap(s[start++],s[end--]);
       }
}

 int main(){

    string s;
    cout << "Enter a String: ";
    getline(cin, s);
    cout << "String before Reverse is : " << s << endl;
    int start = 0;
    int p = 0;
    for (int i = 0; i <= s.length(); i++){
         if (s[p] == ' ' || s[p] == '\0')
         {
               int end = p - 1;
               while (start <= end){
                 swap(s[start],s[end]);
                 start++;
                 end--;
                }
                start=p+1;
         }
         p++;
    }
    
    cout << "String after Reverse is :"<<s<<endl;
}