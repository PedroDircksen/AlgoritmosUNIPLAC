#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");

	string nome;
	double tempSalarioM, tempSalarioF, salarioM, salarioF;
	string sexo;	
	int contM = 0, contF = 0;
		
	while (true) {
		
		cout<<"Digite o sexo do funcionario: ";  
		cin>>sexo;  	
		if(sexo =="x" || sexo =="X"){
			break;
		}
		cout<<"Digite o nome do funcionario: ";  
		cin>>nome;
		if(sexo == "m" || sexo == "M" ){
			cout<<"Digite o sal�rio: ";  
			cin>>tempSalarioM;
			salarioM += tempSalarioM;
			contM++;
		}
		else if(sexo == "f" || sexo == "F" ){
			cout<<"Digite o sal�rio: ";  
			cin>>tempSalarioF;
			salarioF += tempSalarioF;
			contF++;
		}
	}

	if(salarioM/contM > salarioF/contF){
		cout<<"M�dia salarial mais alta: MASCULINA, com: "<< salarioM/contM<<endl;
	}		
	else{
		cout<<"M�dia salarial mais alta: FEMININA, com: "<< salarioF/contF<<endl;
	}
	system("PAUSE");
	return 0;
}
