#include <iostream>
#include <string>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "portuguese");
float n, n1, n2, n3;
(n2=0);
(n3=0);
do
{
cout <<"Digite a idade. ";
cin >>n;
cout <<"digite a altura. ";
cin >>n1;
if (n>50)
{
	(n2=n2+1);
	(n3=n3+n1);
}
}
while (n>0);
cout <<"A média da altura das pessoas com mais de 50 anos é: "<<(n3/n2);
return 0;
}
