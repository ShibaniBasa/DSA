#include<iostream>
using namespace std;
//without using binary search
//but using only loops
//Approach 1
/*int fst_occurances(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(arr[start]==key){
            return start;
            break;
        }
        start++;
    }
    return -1;
}
int lst_occurances(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    while(start<end){
        if(arr[end]==key){
            return end;
            break;
        }
        end--;
    }
    return -1;
}*/
//Approach no-02:using binary search
int fst_occurance(int arr[],int n,int key){    //condition->Binary searching methods can be applied to monotonic function--->i.e. increasing/decreasing
    int ans=-1;
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;         //agar low k value int_min h aur high h vallue int_max h tho usspe operate krna muskil h value jyada aajayega
    while(low<=high){              //tho uske jagah-->ham ye formulae use krenge mid=low+(high-low)/2
        if(arr[mid]==key){
           ans=mid;
           high=mid-1;
        }
        else if(key>arr[mid]){   //Right mein jao
           low=mid+1;
        }else if(key<arr[mid]){  //left mein jao
           high=mid-1;
        }
        mid=low+(high-low)/2;
    }
    return ans;
}
int lst_occurance(int arr[],int n,int key){    //condition->Binary searching methods can be applied to monotonic function--->i.e. increasing/decreasing
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;         //agar low k value int_min h aur high h vallue int_max h tho usspe operate krna muskil h value jyada aajayega
    int ans=-1;
    while(low<=high){              //tho uske jagah-->ham ye formulae use krenge mid=low+(high-low)/2
        if(arr[mid]==key){
           ans=mid;
           low=mid+1;
        }
        else if(key>arr[mid]){  //Right me jao
            low=mid+1;
        }else if(key<arr[mid]){  //left me jao
            high=mid-1;
        }
        mid=low+(high-low)/2;
    }
    return ans;
}
int main(){
    int arr[10],key,n;
    cout<<"Enter the number of elements you want in an array:"<<endl;
    cin>>n;
    cout<<"Enter the values in the array in a sorted manner:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value you are searching for:"<<endl;
    cin>>key;
    cout<<fst_occurance(arr,10,key);
    cout<<lst_occurance(arr,10,key);
    return 0;
}


//total number of occurance:
//pehli index nikalo aakhri index nikalo phir(aakhri index-pehli index)+1
