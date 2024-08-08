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
void bubble_sort(int arr[],int n){
    //i, arr[1] index se start krega last tak
    //i=round
    for(int i=1;i<n;i++){
        bool swapped=false;
        //j, arr[0] se shuru hooga aur arr[j+1] ke saath compare hoga
        //aur ussi hisaab se swap hoga
        //aur n-i baar chlega.
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
           //incase already sorted
           break;
    }
}
int main(){
    int arr[5]={ 64, 25, 12, 22, 11 };
    bubble_sort(arr,5);
    printing_array(arr,5);
}

//it is a stable sorting algorithm, meaning that elements with the same key value maintain their relative order in the sorted output.
//A bubble sort is an in-place algorithm because it doesn't need an  extra space and produces an output of the same size by manipulating the input in one place. 