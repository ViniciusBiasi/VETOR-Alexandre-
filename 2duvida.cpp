#include <iostream>
#include <math.h>
using namespace std;
int main()
{
char  frase[80];
char par[90];
int x, z, contB=0, contA=0;

cout << "Digite uma frase de ate 80 caracteres: . termino com ponto final"<<endl;
cin >> frase[x]; 

for(int x=0; x<80; x++)
{
    z=x+1;

    if (frase[x]==' ') contB++;

    if (frase[x]=='A' || frase[x]=='a') contA++;

    if (frase[x]=='.') break;

}
}
cout<<"Existe(m) "<<contB<<" branco(s) na frase."<<endl;
cout<<"Existe(m) "<<contA<<" letra(s) A na frase."<<endl;

}
