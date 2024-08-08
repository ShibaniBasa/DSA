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

void selection_sort(int arr[],int n){
    //we will traverse the i and find the min element
    //since after reaching the last point we can't move further, so we will take n-1
    for(int i=0;i<n-1;i++){
        int min_element=i;
        //after considering the first element as the min one
        //we will move further to check whether which one is smaller than the min one
        for(int j=i+1;j<n;j++){
            //comparing the min element with the other element
            if(arr[j]<arr[min_element]){
                min_element=j;//min element found
            }
        }
        //swapping them
        if(min_element!=i){
           swap(arr[min_element],arr[i]);
        }
    }
}
int main(){
    int arr[5]={ 64, 25, 12, 22, 11 };
    selection_sort(arr,5);
    printing_array(arr,5);
}

//space complexity: O(1) as extra space liya hi nahi h
//Time complexity: O(n^2)

//bestcase=already sorted array=O(n^2) kyunki search tho yaha pe bhi krega na
//wprst case=O(n^2)

//Usecase: when array size is small we can use selection sort. 

//Selection sort can be made Stable if instead of swapping, the minimum element is placed in its position without swapping i.e. by placing the number in its position by pushing every element one step forward(shift all elements to left by 1). 


//to make it stable
/* 
    void stableSelectionSort(int a[], int n){
    // Iterate through array elements
    for (int i = 0; i < n - 1; i++) 
    {
 
        // Loop invariant : Elements till a[i - 1]
        // are already sorted.
 
        // Find minimum element from 
        // arr[i] to arr[n - 1].
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (a[min] > a[j])
                min = j;
        // Move minimum element at current i.
        int key = a[min];
      //Shift left all elements by one.
      for(int k=min;k>i;k--)
        a[k]=a[k-1];
      //Store the key at its right position.
        a[i] = key;
    }
    }
*/