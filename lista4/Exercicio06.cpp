#include <iostream>
using namespace std;
main ()
{

	setlocale (LC_ALL, "Portuguese");

	float qtd;
	double tipo;
	string numero;
	double total1 = 0, total2 = 0, total3 = 0, totalTodos;	

	while (true) {
		
		cout<<"Digite o tipo de consumidor - 1-residencial, 2-comercial, 3-industrial, 0-sair: ";  
		cin>>tipo;  	
		if(tipo == 0){
			break;
		}
		cout<<"Digite o número do consumidor: ";  
		cin>>numero;
		
		cout<<"Digite a quantidade de kwh consumidos durante o mês: ";  
		cin>>qtd;
		
		if(tipo == 1){
			total1 += qtd*0.3;
			totalTodos += qtd*0.3;
		}
		else if(tipo == 2){
			total2 += qtd*0.5;
			totalTodos += qtd*0.5;
		}
		else if(tipo == 3){
			total3 += qtd*0.7;
			totalTodos += qtd*0.7;
		}
		else{
			cout<<"Tipo invalido."<<endl;
			system("PAUSE");
		}
	}
	
	cout<<endl<<"Custo total para cada consumidor..."<<endl; 
	cout<<"residencial "<<total1<<endl;
	cout<<"comercial "<<total2<<endl;	
	cout<<"industrial "<<total3<<endl;
		
	cout<<endl<<"Total de consumo para os três tipos de consumidor..."<<endl; 
	cout<<"Total: "<<totalTodos<<endl;

	cout<<endl<<"Categoria com mais consumo..."<<endl;
	if(total1 > total2 && total1 > total3){
		cout<<"1 - residencial, com: "<< total1<<endl;
	}		
	else if(total2 > total1 && total2 > total3){
		cout<<"2 - comercial, com: "<< total2<<endl;
	}else{
		cout<<"3 - industrial, com: "<< total3<<endl;
	}
	system("PAUSE");
	return 0;
}
