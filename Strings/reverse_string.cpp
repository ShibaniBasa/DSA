#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverse_string(char ch[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(ch[start++],ch[end--]);
    }
}
int get_length(char ch[]){ //we can also find this by s.size() using library
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char ch[10];
    cout<<"Enter the string which you wanted to enter:";
    cin>>ch;
    int n=get_length(ch);
    reverse_string(ch,n);
    cout<<ch<<endl;
    return 0;
}