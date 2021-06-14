#include <iostream>
using namespace std;
struct pessoa{ 
string nome;
int idade;
float peso;
char sexo;
};
int main ()
{
pessoa mailson;
cout <<"Digite seu nome. ";
cin >>mailson.nome;
cout <<"Digite sua idade. ";
cin >>mailson.idade;
cout <<"Digite seu peso. ";
cin >>mailson.peso;
cout <<"Nome: "<<mailson.nome<<"\tIdade: "<<mailson.idade<<"\tPeso: "<<mailson.peso;



return 0;
}
