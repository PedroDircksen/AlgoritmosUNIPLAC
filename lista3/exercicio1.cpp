#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	int countHomens = 0, countMulheres = 0, sexo;
	
	cout << "========= Contador de g�nero =========";
	cout << "\n\nConsidere 1 - Homem || 2 - mulher\n\n";
	
	for(int i = 0; i<10 ; i++)
	{
		cout << "Informe seu sexo: ";
		cin >> sexo;
		
		if(sexo == 1)
		{
			countHomens++;
		}
		else if(sexo == 2)
		{
			countMulheres++;
		}
		else
		{
			cout << "\nSexo inv�lido. \n\n";
		}		
	}
	
		cout << "\n\n==========================";
		cout << "\nO total de homens �: " << countHomens;
		cout << "\nO total de mulheres �: " << countMulheres;
		cout << "\n==========================\n\n";
}
