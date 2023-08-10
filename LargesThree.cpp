#include <bits/stdc++.h>
using namespace std;


int main()
{
	int a,b,c;
	
	cin>>a>>b>>c;
	
	if(a>b and a>c)
	{
		cout<<"a";
		
		}	
		
		else if(b>a and b>c)
		{
			cout<<"b";
			
		}
		
		else if (c>a and c>b) 
		{
			cout<<"c";
		}
		
		else if (a=b)
		{
			cout<<"a and b are equal";
		}
		
		else if (b=c)
		{
			cout<<"b and c are equal";
		}
		else if (a=c)
		{
			cout<<"a and c are equal";
		}
		
		
	return 0;
	
}



