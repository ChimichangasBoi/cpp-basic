#include<iostream>
using namespace std;

int first(int n)
{
	while(n>10)
	{
		
		n=n/10;
	}
	return n;
}


int main()
{
    
    int n;
    
    cin>>n;
    cout<< first(n);
    
    return 0;
}
