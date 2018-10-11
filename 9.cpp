#include<iostream>
#include<math.h>
#include <locale.h>
using namespace std;
int main ()
{
	int ve[30], tor[30], v, X;
	
	setlocale(LC_ALL, "Portuguese");
	
	for (v=0; v<6; v++)
	{
		cout<<"Insira os números do conjunto A: "<<endl;
		cin>>ve[v];
	}
	for (v=0; v<6; v++)
	{
		cout<<"Insira os elementos do conjunto B: "<<endl;
		cin>>tor[v];
	}
	cout<<"Insira o valor de X: "<<endl;
	cin>>X;
	
	for (v=0; v<6; v++)
	{
		if (X==ve[v])
		{
			cout<<" Elemento de B de posição:  "<<tor[v];
			cout<<" Elemento de A igual a X :"<<ve[v];
		}
		
	}
}
