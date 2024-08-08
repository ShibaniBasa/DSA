#include<iostream>
using namespace std;
int main(){
   //for creating array
   #include<array>//import this libary
   array<int,4> a={1,2,3,4};
   //array bnareh, int datatype ka with size 4 named as a
   int size=a.size(); //array k size nikalega
   a.at(2)--->//2nd index k element jaanne ke lye, for random access
   a.empty()--->//array empty hai ki nahi check karrha h
   a.front()--->//first element nikalne ke lye
   a.back()--->//last element nikalne ke lye
   
   //vector means creating a dynamic array
   //agar ek dynamic array fill hogya, tho next item rakhne ke lye wo aur ek dynamic array create karega with bigger size waha previous element ko rakhega current ko bhi, uske baad pehle ko block kardega
   // #include<vector> library use hoga uske lye
   vector<int>v;//---/vector create karenge with int datatype named as v
   vector<int>a(5,1);//---->vector banareh with datatype int size 5 as a, and 1 means to intialize all the elements with 1 and if not, thn everything will be initialized as 0.
   for(int i:a){
    cout<<i;//------------->1 1 1 1 1
   } 
   ///agar mjhe ye wala vector kisi aur vector ke andar copy krna h, tho
   vector<int>last(a);//vector create karo with int datatype named as lasy copying all elements from a
   v.size();//--->kitna element abhi h wo dikhayega
   v.capacity();//--->uske andar element kitne aa skte h
   v.push_backk(element);//--->element jo hamko vector ke andar daalna ho, element can be number or letter
   v.at(2);//--->accessing the 2nd place
   v.front();//-->show the 1st element
   v.back();//--->show the ending element
   for(int i:v){  //for i in v, i ko iterate karke print(i)
    cout<<i<<" ";  
   }
   v.pop_back();//--->deleting the last element from the array
   v.clear();//-->will clear the entire array

   //DQ or Double ended Queue
   //Deque is a linear data structure where the insertion and deletion operations are performed from both ends. We can say that deque is a generalized version of the queue.
   #include<deque>//---->library pehle import karoo
   deque<int>d;//---->created an deque named as d
   d.push_back(1);//--->peeche daalne ke lye push_back
   d.push_front(1);//--->aage daalne ke lye push_front krna h
   for(int i:d){
    cout<<i;//------------->phase by phase saaara element print karega
   }
   d.pop_back();//---->peeche se hatayega
   d.pop_front();//---->front se hatayega
   d.at(2);//--->accessing the 2nd place
   d.front();//-->show the 1st element
   d.back();//--->show the ending element
   d.empty();//--->to check whether it is empty or not
   d.erase(d.begin(),d.begin()+1);//--->beginning se pehla element dlt krna h

    //list bnane ke lye we need to import the library first
    #include<list>
    list<int> l;//creating a list named as l with int datatype
    list<int> n(5)
    l.push_back(1);//--->peeche daalne ke lye push_back
    l.push_front(2);//--->aage daalne ke lye push_front krna h
    l.empty()//khaali h ki bhara hua check krne ke lye
    //similarly pop_back & pop_front bhi kar skte h
    for(i:l){
        cout<<i;
    }
    l.erase(l.begin());//---->pehli wali element erase krega
    list <int> n(5,100);//--->creating a list named as n with size 5, containing 100 100 100 100 100

    //Stack--It Stack Data Structure is a linear data structure that follows LIFO (Last In First Out) Principle , so the last element inserted is the first to be popped out.
    #include<stack>//---------->library to import for using stack
    stack<string> s;//-->creating stack named as s with datatype string
    s.push('love');
    s.push('meaw'); //adding these elements into the stack
    s.top();//it will display the element which is pushed at last.
    s.size();//it will display the total size of the stack
    s.empty();//it will display whether stack is empty/ not

    //Queue--A Queue Data Structure is a fundamental concept in computer science used for storing and managing data in a specific order. It follows the principle of “First in, First out” (FIFO), where the first element added to the queue is the first one to be removed. 
    #include<queue>//-------->library to import queue
    queue<string> q; //creating a queue named as q with string datattype
    q.push('love');
    q.push('meaw'); //adding these elements into the queue
    q.front();//it will display the front element
    q.size();//it will display the size of the queue
    q.pop();//it will delete the first element that has entered the queue

    //Priority Queue-- A priority queue is a type of queue that arranges elements based on their priority values. Elements with higher priority values are typically retrieved before elements with lower priority values.
    //max heap--->bade elements pehle niklenge, decreasing orderly
    //issmein bhi include<queue> hi hoga
    priority_queue <int> maxi; //--->creating a priority queue named as p with int datatype
    //min heap
    priority_queue<int, vector<int>, greater<int> >mini;//--->creating a min heap jisse element niklenge increasing orderly niklenge
    maxi.push(1); //entering the element into a stack 1
    maxi.push(3); //entering the element into a stack 1,3
    maxi.push(4); //entering the element into a stack 1,3,4
    maxi.push(2); //entering the element into a stack 1,3,4,2
    maxi.size();  //displaying the size of maxi
    for(int i:maxi){
        cout<<i;      //printing out the values present in the array
    }
    maxi.pop();//--->dlt karega 

    //Map- In map we have pair of data like its key and values.
    #include<map>--->to import maping
    map<int,string>m;--->//creating map object m
    m[1]='meaw'; //ways of adding elements into the map
    m[2]="meaw1"; //It will always display elements in a sorted manner
    m[13]="meaw4";
    m.insert({5,"meaw 6"}); //another way of adding lement into map
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //i.first for the indexes
    //i.second for the content
    cout<<"finding 13"<<m.count(13)<<endl;//it will check whether there is 13 present/ not
    m.erase(13);
    
}

