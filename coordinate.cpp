#include <bits/stdc++.h>
using namespace std;


int main()
{
int x=0,y=0;

char move;

cin>>move;

switch(move)

{
	case'l': x--;
	break;
	
	case 'r': x++;
	break;
	

	case 'u': y++;
	break;
	
	case 'd': y--;
	break;
	
	default: cout<<"error";
}

cout<<"\n"<<x<<" "<<y;
}


