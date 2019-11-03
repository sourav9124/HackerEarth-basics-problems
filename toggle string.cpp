#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	
	
	int len=s.length();
	
	for(int i=0;i<len;i++)
	{
	    int c=s[i];
	    
	     if(isupper(c))
	     {
	     	 s[i]=tolower(c);
		 }
		 else if(islower(c))
		 {
		 	s[i]=toupper(c);
		 }
		 
		 
		
	   
	}
	for(int i=0;i<len;i++)
	{
		cout<<s[i];
	}
}
