#include <iostream>
#include <locale>
using namespace std;
int main()
{
int n, n1;
float n2, n3;
setlocale(LC_ALL, "portuguese");
cout <<"Digite o n�mero de presta��es. ";
cin >>n;
cout <<"Digite a quantidade de presta��es pagas. ";
cin >>n1;
cout <<"Digite o valor das presta��es. ";
cin >>n2;
n3=n2*n1;
cout <<"O valor total pago �: "<<n3<<endl;
cout <<"O valor restante �: "<<(n*n2-n3);
}
