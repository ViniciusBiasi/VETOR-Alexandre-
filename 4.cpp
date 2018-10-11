#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
  int C;
  float SOMA; 
   float varB [101]; 

  SOMA = 0; 
  for (C=1;C<100;C++){ 
   
    cout << "Digite o o valor numerico: "<<endl; 
    cin >> varB[C]; 
 }
  for (C=1;C<50;C++){ 
    SOMA = SOMA + pow ((varB[C]-varB[101-C]),3);
  cout  << "O valor do somatorio e: " <<SOMA <<endl; 
} 
}

