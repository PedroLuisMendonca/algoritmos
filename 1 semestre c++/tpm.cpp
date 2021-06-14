#include <iostream>
#include <locale>
#include <math.h>
#include <string>
using namespace std;
int main()
{
setlocale(LC_ALL, "portuguese");
int n, n1, n2, n3;
string r1;
do
{
	r1="";
	cout <<"Escolha uma opção.\n1.Binário para decimal.\n2.Decimal para binário.\n3.Sair\n";
	cin >>n;
	if (n==2);
	{
		cout <<"Digite o número decimal. ";
		cin >>n1;
		while (n>0)
		{
			n2=n1%2;
			if (n2==0)
			r1="0"+r1;
			else
			r1="1"+r1;
			n1=(n1/2);
		}
		cout <<r1;
	}
}
while (n!=3);
}
