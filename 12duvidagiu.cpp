#include <math.h>
#include <iostream>
using namespace std;
int main ()

{
	setlocale (LC_ALL,"portuguese");
	int i, n, a[20], x[10];
	float p;
	
	cout<<"Insira um valor para n, sendo menor que 20 "<<endl;
	cin>>n;
	for (i=0; i<n; i++)
	{
		cout<<"Informe os valores de A "<<endl;
		cin>>a[i];
	}
		for (i=0; i<10; i++)
		{
			cout<<"Informe o valor de X "<<endl;
			cin>>x[i];
		}
		
		for (i=0; i<10; i++)
		{
			p+=a[i]*pow(x[i],n);
		}
	cout<<"O valor de p é: "<<p<<endl;
}
