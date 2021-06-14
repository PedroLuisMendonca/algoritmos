#include <iostream>
using namespace std;
int main ()
{
float n;
cout <<"Digite o custo de fabrica. ";
cin >>n;
if (n>25000)
cout <<"O preco para o consumidor e: R$"<<(n*1.35);
if (n<=12000)
cout <<"O preco para o consumidor e: R$"<<(n*1.05);
if (n>12000 && n<=25000)
cout <<"O preco para o consumidor e: R$"<<(n*1.25);
return 0;
}
