#include<iostream>
#include<locale>

using namespace std;
int l,c;
int m[4][2]={l,c};

int main()

{setlocale(LC_ALL,"Portuguese");

	for (c=0;c<=7;c++)
		{
			cout<< "Digite os valores:";
			cin>>m[l][c];
		}


cout<< "\nValor da primeira linha, primeira coluna: "<< m[0][0];

cout<< "\nValor da primeira linha, segunda coluna: "<< m[0][1];

cout<< "\nValor da segunda linha, primei coluna: "<< m[1][0];

cout<< "\nValor da segunda linha, segunda coluna: "<< m[1][1];

cout<< "\nValor da terceira linha, primeira coluna: "<< m[2][0];

cout<< "\nValor da terceira linha, segunda coluna: "<< m[2][1];

cout<< "\nValor da quarta linha, primeira coluna: "<< m[3][0];

cout<< "\nValor da quarta linha, segunda coluna: "<< m[3][1];

return 0;
	
}
