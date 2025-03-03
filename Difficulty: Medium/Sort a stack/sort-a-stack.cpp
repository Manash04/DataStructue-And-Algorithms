//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);

cout << "~" << "\n";
}
}
// } Driver Code Ends


void SortedStack :: sort()
{
priority_queue<int, vector<int>,greater<int>> pq;  
while(!s.empty()){
       int temp = s.top();
       pq.push(temp);
       s.pop();
   }
   while(!pq.empty()){
       int temp = pq.top();
       s.push(temp);
       pq.pop();
   }
}