#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	
	cin>>s;
	
	char ar[]={'A','E','I','O','U','Y','a','e','i','o','u','y'};
	int len=s.length();
	
	for(int i=0;i<len;i++)
	{
		if((s[i]+s[i+1])%2==0 && s[i]==ar[i])
		{
			cout<<"valid"<<endl;
			break;
		}
		else
		{
			cout<<"invalid"<<endl;
			break;
		}
	}
	


     
	
	 
}
