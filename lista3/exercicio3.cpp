#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	int idade, countPessoasMais35 = 0, countPessoasMais180 = 0, maisNovo = 10000; 
	float altura, maisAlto = 0, mediaMaiores, totalAltura;
	string nome, nomeMaisAlto, nomeMaisNovo;
	
	
	for(int i = 1; i<=20 ; i++)
	{
		cout << "\nInforme o nome da " << i << "� pessoa: ";
		cin >> nome;
		cout << "Informe a altura da " << i << "� pessoa: ";
		cin >> altura;
		cout << "Informe a idade da " << i << "� pessoa: ";
		cin >> idade;
		
		if(idade > 35)
		{
			countPessoasMais35++;
		}
		if(altura>1.80)
		{
			countPessoasMais180++;
			totalAltura += altura;
		}
		if(idade < maisNovo)
		{
			maisNovo = idade;
			nomeMaisNovo = nome;
		}
		if(altura > maisAlto)
		{
			maisAlto = altura;
			nomeMaisAlto = nome;
		}
		
	}
	mediaMaiores = totalAltura/countPessoasMais180;
	
	cout << "\n\n==============================================================================";
	cout << "\nA m�dia de idade das pessoas com mais de 1,80 de altura �: " << mediaMaiores;
	cout << "\nA quantidade de pessoas com mais de 35 anos �: " << countPessoasMais35;
	cout << "\nO nome do mais alto �: " << nomeMaisAlto;
	cout << "\nO nome do mais novo �: " << nomeMaisNovo;
	cout << "\n==============================================================================\n\n";
	
}
