#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	
 string s1,s2;
 
 int t;
 cin>>t;
 
 while(t--)
 {
 	
 
    
    cin>>s1>>s2;
    
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
   (s1==s2)?cout<<"YES"<<endl : cout<<"NO"<<endl;
   
}
    
}

