#include <iostream>
#include <locale>
using namespace std;
int main()
{
int n1;
float n, n2;
setlocale(LC_ALL, "portuguese");
cout <<"Digite o valor da d�vida. ";
cin >>n;
cout <<"Digite o n�mero de parcelas. ";
cin >>n1;
if (n1==1)
	cout <<"O valor dos juros � 0.\nO valor da parcela �: "<<n;
if (n1==2)
{
	n2=n*1.05;
	cout <<"O valor dos juros � "<<(n2-n)<<".\nO valor das parcelas �: "<<n2/2;
}
if (n1==4)
{
	n2=n*1.1;
	cout <<"O valor dos juros � "<<(n2-n)<<".\nO valor das parcelas �: "<<n2/2;
}
if (n1==6)
{
	n2=n*1.15;
	cout <<"O valor dos juros � "<<(n2-n)<<".\nO valor das parcelas �: "<<n2/2;
}
if (n1==10)
{
	n2=n*1.2;
	cout <<"O valor dos juros � "<<(n2-n)<<".\nO valor das parcelas �: "<<n2/2;
}
}
