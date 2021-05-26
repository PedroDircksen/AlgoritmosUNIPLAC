#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	float countVotoInvalido = 0, countCandidato1 = 0, countCandidato2 = 0, countCandidato3 = 0, countTotalVotos = 0;
	string ganhador;
	int voto;
	
	voto = 5;
	
	while(voto != 0)
	{		
		cout << "Informe seu voto: ";
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
		else
		{
			countVotoInvalido++;
		}
		
		countTotalVotos++;
	}
	
	if (countCandidato1 > countCandidato2 && countCandidato1 > countCandidato3)
	{
		ganhador = "João";
	}
	if (countCandidato2 > countCandidato1 && countCandidato2 > countCandidato3)
	{
		ganhador = "Pedro";
	}
	if (countCandidato3 > countCandidato1 && countCandidato3 > countCandidato2)
	{
		ganhador = "Arthur";
	}
	
	cout << "\nO ganhador foi: " << ganhador;
	cout << "\nPorcentagem dos votos: ";
	cout << "\nJoão: " << countCandidato1/(countTotalVotos)*100 << "%";
	cout << "\nPedro: " << countCandidato2/(countTotalVotos)*100 << "%";
	cout << "\nArthur: " << countCandidato3/(countTotalVotos)*100 << "%";
	cout << "\nVotos Inválidos: " << countVotoInvalido/(countTotalVotos)*100 << "%";
	
	
}

