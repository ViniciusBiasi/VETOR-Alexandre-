#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int C;
int FREQAB[11]={0};
int NOTA=0;

for (C=0;C<80;C++)
{
 cout << "Digite a nota: "<<NOTA+1<<endl;
 cin >>  FREQAB[NOTA];
 NOTA++;
  }


cout<<"A frequencia absoluta da nota " << C<<  "   " " e   " <<FREQAB[C+1]<<endl;
cout<<"A frequencia relativa da nota " << C<< "  "    "e   " <<100*FREQAB[C+1]/10<<endl;

}
