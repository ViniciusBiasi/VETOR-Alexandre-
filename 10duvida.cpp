#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
int i;
int NA[10];
int NB[10];
float A[i], B[i], C[i];
int TAM;

cout << "Digite o tamanho do vetor A" <<endl;
cin>>NA[A];

cout << "Digite o tamanho do vetor B" <<endl;
cin >> NB[B];

for(i = 0; i < 6; i++){
cout << "Digite os elementos do vetor A" <<endl;
cin >> A[i];
}

for(i = 0; i < NB; i++){
cout << "Digite os elementos do vetor B" <<endl;
cin >> B[i];
}
TAM = NA+NB;

for(i = 0; i<NA; i++){ //armazenando os valores DO vetor A
C[i] = A[i];
}
for(i = 1; i<NB; i++){   //armazenando os valores DO vetor B
A[i]++;
C[i] = B[i];
}
int aux = 0; //Inicialização da variável aux

for(i = 0; i < 6; i++){ //Ordenação
for(int j = 0; j < 6; j++){
if(C[i] < C[j]){
aux = C[i];
C[i] = C[j];
C[j] = aux;
}
}
}

for(i = 0; i < 6; i++){
cout << "Os elementos C: " <<C[i] <<endl;
}
}

