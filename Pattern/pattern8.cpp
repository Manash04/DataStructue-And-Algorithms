#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    int start=0;
    for(int i=1;i<=n;i++){
        if(i%2==0) start=0;
        else start=1;
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;

        }
        cout<<endl;
    }
}
int main()
{
int n;
cout<<"Enter the number of rows:";
cin>>n;
pattern(n);
}