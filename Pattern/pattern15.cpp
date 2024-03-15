#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"*";
        }
         for(int j=0;j<2*i;j++){
        cout<<" ";
    }
     for(int j=i;j<n;j++){
            cout<<"*";
        }
            cout<<endl;

    }
    for(int i=1;i<=n;i++){
         for(int j=0;j<i;j++){
            cout<<"*";
        }
         for(int j=0;j<(n-i)*2;j++){
        cout<<" ";
    }
     for(int j=0;j<i;j++){
            cout<<"*";
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