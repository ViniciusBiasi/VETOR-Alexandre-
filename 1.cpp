#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	 
                     int vet[121]; 
                     int t,menor,maior,media,inferior;
                     int i,soma,vbn;
                     
                     
                                  cout << "Digite a temperatura: "<<endl;
                                  cin >> t;
                      
                      for (i=0;t!=0;i++)
                      {
                      	if (menor>t)
                      	menor = t;
                      	
                      	if (maior<t)
                      	maior=t;
                      	
                      	soma=soma+t; 
                      	vet[i]=t;
                      	
                      	 cout << "Digite a temperatura: "<<endl;
                         cin >> t;
					  }
					  
					  media = soma/i;
					  for (vbn=0;vbn<i;vbn++);
					  
					  if (vet[i]<media){
                      inferior+=1;
                 }
      
            cout << "Media " <<media <<endl; 
            cout << "Menor Temperatura " <<menor <<endl; 
            cout << "Maior temperatura " <<maior <<endl; 
            cout << "Quandidade de dias com temperatura inferior a média " <<inferior <<endl; 
	
	
 }
