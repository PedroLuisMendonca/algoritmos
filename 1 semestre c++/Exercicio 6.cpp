#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "portuguese");
char c;
int n;
float n1, n2, n3;
(n2=0);
(n3=0);
for (int i=1; i<=15; i=i+1)
{
	cout <<"Digite o código da compra. ";
	cin >>c;
	cout <<"Digite o valor da compra. ";
	cin >>n1;
	if (c=='v')
	(n2=n2+n1);
	if (c=='p')
	(n3=n3+n1);
}
cout <<"Valor total das compras à vista é: "<<n2<<endl;
cout <<"Valor total das compras à prazo é: "<<n3<<endl;
cout <<"Valor total das compras efetuadas é: "<<(n2+n3)<<endl;
cout <<"Valor da primeira prestação das compras à prazo juntas: "<<(n3/3)<<endl;
return 0;
}
