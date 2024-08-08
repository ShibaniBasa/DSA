#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<"Finding the element-->"<<binary_search(v.begin(),v.end(),4)<<endl;
    
    cout<<"lower bound->"<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"Upper bound->"<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;

    int a=3;
    int b=5;
    cout<<"Max:"<<max(a,b)<<endl;
    cout<<"Min:"<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a after the swap:"<<a<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"String after reversing:-->"<<abcd<<endl;

    for(int i:v){
        cout<<i<<endl;
    }

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After Rotate:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}