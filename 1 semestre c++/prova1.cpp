#include <iostream>
#include <locale>
using namespace std;
int main()
{
int n, n1;
float n2, n3;
setlocale(LC_ALL, "portuguese");
cout <<"Digite o número de prestações. ";
cin >>n;
cout <<"Digite a quantidade de prestações pagas. ";
cin >>n1;
cout <<"Digite o valor das prestações. ";
cin >>n2;
n3=n2*n1;
cout <<"O valor total pago é: "<<n3<<endl;
cout <<"O valor restante é: "<<(n*n2-n3);
}
