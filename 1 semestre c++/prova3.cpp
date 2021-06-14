#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "portuguese");
int n, d;
cout <<"Digite o valor de n. ";
cin >>n;
d=2*n;
do
{
cout <<n<<endl;
n=n+1;
}
while (n<d);
}
