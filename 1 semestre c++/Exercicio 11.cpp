#include <iostream>
using namespace std;
int main ()
{
float n;
cout <<"Digite seu salario. ";
cin >>n;
if (n<=300)
cout <<"Seu novo salario e: R$"<<(n*1.15);
if (n>300 && n<600)
cout <<"Seu novo salario e: R$"<<(n*1.1);
if (n>=600 && n<=900)
cout <<"Seu novo salario e: R$"<<(n*1.05);
if (n>900)
cout <<"Nao houve mudanca no seu salario, continua R$"<<n;
return 0;
}
