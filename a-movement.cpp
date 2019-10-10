#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count=0;
    cin>>n;
    
   int ans=n/5;
   int mod1=n%5;
   
   cout<<ceil(ans+mod1)<<endl;
}
