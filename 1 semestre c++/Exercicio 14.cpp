#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int n, n1, n2;
	float n3, n4, n5, n6;
	(n3=0);
	(n4=0);
	(n5=0);
	(n6=0);
	for (n=1; n<=15; n=n+1)
	{
		cout <<"Qual sua opini�o do filme? Responda: 3-�timo, 2-bom, 1-regular. ";
		cin >>n1;
		cout <<"Qual a sua idade. ";
		cin >>n2;
		if (n1==3)
		{
		(n3=n3+n2);
		(n4+n4+1);
		}
		if (n1==1)
		(n5=n5+1);
		if (n1==2)
		(n6=n6+1);
	}
cout <<"A idade m�dia das pessoas que reponderam �timo �: "<<(n3/n4)<<endl;
cout <<"A quantidade de pessoas que reponderam regular �: "<<n5<<endl;
cout <<"A percentagem de pessoas que responderam bom �: "<<((n6 / 15) * 100)<<"%";
return 0;
}
