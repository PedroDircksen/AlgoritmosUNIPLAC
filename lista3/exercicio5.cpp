#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	float countCandidato1 = 0, countCandidato2 = 0, countCandidato3 = 0, votoNulo, votoBranco, media1, media2, media3, media5, media6;
	int voto, votosValidos = 20;
	string nome;
	
	for(int i = 0 ; i<20 ; i++)
	{
		cout << "Digite o código do candidato que deseja votar: ";
		cin >> voto;
		
		if(voto == 1)
		{
			countCandidato1++;
		}
		else if(voto == 2)
		{
			countCandidato2++;
		}
		else if(voto == 3)
		{
			countCandidato3++;
		}
		else if(voto == 5)
		{
			votoNulo++;
		}
		else if(voto == 6)
		{
			votoBranco++;
		}
		else
		{
			cout << "\nvoto inválido\n\n";
			votosValidos--;
		}
		
	}
	
	media1 = countCandidato1/votosValidos*100;
	media2 = countCandidato2/votosValidos*100;
	media3 = countCandidato3/votosValidos*100;
	media5 = votoNulo/votosValidos*100;
	media6 = votoBranco/votosValidos*100;
	
	if(media1>media2 && media1>media3)
	{
		nome = "João";
	}
	else if(media2>media1 && media2>media3)
	{
		nome = "Paulo";
	}
	if(media3>media2 && media3>media1)
	{
		nome = "Renato";
	}
	
	
	system("cls");
	cout << "\n==========================================================================";
	cout << "\nporcentagem de votos no candidato 1: " << media1 << "%";
	cout << "\nporcentagem de votos no candidato 2: " << media2 << "%";	
	cout << "\nporcentagem de votos no candidato 3: " << media3 << "%";
	cout << "\nporcentagem de votos nulos: " << media5 << "%";
	cout << "\nporcentagem de votos em branco: " << media6 << "%";
	cout << "\nO novo presidente se chama: " << nome;
	cout << "\n==========================================================================\n";
	
}
