#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
int N[1000], i, s, rep, v[i],j;
s=0; 
rep=0;
cout << "Digite um valor" <<endl;
cin >> i;

for  (i=0;i<1000; i++) {

  
          while (N[s]=N[s+1]) {
		  
                  rep+=1;
                     v[j]=N[s];
                      j++;
               }
               
			   cout << v[j] << "repete"  <<rep<< "vezes" <<endl;
              while (N[s] != N[s+1])
                 {
                      cout << N[s+1] << "n�o repite" <<endl;
                                  j++;
                                   v[j]= N[s];
                  }
                  s++;
  }
    j=0;
    while (v[j]>v[j+1] && v[j]!= v[j+1] )
    {
	
           cout <<  "Os numeros s�o" <<v[j] <<endl;
     }
       j++;
}
