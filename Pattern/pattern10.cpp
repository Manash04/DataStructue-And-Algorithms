#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}
int main()
{
int n;
cout<<"Enter the number of rows: ";
cin>>n;
pattern(n);
}