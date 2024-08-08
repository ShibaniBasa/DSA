#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(int arr[],int start,int end){
    int pivot=arr[start];//indicating pivot as the starting element of the array
    int count=0;     //count karrha kitne element chotte h usse, uske hisab se apne correct jagah pe jaayega
    for(int i=start+1;i<=end;i++){
         if(arr[i]<pivot){
            count++;
         }
    }
    int right_place_pivot=start+count;//right index nikala for the pivot
    swap(arr[start],arr[right_place_pivot]); //swapping with element present in the right index with the pivot 
    int i=start, j=end;
    while(i<right_place_pivot && j>right_place_pivot){  //jab tak i pivot ke right place se chotta ho aur j pivot ke right place se greater ho
        while(arr[i]<pivot){ //agar pivot se chotta no left mein hoga tho i bass aage badhjayega
            i++;
        }
        while(arr[j]>pivot){ //agar pivot se bada no right mein hoga tho j bass aage badhjayega
            j++;
        }
        if(i<right_place_pivot && j>right_place_pivot){
            swap(arr[i],arr[j]); //ya tho only case swap hojayega
            i++;
            j++;
        } 
    }
    return right_place_pivot;  //right_place_pivot return karega iske basis pe sort hooga
}

void quicksort(int arr[],int start,int end){
    //base condition
    if(start>=end){
        return;
    }
    //to create a partition in the array
    int p=partition(arr,start,end);
    //sorting the array--->pivot se aage wala 
    quicksort(arr,start,p-1);
    //sorting the array--->pivot se peeche wala
    quicksort(arr,p+1,end);
}

int main(){
    int arr[5]={3,1,4,5,2};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}