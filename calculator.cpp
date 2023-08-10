#include <bits/stdc++.h>
using namespace std;


int main()
{
	int op, x, y;
	
	cout<<"s.no.\t       operation\t";
	cout<<"\n 1\t\t "<<"add";
	cout<<"\n 2\t\t "<<"sub";
	cout<<"\n 3\t\t "<<"div\n";
	cin>>op>>x>>y;
	
	
	if (op==1)
	{
		cout<<x+y;
	}
	
	else if (op==2)
	{
		cout<<x*y;
	}
	else if (op==3)
	{
		cout<<x/y;
	}
	
	else
	{
		cout<<"tmkc";
	}
	
	return 0;


	
}



