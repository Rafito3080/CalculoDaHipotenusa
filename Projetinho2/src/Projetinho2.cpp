#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int escolha;
	double X;
	double Y;
	double Hipo;
	double resu;
	double total;
	cout << "Como posso te ajudar nesta lição sobre o Teorema de Pitágoras? Selecione 1 caso o X for a hipotenusa. E pressione 2 caso X for algum cateto: \n2";
	cin >> escolha;
	cin.ignore();
	switch (escolha){
	case 1:
	cout << "Qual é o valor do cateto adjacente? ";
	cin >> X;
	cin.ignore();
	cout << "Qual o valor do cateto oposto? ";
	cin >> Y;
	cin.ignore();
	resu = (X*X) + (Y*Y);
	total = sqrt(resu);
	cout << "A hipotenusa é: " << total << " ou a √"<< resu;
	break;
	case 2:
		cout << "Qual é o valor do cateto? Adjacente ou Oposto: ";
		cin >> X;
		cin.ignore();
		cout << "Qual o valor da hipotenusa? ";
		cin >> Hipo;
		cin.ignore();
		resu = (Hipo*Hipo) - (X*X);
		total = sqrt(resu);
		cout << "O valor da hipotenusa é: "<< total <<" é √" << resu;
		break;
	default:
		cout << "Error";
	}
	return 0;
}
