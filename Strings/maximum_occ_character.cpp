#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26]={0};     //initializing with all the 26 location present inside the array to 0

    //creating an array for the count of characters
    for(int i=0;i<s.length();i++){      //string length ke cmplt krne tak chlega
           char ch=s[i];                  //ek ek letter ko ch mein store kararha h
           int number=0;
           if(ch>='a' && ch<='z'){         //phir agar small character h tho uske respective number mein convert horha h similarly for capital letter
               number=ch-'a';
           }else{
               number=ch-'A';
           }
           
           arr[number]++;                  //phir array ke uss number wale index pe jaake uske 0 wale value ko increment karrha h
    }                            //time complexity here is O(n), space complexity=O(1)

    //find maximum occurances of the character
    int maxi=0, ans=0;
    for(int i=0;i<26;i++){          //ye pura array mein kaun sabse jyada occur horha h wo dikhayega
        if(maxi<arr[i]){
            ans=i;             
            maxi=arr[i];
        }
    }                               //where as time complexity here is O(1)

    char finalAns='a'+ans;   //ans mein index h, jo a ke saath add hoge tho max occurance wala letter miljayega
    // occ=maxi;
    return finalAns;
}

int main(){
    string s;
    cin>>s;
    cout<<getMaxOccCharacter(s)<<endl;
    return 0;

}