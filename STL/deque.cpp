#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    // Print the numbers in the deque
    // for (int num : d) {
    //     cout << num << " ";
    // }
    // d.pop_front();
    // for (int num : d) {
    //     cout << num << " ";
    // }
    cout<<endl;
    cout<<"Print first index element-->"<<d.at(0)<<endl;

    cout<<"front: "<<d.front()<<endl;
    cout<<"back: "<<d.back()<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl;
    
    cout<<"before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase: "<<d.size()<<endl;

    for (int num : d) {
       cout <<"The elements int the deque is: " <<num << " ";
     }

    return 0;
}
