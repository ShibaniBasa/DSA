#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    
    vector<int> ans;//ans k ek vector bnao
    int row=matrix.size();//total no. of row nikala
    int col=matrix[0].size();//total no.of column nikala

    int count=0; //count intially zero hota h
    //jitna number print karenge utna count ko increment krte jaayenge
    int total=row*col; //total number of  element nikalreh h

    //index initialisation
    int startingrow=0;
    int startingcol=0;
    int endingrow=row-1;
    int endingcol=col-1;

    while(count<total){  
        //print starting row
        for(int index=startingcol;count<total && index<=endingcol;index++){   //--------------horizontally print hooga pehla row jo ki 1st column se last column tak h
            ans.push_back(matrix[startingrow][index]);
            count++;   //jitne baar print karayenge utna count increment karayenge
        }
        startingrow++;   //starting row print hoone ke baad next row mein aajayenge
        //printing ending column
        for(int index=startingrow;count<total && index<=endingrow; index++){  //-------------phir last column upar se neeche print hoga jiska mtlb 1st row se last row tak
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;
        //print ending row
        for(int index=endingcol;count<total && index>=startingcol; index--){  //------------phor last row print hoga, jaha wo last column se 1st column tak horizontally jaayega
            ans.push_back(matrix[endingrow][index]);
            count++;
        }
        endingrow--;
        //print starting column
        for(int index=endingrow;count<total && index>=startingrow; index--){  //--------------phir 1st column print hooga, jaha wo last row se 1st tak vertically jaayega
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol++;
    }
    return ans;
}

int main{
    vector<vector<int>> matrix{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    spiralOrder(matrix);
    return 0;

}

//Time complexity of this problem is O(mn)
//Space complexity O(1)
