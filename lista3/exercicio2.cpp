#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	int countAlunos = 0, countAlunoZero = 0;
	float nota,  media, totalNotas;
	
	for(int i = 1; i<=20 ; i++)
	{
		cout << "Informe a nota do " << i << "° aluno: ";
		cin >> nota;
		
		totalNotas += nota;
		
		countAlunos++;
		
		if(nota == 0)
		{
			countAlunoZero++;
		}
		
	}
	
	cout << "\n\n=============================================";
	cout << "\nA média da turma foi: " << totalNotas/countAlunos;
	cout << "\nQuantidade de alunos que zeraram: " << countAlunoZero;
	cout << "\n=============================================\n\n";
		
}
