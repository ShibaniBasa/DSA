#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;//--->creating a set with datatype int as s
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;
    //it doesn't contain any duplicate elemets and keeps element in ascending order

    set<int>::iterator it=s.begin();//creating a boint that points to the 1st element of the set
    it++;   //iterating to 1 index more

    s.erase(it);   //erasing it

    for (auto i:s){
        cout<<i<<endl;
    }

    cout<<"5 is present or not"<<s.count(5)<<endl;  //it will display whether 5 is present or not

    set<int>::iterator itr =s.find(5); 

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}
//insert, find,erase, count= o(log n)
//size,begin,end,empty=O(1)