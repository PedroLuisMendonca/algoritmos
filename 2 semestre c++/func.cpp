#include <iostream>
#include <locale>
using namespace std;

string triangulo(float y, float x = 0, float z = 0){
	string tri;
	if (y<x+z && x<y+z && z<x+y){
		if (y==z && y==x)
		tri = "Equil�tero";
		else{
	    	if (y==z || y==x || x==z)
	    	tri = "Is�sceles";
	        else{
	        	if (y!=z && y!=x && x!=z)
	        	tri = "Escaleno";
	            }
     	    }
     	}
   	else
   	tri = "Inv�lido";
	return tri;
	}
int main()
{
	float x, y, z;
	string xx, zz;
	setlocale(LC_ALL, "portuguese");
	cout << "Digite a medida do primeiro lado do tri�ngulo. ";
	getline(cin, xx);
	cout << "Digite a medida do segundo lado do tri�ngulo. ";
	cin >> y;
	cout << "Digite a medida do terceiro lado do tri�ngulo. ";
	getline(cin, zz);
	if (xx != ""){
    x = atof(xx.c_str());
  }
  if (zz != ""){
    z = atof(zz.c_str());
  }
	cout << "O tipo de tri�ngulo que voc� mediu �: "<<triangulo(y, x, z);
return 0;
}
