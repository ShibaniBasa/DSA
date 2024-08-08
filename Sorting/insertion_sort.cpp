#include<iostream>
using namespace std;

void swap(int &num1,int &num2){
    int temp=num1;
    num1=num2;
    num2=temp;
}

void printing_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
}

void insertion_sort(int arr[],int n){
  for(int i=1;i<n;i++){
    //array k pehle element ko as sorted consider krke array ke dusre element se traverse krna shuru karenge j variable se
    int temp=arr[i];
    int j=i-1;//mtlb ye jo j hai wo i ke previous wale saare variable ke saath check krega so this
    for(;j>=0;j--){
        if(arr[j]>temp){   //arr[j] ko i ke current value ke saaath check krenge aur uss hisaab se update karenge
            arr[j+1]=arr[j];
        }else{
            break;
        }
    }
    arr[j+1]=temp;  //phir bade wale element ko temp maanlo
  }
}

int main(){
    int arr[5]={ 64, 25, 12, 22, 11 };
    insertion_sort(arr,5);
    printing_array(arr,5);
}

//Yes, insertion sort is a stable sorting algorithm. A stable sorting algorithm is one that maintains the relative order of equal elements in the sorted output. In other words, if two elements have the same value, their relative order in the input array should be preserved in the sorted array.
/*Insertion Sort is adaptive, 
that means it reduces its total number of steps if given a partially sorted list, 
hence it increases its efficiency. 
Its space complexity is less. Insertion sort requires a single additional memory space.
*/
//Best case: O(n)
//worst case: O(n^2)  Space complexity: O(1)

