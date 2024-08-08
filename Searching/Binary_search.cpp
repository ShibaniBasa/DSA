#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key){    //condition->Binary searching methods can be applied to monotonic function--->i.e. increasing/decreasing(only sorted function)
    int low=arr[0];
    int high=arr[n-1];
    int mid=(low+high)/2;         //agar low k value int_min h aur high h vallue int_max h tho usspe operate krna muskil h value jyada aajayega
    while(low<=mid){              //tho uske jagah-->ham ye formulae use krenge mid=low+(high-low)/2
        if(arr[mid]==key){
           return mid;
        }
        if(key>arr[mid]){
           low=mid+1;
        }else{
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    return -1;
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int index=binary_search(arr,8,3);
    cout<<index;
    return 0;
}

//pura array mein saare element ke saath compare nahi krna pdega
//fast
//time complexity->o(log n)pehle n->n/2->n/4->------>n/2^k=1=n=2^k is log n
//Application-->no of occurances,pivot,rotation