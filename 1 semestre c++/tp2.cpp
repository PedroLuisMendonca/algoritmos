#include <iostream>
#include <locale>
#include <math.h>
using namespace std;
int main()
{
setlocale(LC_ALL, "portuguese");
int n, n1;
float p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16;
double t, t1, t2, t3, t4, t5, t6, t7, t8, t10, t11, t12, t13, t16;
float q1, q2, q3, q4, q5, q8, q16;
n=1;
do
{
cout <<"Escolha uma op��o.\n1.Cadastrar n�mero de participantes.\n2.Cadastrar pre�o dos produtos.\n3.C�lculos.\n4.Para sair.\n";
cin >>n;
if (n==1)
{
	cout <<"Digite o n�mero de participantes. ";
	cin >>n1;
}
if (n==2)
{
	cout <<"Qual o pre�o da lata de cerveja? ";
	cin >>p1;
	cout <<"Qual o pre�o do litro de refrigeante normal? ";
	cin >>p2;
	cout <<"Qual o pre�o do litro de refrigerante diet? ";
	cin >>p3;
	cout <<"Qual o pre�o do kg de carne? ";
	cin >>p4;
	cout <<"Qual o pre�o do kg de lingui�a toscana? ";
	cin >>p5;
	cout <<"Qual o pre�o do kg de lingui�a de frango? ";
	cin >>p6;
	cout <<"Qual o pre�o do kg de tomate? ";
	cin >>p7;
	cout <<"Qual o pre�o do kg de cebola? ";
	cin >>p8;
	cout <<"Qual o pre�o o vinagre? ";
	cin >>p9;
	cout <<"Qual o pre�o do kg de lim�o? ";
	cin >>p10;
	cout <<"Qual o pre�o do p�o? ";
	cin >>p11;
	cout <<"Qual o pre�o do saco de carv�o? ";
	cin >>p12;
	cout <<"Qual o pre�o do saco de sal grooso? ";
	cin >>p13;
	cout <<"Qual o pre�o do detergente? ";
	cin >>p14;
	cout <<"Qual o pre�o da esponja de pia? ";
	cin >>p15;
	cout <<"Qual o pre�o do pacote de papel higi�nico? ";
	cin >>p16;
}
if (n==3)
{
q1=n1*3;
q2=n1*0.8;
q3=n1*0.2;
q4=n1*0.25;
q5=n1*0.05;
q8=n1*0.02;
q16=n1*0.025;
t1=q1*p1;
t2=ceil(q2)*p2;
t3=ceil(q3)*p3;
t4=q4*p4;
t5=q5*p5;
t6=q5*p6;
t7=q5*p7;
t8=q8*p8;
t10=q5*p10;
t11=q1*p11;
t12=ceil(q5)*p12;
t13=ceil(q8)*p13;
t16=ceil(q16)*p16;
t=(t1+t2+t3+t4+t5+t6+t7+t8+p9+t10+t11+t12+t13+p14+p15+t16)*1.05;
cout <<"O n�mero de participantes �: "<<n1<<endl;
cout <<"A quantidade de latas de cerveja �: "<<q1<<endl;
cout <<"A quantidade de litros de refrigerante normal �: "<<ceil(q2)<<endl;
cout <<"A quantidade de litros de refrigerante diet �: "<<ceil(q3)<<endl;
cout <<"A quantidade de kg de carne �: "<<q4<<endl;
cout <<"A quantidade de kg de lingui�a toscana �: "<<q5<<endl;
cout <<"A quantidade de kg de lingui�a de frango �: "<<q5<<endl;
cout <<"A quantidade de kg de tomate �: "<<q5<<endl;
cout <<"A quantidade de kg de cebola �: "<<q8<<endl;
cout <<"A quantidade de vinagre �: 1"<<endl;
cout <<"A quantidade de kg de lim�o �: "<<q5<<endl;
cout <<"A quantidade de p�es �: "<<q1<<endl;
cout <<"A quantidade de sacos de carv�o �: "<<ceil(q5)<<endl;
cout <<"A quantidade de sacos de sal grosso �: "<<ceil(q8)<<endl;
cout <<"A quantidade de detergente �: 1"<<endl;
cout <<"Aquantidade de esponja de pia �: 1"<<endl;
cout <<"A quantidade de pacotes de papel higi�nico �: "<<ceil(q16)<<endl;
cout <<"O valor total �: "<<t<<endl;
cout <<"O valor por pessoa �: "<<(t/n1)<<endl;
}
if (n>4 || n<1)
cout <<"Op��o inv�lida. "<<endl;
}
while (n!=4);
}
