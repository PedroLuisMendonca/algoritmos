#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "portuguese");
int n, n1, n4;
float n2, n3, n5, n6, n7;
(n4=0);
(n5=0);
(n6=0);
(n7=0);
for (n=1; n<=5; n=n+1)
{
	cout <<"Digite a idade da pessoa. ";
	cin >>n1;
	cout <<"Digite a altura da pessoa. ";
	cin >>n2;
	cout <<"Digite o peso da pessoa. ";
	cin >>n3;
	if (n1>50)
	(n4=n4+1);
	if (n1>9 && n1<21)
	{
		(n5=n5+n2);
		(n7=n7+1);
	}
	if (n3<40)
	(n6=n6+1);
}
cout <<"A quantidade de pessoas com mais de 50 anos é: "<<n4<<endl;
cout <<"A média de altura das pessoa com idade entre 10 e 20 anos é: "<<(n5/n7)<<endl;
cout <<"A porcentagem de pessoas com peso inferior a 40 kg é: "<<((n6/5)*100)<<"%"<<endl;
return 0;
}
