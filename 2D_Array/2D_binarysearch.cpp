#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool searchmatrix(vector <vector<int>>& matrix, int target){
    int row=matrix.size();
    int col=matrix[0].size();

    int begin=0;
    int end=row*col-1;

    int mid=start+(end-start)/2;

    while(start<=end){
        int element=[mid/col][mid%col];
        if(element==target){
            return 1;
        }
        if (element<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}

//time complexity: O(logmn)
//where m is the row and n is the column