#include <iostream>
using namespace std;
int main ()
{
int n;
cout <<"Digite a idade do nadador. ";
cin >>n;
if (n<5)
cout <<"Idade invalida.";
if (n>4 && n<8)
cout <<"Nadador Infantil";
if (n>7 && n<11)
cout <<"Nadador Juvenil";
if (n>10 && n<16)
cout <<"Nadador Adolescente";
if (n>15 && n<31)
cout <<"Nadador Adulto";
if (n>30)
cout <<"Nadador Senior";
return 0;
}
