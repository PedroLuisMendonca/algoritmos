#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "portuguese");
float n, n1, n2;
(n1=0);
(n2=-1);
(n=1);
do
{
cout <<"Digite a idade. ";
cin >>n;
(n1=n1+n);
(n2=n2+1);
}
while (n!=0);
cout <<"A média das idades é: "<<(n1/n2);
return 0;
}
