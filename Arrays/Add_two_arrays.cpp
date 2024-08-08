#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> reverse(vector <int> v){
    int s=0;
    int e=v.size()-1;
    while(s<e){
        swap (v[s++],v[e--]);
    }
}

vector <int> find2ArraySum( int arr1[], int n1,int arr2[], int n2){
    
    int i=n1-1;// at last index of 1st arrray
    int j=n2-1;// at last index of 1st arrray
     
    int carry=0;  //carry pehle kuch nahi hoga
    vector <int> ans; //ans k ek array banalo
    while(i>=0 && j>=0){  //i aur j =0 se neeche nahi jaana chahye
        int val1=arr1[i];  //last wala value ko store karreh
        int val2=arr2[j];
        int sum=val1+val2+carry; //fir uska sum kardiye, aur agar kuch arry hooga tab bhi sum
        carry=sum/10;   //carry result/10 karke nikaldenge
        sum=sum%10;     //aur jo ones place mein h wo modulus ke through
        ans.push_back(sum); //aur uss sum ko sum wale array mein push kardiye
        i--;    //yaha pe uskke index ko ghatadiye
        j--;
    }

    //first case
    while(i>=0){   //incase pehla wala array ke andar elements bacha hua ho
        int sum=arr1[i]+carry;//sum nikallo carry agar h tho add karo nahi tho nahi
        carry=sum/10;
        int value=sum%10;
        ans.push_back(value);
        i--;
    }

    //second case
    while(j>=0){  // jab neeche wala array badaa ho
        int sum=arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }

    //third case
    while(carry!=0){   //jab pura addition perform krne ke baad bhi, carry ho, carry = zero na hua ho tab
        int sum= carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    //print(ans)
    return reverse(ans);

    //iss sab meinn reverse(ulta) answer aayega as ham reversely(ulta) answer store karreh,tho isko ulta karne ke lye hamko iska reverse krna padega by calling the reverse function
    reverse(ans);
}

int main(){
    int arr1[4]={1,2,3,4};
    int arr2[1]={4};
    find2ArraySum(arr1,4,arr2,1);
}