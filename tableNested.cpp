#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter";
	cin>>n;
    for(int i = 1 ; i < n ; i++)
    {
    	for (int x=1;x<=10;x++)
    	{
    		cout<<(x*i)<<" ";
		}
		
		cout<<"\n";
    }
    return 0;
}
