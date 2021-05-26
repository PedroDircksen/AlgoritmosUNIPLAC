#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	float media, nota;	
	string nome;
	int countMedia = 0;
	
	
	int i = 0;
	
	cout << "Iforme seu nome: ";
	cin >> nome;		
	
	while(nome != "fim" && i<15)
	{
		cout << "Iforme sua nota: ";
		cin >> nota;
		
		cout << "Iforme seu nome: ";
		cin >> nome;		
		
		media += nota;
		countMedia++;
		i++;
	}
	
	cout << "A média foi de: " << media/countMedia << endl;
	system("pause");
}
