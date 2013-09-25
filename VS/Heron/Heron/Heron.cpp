#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	double a,b,c,s;
	cout<<"Side 1:";
	cin>>a;
	cout<<endl;
	cout<<"Side 2:";
	cin>>b;
	cout<<endl;
	cout<<"Side 3:";
	cin>>c;
	cout<<endl;
	s=(a+b+c)/2;
	cout<<sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<endl;
	system("pause");
	return 0;
}

