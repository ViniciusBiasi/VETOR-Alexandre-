#include <math.h>
#include <iostream>
using namespace std;
int main ()

{
	setlocale (LC_ALL,"portuguese");
	int i, na, nb, a[100], b[100], j, k, c[200];
	
	cout<<"Informe o numero de elementos do conjunto A "<<endl;
	cin>>na;
	for (i=0; i<na; i++)
	{
		cout<<"Informe o valor do conjunto A "<<endl;
		cin>>a[i];
		cout<<"Informe o valor do conjunto B "<<endl;
		cin>>b[i];
	}
	
	
	
	for (i=0; i<na; i++)
	{
		c[i]=b[i];
			if (a[i]!=b[i])
				{
					c[i]=a[i];
				}
				
				cout<<c[i]<<endl;
	}
	
}
