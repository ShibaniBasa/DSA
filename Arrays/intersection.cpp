#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
//Approach no.1----> with optimization
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	int i=0,j=0;  
	vector<int>ans;
	while(i<n&&j<m){    //jab tak i array 1 ke last tak nahi pahunch jaata aur j array 2 ke last tak nahi pahunch jaata tab tak loop chlega
		if(arr1[i]==arr2[j]){   //element match karwa rha
			ans.push_back(arr1[i]); //uske andar element daal rha
			i++;      // phir dono index ko ek ek increment kiya
			j++;
		}else if(arr1[i]<arr2[j]){ //agar pehle array k element dustre array se chotta h tho pehle array ke i ko ek se badhao
			i++;                   
		}else{
            j++;                  // nahi tho yaha j ko badhaooo
		}
	}
	return ans;
}

//Approach no.2----> without optimization
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int>ans;
	for(int i=0;i<n;i++){
		int element=arr1[i];
		for(int j=0;j<m;j++){
			if(element==arr2[j]){
				ans.push_back(element);//created an vector array where we are pushing the answer
				arr2[j]=-11235;
				break;
			}
		}
	}
	return ans;
}//logically right but will take a lot of time


int main(){
    int arr1[4]={2,3,4,5};
    int arr2[4]={3,4,6,7};
    int val=findArrayIntersection(arr1,4,arr2,4);
    cout<<val;
    return 0;
}