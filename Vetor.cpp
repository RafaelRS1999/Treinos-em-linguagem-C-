#include <locale>
#include <iostream>
using namespace std;
int n[8], i;

int main()
{  setlocale(LC_ALL, "Portuguese");   
   for (i=0; i<=7; i++)
     {cout<< "\nDigite o valor: ";
      cin >> n[i];
     }


cout<< "\n\nValores armazenados no vetor\n";
for (i=0; i<=7; i++)
     { cout<< n[i]<<"\t"; }


cout<< "\n\nValores na ordem inversa\n";
for (i=7; i>=0; i--)
     { cout<< n[i]<<"\t"; }
     
float soma; //Soma dos n�ros do presentes no vetor
	for (i=0, soma=0; i<=7; i++)
     { soma = soma + n[i]; }
	cout<< "\n\nSoma dos n�meros:" << soma;

float media; //M�dia dos n�meros presentes no vetor
	for (i=0, soma=0; i<=7; i++)
     { soma = soma + n[i]; }
	media = soma /6;
	cout<< "\n\nM�dia dos n�meros:" << media;

int valor, qt; //Consulta do valor dentro do vetor
	cout<< "\nDigite um n�mero para a compara��o ";
	cin >> valor;
	for (i=0, qt=0; i<=7; i++)
     { if (n[i] < valor)
	      { qt++; }
     }
	cout<< "\n\nQuantidade de n�meros menores:"  << qt;

return 0;

}
