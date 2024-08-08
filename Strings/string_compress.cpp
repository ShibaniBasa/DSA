#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int compress(vector<char> chars){
    int i=0;   //indicating to the 1st element of chars array
    int ansIndex=0;  //to make changes in the same array
    int n=chars.size();  //chars array k length
    
    int j=i+1; //j i ke next index se shuru hooga
    while(i<n){     //jab tak i<n hooga
        while(j<n && chars[i]==chars[j]){    //j<n hooga aur chars[i] mein jo hoga chars[j] mein whi hoga tab aur ek index aage badh jaayega
            j++;
        }
        //yaha kab aaoge
        //ya tho vector poora traverse krdia
        //ya fer new/different character encounter kia hai
     
        //oldchar store karlo
        chars[ansIndex++]=chars[i];  // original element store karo

        int count=j-i;               //count nikalo, as i starting index h aur j occurance ke basis pe change horha h

        if(count>1){
            //converting counting into single digit and saving in answer
            string cnt=to_string(count);
            for(char ch:cnt){
                chars[ansIndex++]=ch;
            }
        }
        i=j;
    }
    return ansIndex;

}
