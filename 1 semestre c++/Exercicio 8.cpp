#include <iostream>
using namespace std;
int main ()
{
float n;
cout <<"Digite se salario atual. ";
cin >>n;
if (n>300)
cout <<"Seu novo salario e: "<<(n*1.15);
else
cout <<"Seu novo salario e: "<<(n*1.35);
return 0;
}
