#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter you name:"<<endl;
    cin>>name;

    cout<<"Your name is:"<<name<<endl;
    cout<<"Length: "<<getLength(name)<<endl;
    return 0;
}

//length nikalne ke lye: int len=strlen(name);
//compare: strcmp(s1,s2)-->btata h not equal h equal h
//copy: strcpy(dest,src)