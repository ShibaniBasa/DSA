#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int update_by_value(int n){   //a copy of n is created whichh has a different memory address thn the n present in the main function, so the increment will occur in copy address not in the address of n present in the main function.
    n++;             //thisas function is called as call by value. 
    return n;        //ye call by value h jaha ek n k ek dusra copy with diff address bnega aur modify wo copy wale address mein hoga, jisse main wale address mein kuch change nahi honge
}

int update_by_ref(int &n){  //yaha ham main mein jo n ka address pada tha uss address ko yaha pass kardiye, tho naya address nahi create hua
    n++;                    //taaki address mein jo bhi change hoga, wo main ke n mein bhi change hoga;
    return n;
}

/*
int& func(int a){ //this method is called as function_by_reference
    int n=a;      //This function is considered as one of the bad practice, as jaise n here ek local variable h, aur function ke bahar kuch kaam nahi karega
    int& ans=n;   //similarly int& ans ye bhi local h bahar ye bhi kuch kaam nahi karega
                  //Thus no point of creating this function.
    return ans;
}
*/

int main(){
     
    /*int i=5;
    cout<<i<<endl;
    int &j=i;
    cout<<j<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    return 0;*/

    //here j is the reference variable for i, both i and j having different name share the same memory location.

    //Why reference variable?--->A reference variable is a variable that points to an object of a given class, letting you access the value of an object. 

    //--->By not usin reference variable
    int n=5;
    cout<<"Before function:"<<n<<endl;
    update_by_value(n);
    cout<<"After function:"<<n<<endl;//------>this will give the value of n as 5, it will not update, as after calling

    cout<<"Before function:"<<n<<endl;
    update_by_ref(n);
    cout<<"After function:"<<n<<endl; 
    return 0; 
}