#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");

	string nome;
	double qtd;	
	double valor;	
	
	string nomeMaisBarato;
	string nomeMaisVendido;
	
	double MaisVendido = 0;
	double valorMaisBarato = 0;
	double qtdMaisBarato = 0;

	double media;
	double cont = 0;
		
	while (nome != "fim") {
  		
		cout<<"Digite o nome do produto: ";  
		cin>>nome;
		if(nome =="fim"){
			break;
		}
		cout<<"Digite o valor do produto: ";  
		cin>>valor;

		cout<<"Digite a quantidade vendida: ";  
		cin>>qtd;

  		if(valor > valorMaisBarato)	{
  			valorMaisBarato = valor;
  			nomeMaisBarato = nome;
		}			
  		if(qtd > MaisVendido)	{
  			MaisVendido = qtd;
  			nomeMaisVendido = nome;
		}	
  		media += valor;		
  		cont++;
	}

	cout<<endl<<"Mais barato"<<endl;
	cout<<"Nome: "<<nomeMaisBarato<<" e Valor: "<<valorMaisBarato<<endl;
	cout<<endl<<"Mais vendido"<<endl;
	cout<<"Nome: "<<nomeMaisVendido<<" e Valor: "<<MaisVendido<<endl;
	cout<<endl<<"Média de preços dos produtos"<<endl;
	cout<<"Média: "<<media/cont<<endl;		
	
	system("PAUSE");
	return 0;
}
