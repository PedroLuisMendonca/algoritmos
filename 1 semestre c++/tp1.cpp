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
cout <<"Menu de op��es.\n1.Para cadastrar os candidatos.\n2.Para fazer a pesquisa.\n3.Para ver os resultados da pesquisa\n0.Para sair.\n";
cin >>j;
if (j==1)
{
cout <<"Digite o nome do candidato n�mero 1. ";
cin >>c1;
cout <<"Digite o partido do candidato n�mero 1. ";
cin >>p1;
cout <<"Digite o nome do candidato n�mero 2. ";
cin >>c2;
cout <<"Digite o partido do candidato n�mero 2. ";
cin >>p2;
cout <<"Digite o nome do candidato n�mero 3. ";
cin >>c3;
cout <<"Digite o partido do candidato n�mero 3. ";
cin >>p3;
cout <<"Digite o nome do candidato n�mero 4. ";
cin >>c4;
cout <<"Digite o partido do candidato n�mero 4. ";
cin >>p4;
cout <<"Digite o nome do candidato n�mero 5. ";
cin >>c5;
cout <<"Digite o partido do candidato n�mero 5. ";
cin >>p5;
}
else 
    if (j==2)
    {
n = 1;
do
{
cout <<"Se a elei��o fosse hoje em qual candidato voc� votaria?\n";
cout <<"Digite o n�mero 1 para o candidato "<<c1<<" do partido "<<p1<<endl;
cout <<"Digite o n�mero 2 para o candidato "<<c2<<" do partido "<<p2<<endl;
cout <<"Digite o n�mero 3 para o candidato "<<c3<<" do partido "<<p3<<endl;
cout <<"Digite o n�mero 4 para o candidato "<<c4<<" do partido "<<p4<<endl;
cout <<"Digite o n�mero 5 para o candidato "<<c5<<" do partido "<<p5<<endl;
cout <<"Digite o n�mero 6 se estiver indeciso"<<endl;
cout <<"Digite o n�mero 7 se o voto for branco ou nulo"<<endl;
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
	default : cout <<"N�mero inv�lido. \n";
}
cout <<"Em qual voc� n�o votaria de maneira alguma?\n";
cout <<"Digite o n�mero 1 para o candidato "<<c1<<" do partido "<<p1<<endl;
cout <<"Digite o n�mero 2 para o candidato "<<c2<<" do partido "<<p2<<endl;
cout <<"Digite o n�mero 3 para o candidato "<<c3<<" do partido "<<p3<<endl;
cout <<"Digite o n�mero 4 para o candidato "<<c4<<" do partido "<<p4<<endl;
cout <<"Digite o n�mero 5 para o candidato "<<c5<<" do partido "<<p5<<endl;
cout <<"Digite o n�mero 6 caso n�o tenha opni�o"<<endl;
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
cout <<"N�mero Inv�lido.\n";
cout <<"Digite o n�mero 0 para terminar. ";
cin >>n;
}
while (n!=0);
}
    else
    if (j==3)
    {
    	(i=n1+n2+n3+n4+n5+n6+n7);
    	(ii=t1+t2+t3+t4+t5+t6);
    cout <<"A taxa de aceita��o do candidato "<<c1<<" do partido "<<p1<<" � de: "<<(n1/i)*100<<"%"<<endl;
    cout <<"A taxa de aceita��o do candidato "<<c2<<" do partido "<<p2<<" � de: "<<(n2/i)*100<<"%"<<endl;
    cout <<"A taxa de aceita��o do candidato "<<c3<<" do partido "<<p3<<" � de: "<<(n3/i)*100<<"%"<<endl;
    cout <<"A taxa de aceita��o do candidato "<<c4<<" do partido "<<p4<<" � de: "<<(n4/i)*100<<"%"<<endl;
    cout <<"A taxa de aceita��o do candidato "<<c5<<" do partido "<<p5<<" � de: "<<(n5/i)*100<<"%"<<endl;
    cout <<"A taxa de indecisos � de : "<<(n6/i)*100<<"%"<<endl;
    cout <<"A taxa de pessoas que votariam branco ou nulo � de: "<<(n7/i)*100<<"%"<<endl;
    cout <<"\nA taxa de rejei��o do candidato "<<c1<<" do partido "<<p1<<" � de: "<<((t1/ii)*100)<<"%"<<endl;
    cout <<"A taxa de rejei��o do candidato "<<c2<<" do partido "<<p2<<" � de: "<<((t2/ii)*100)<<"%"<<endl;
    cout <<"A taxa de rejei��o do candidato "<<c3<<" do partido "<<p3<<" � de: "<<((t3/ii)*100)<<"%"<<endl;
    cout <<"A taxa de rejei��o do candidato "<<c4<<" do partido "<<p4<<" � de: "<<((t4/ii)*100)<<"%"<<endl;
    cout <<"A taxa de rejei��o do candidato "<<c5<<" do partido "<<p5<<" � de: "<<((t5/ii)*100)<<"%"<<endl;
    cout <<"A taxa de pessoas sem rejei��o � de: "<<((t6/ii)*100)<<"%"<<endl;
    }
	else
	if (j==0)
	cout <<"Voc� saiu.";
	else
	cout <<"N�mero inv�lido.\n";
}
while (j!=0);
return 0;
}
