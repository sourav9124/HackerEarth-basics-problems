#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
     int ans;
     
     ans=max(a,b);
     ans=max(c,ans);
     cout<<ans<<endl;
}
