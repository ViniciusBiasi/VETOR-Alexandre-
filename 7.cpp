#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

    int quantidade[100];
    float faturamento, preco[100];
    int i;
    
    faturamento = 0;
    for (i = 0; i < 4; i++)
        {
        cout << "Digite a quantidade do produto " << i + 1 << " vendida: "<<endl;
        cin >> quantidade[i];
        cout << "Digite o preco do produto " << i + 1 << " em R$: "<<endl;
        cin >> preco[i];
        
        
        }
    for (i = 0; i < 4; i++)
        {
        faturamento += (quantidade[i]*preco[i]);
        }
    cout << "O faturamento mensal foi de R$ " << faturamento <<endl;    
    
}
