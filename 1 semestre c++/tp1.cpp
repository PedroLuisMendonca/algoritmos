#include <iostream>
#include <string>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "portuguese");
string p1, p2, p3, p4, p5, c1, c2, c3, c4, c5;
float n, n1, n2, n3, n4, n5, n6, n7, nn1, i, t1, t2, t3, t4, t5, t6, j, ii;
int nn;
(n1=0);
(n2=0);
(n3=0);
(n4=0);
(n5=0);
(n6=0);
(n7=0);
(t1=0);
(t2=0);
(t3=0);
(t4=0);
(t5=0);
(t6=0);
(j=9);
do
{
cout <<"Menu de opções.\n1.Para cadastrar os candidatos.\n2.Para fazer a pesquisa.\n3.Para ver os resultados da pesquisa\n0.Para sair.\n";
cin >>j;
if (j==1)
{
cout <<"Digite o nome do candidato número 1. ";
cin >>c1;
cout <<"Digite o partido do candidato número 1. ";
cin >>p1;
cout <<"Digite o nome do candidato número 2. ";
cin >>c2;
cout <<"Digite o partido do candidato número 2. ";
cin >>p2;
cout <<"Digite o nome do candidato número 3. ";
cin >>c3;
cout <<"Digite o partido do candidato número 3. ";
cin >>p3;
cout <<"Digite o nome do candidato número 4. ";
cin >>c4;
cout <<"Digite o partido do candidato número 4. ";
cin >>p4;
cout <<"Digite o nome do candidato número 5. ";
cin >>c5;
cout <<"Digite o partido do candidato número 5. ";
cin >>p5;
}
else 
    if (j==2)
    {
n = 1;
do
{
cout <<"Se a eleição fosse hoje em qual candidato você votaria?\n";
cout <<"Digite o número 1 para o candidato "<<c1<<" do partido "<<p1<<endl;
cout <<"Digite o número 2 para o candidato "<<c2<<" do partido "<<p2<<endl;
cout <<"Digite o número 3 para o candidato "<<c3<<" do partido "<<p3<<endl;
cout <<"Digite o número 4 para o candidato "<<c4<<" do partido "<<p4<<endl;
cout <<"Digite o número 5 para o candidato "<<c5<<" do partido "<<p5<<endl;
cout <<"Digite o número 6 se estiver indeciso"<<endl;
cout <<"Digite o número 7 se o voto for branco ou nulo"<<endl;
cin >> nn;
switch (nn)
{
	case 1 : (n1=n1+1);
	break;
	case 2 : (n2=n2+1);
	break;
	case 3 : (n3=n3+1);
	break;
	case 4 : (n4=n4+1);
	break;
	case 5 : (n5=n5+1);
	break;
	case 6 : (n6=n6+1);
	break;
	case 7 : (n7=n7+1);
	break;
	default : cout <<"Número inválido. \n";
}
cout <<"Em qual você não votaria de maneira alguma?\n";
cout <<"Digite o número 1 para o candidato "<<c1<<" do partido "<<p1<<endl;
cout <<"Digite o número 2 para o candidato "<<c2<<" do partido "<<p2<<endl;
cout <<"Digite o número 3 para o candidato "<<c3<<" do partido "<<p3<<endl;
cout <<"Digite o número 4 para o candidato "<<c4<<" do partido "<<p4<<endl;
cout <<"Digite o número 5 para o candidato "<<c5<<" do partido "<<p5<<endl;
cout <<"Digite o número 6 caso não tenha opnião"<<endl;
cin >>nn1;
if (nn1==1)
(t1=t1+1);
else
if (nn1==2)
(t2=t2+1);
else
if (nn1==3)
(t3=t3+1);
else
if (nn1==4)
(t4=t4+1);
else
if (nn1==5)
(t5=t5+1);
else
if (nn1==6)
(t6=t6+1);
else 
cout <<"Número Inválido.\n";
cout <<"Digite o número 0 para terminar. ";
cin >>n;
}
while (n!=0);
}
    else
    if (j==3)
    {
    	(i=n1+n2+n3+n4+n5+n6+n7);
    	(ii=t1+t2+t3+t4+t5+t6);
    cout <<"A taxa de aceitação do candidato "<<c1<<" do partido "<<p1<<" é de: "<<(n1/i)*100<<"%"<<endl;
    cout <<"A taxa de aceitação do candidato "<<c2<<" do partido "<<p2<<" é de: "<<(n2/i)*100<<"%"<<endl;
    cout <<"A taxa de aceitação do candidato "<<c3<<" do partido "<<p3<<" é de: "<<(n3/i)*100<<"%"<<endl;
    cout <<"A taxa de aceitação do candidato "<<c4<<" do partido "<<p4<<" é de: "<<(n4/i)*100<<"%"<<endl;
    cout <<"A taxa de aceitação do candidato "<<c5<<" do partido "<<p5<<" é de: "<<(n5/i)*100<<"%"<<endl;
    cout <<"A taxa de indecisos é de : "<<(n6/i)*100<<"%"<<endl;
    cout <<"A taxa de pessoas que votariam branco ou nulo é de: "<<(n7/i)*100<<"%"<<endl;
    cout <<"\nA taxa de rejeição do candidato "<<c1<<" do partido "<<p1<<" é de: "<<((t1/ii)*100)<<"%"<<endl;
    cout <<"A taxa de rejeição do candidato "<<c2<<" do partido "<<p2<<" é de: "<<((t2/ii)*100)<<"%"<<endl;
    cout <<"A taxa de rejeição do candidato "<<c3<<" do partido "<<p3<<" é de: "<<((t3/ii)*100)<<"%"<<endl;
    cout <<"A taxa de rejeição do candidato "<<c4<<" do partido "<<p4<<" é de: "<<((t4/ii)*100)<<"%"<<endl;
    cout <<"A taxa de rejeição do candidato "<<c5<<" do partido "<<p5<<" é de: "<<((t5/ii)*100)<<"%"<<endl;
    cout <<"A taxa de pessoas sem rejeição é de: "<<((t6/ii)*100)<<"%"<<endl;
    }
	else
	if (j==0)
	cout <<"Você saiu.";
	else
	cout <<"Número inválido.\n";
}
while (j!=0);
return 0;
}
