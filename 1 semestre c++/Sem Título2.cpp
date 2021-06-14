#include <iostream>
using namespace std;
 
int main()

 {

     int soma=0, val;

     for(int i=1; i<=5; i = i+1)

     {

         cout << "Digite uma valor: ";

         cin >> val;

         soma = soma + val; // soma += val;
 
    }

     cout <<"Soma = "<< soma<< endl;


     soma =0;

     int i=1;

     while(i<=5)

     {

         cout << "Digite uma valor: ";

         cin >> val;

         soma = soma + val; // soma += val;

         i++; // i = i+1;

     }

     cout <<"Soma = "<< soma << endl;

     soma =0;

     i = 1; 

     do

     {

         cout << "Digite uma valor: ";

         cin >> val;

         soma = soma + val; // soma += val;

         i++; // i = i+1;        

     }
	 while(i<=5);

     cout <<"Soma = "<< soma << endl;

     return 0;

 }
