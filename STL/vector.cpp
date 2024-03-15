#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"Size of the vector-->"<<v.capacity()<<endl;

    // capacity() function used to return the amount of memory allocated for the vector storage
    // size() function used to return the no of elements stored in the vector 
    v.push_back(1);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    v.push_back(3);  //here the capacity prints as 4 bcoz before the size of the array was 2 and we 
    //entered 3 elements so the size of the vector doubled.
    cout<<"Capacity-->"<<v.capacity()<<endl;
    cout<<"Size-->"<<v.size()<<endl;

    cout<<"Element at 2nd Index :"<<v.at(2)<<endl;

    cout<<"front :"<<v.front()<<endl;
    cout<<"back :"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();

    cout<<"afetr pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"before clear size :"<<v.size()<<endl;
    v.clear();
    cout<<"after clear size :"<<v.size()<<endl;

    }
