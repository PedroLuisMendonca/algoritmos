#include <iostream>
using namespace std;
int main ()
{	
int n, n1, n2;
cout <<" 1. Media \n 2. Diferenca \n 3. Produto \n 4. Divisao \n Escolha uma das opcoes acima. ";
cin >> n;
if (n==1)
{
cout <<" Digite o primeiro numero. ";
cin >> n1;
cout <<" Digite o segundo numero. ";
cin >> n2;
cout <<" A media e: " <<(n1+n2)/2;
}
else
{
	if (n==2)
	{
	cout <<" Sera feita a diferenca do maior para o menor.\n";
	cout <<" Digite o primeiro numero. ";
	cin >> n1;
	cout <<" Digite o segundo numero. ";
	cin >> n2;

        if (n1>n2)
        cout <<" A diferenca e: "<<(n1-n2);
        else
        cout <<" A diferenca e: "<<(n2-n1);
    }
    else
        if (n==3)
        {
        cout <<" Digite o primeiro numero. ";
        cin >>n1;
        cout <<" Digite o segundo numero. ";
        cin >>n2;
        cout <<" O produto e: "<<(n1*n2);
        }
        else
            if (n==4)
            {
            cout <<" Sera feita a divisao do primeiro pelo segundo.\n O segundo numero deve ser diferente de 0. \n";
            cout <<" Digite o primeiro numero. ";
            cin >>n1;
            cout <<" Digite o segundo numero. ";
            cin >>n2;
            cout <<" A divisao e: "<<(n1/n2);
            }
            else
            cout <<" Opcao invalida";
}
return 0;
}
