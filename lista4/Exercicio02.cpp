#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	int idade, idadeMaisVelho;
	string nome, alunoMaisVelho;
		
	idadeMaisVelho = INT_MIN;
	
	while(idade != 0)
	{
		cout << "Informe seu nome: ";
		cin >> nome;
		
		cout << "Informe a sua idade: ";
		cin >> idade;
		
		if(idade > idadeMaisVelho)
		{
			alunoMaisVelho = nome;
			idadeMaisVelho = idade;
		}
	}
	
	cout << "O aluno " << alunoMaisVelho << " é o mais velho com " << idadeMaisVelho << " anos";
}
