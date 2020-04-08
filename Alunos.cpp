#include<iostream>
#include<locale>

using namespace std;
float m[5],p[5],i[5],al,mm,mp,mi;
int nt;

int main()

{setlocale(LC_ALL, "Portuguese");

	for(al=0;al<=4;al++)
	{

		for(nt=0;nt<=4;nt++)
			{
				cout<< "\nDigite as notas de Matemática:";
				cin>> m[nt];
			}

		for(nt=0;nt<=4;nt++)
			{
				cout<< "\nDigite as notas de Português:";
				cin>> p[nt];
			}
			
		for(nt=0;nt<=4;nt++)
			{
				cout<< "\nDigite as notas de Inglês:";
				cin>> i[nt];
			}
	
	mm=(m[0]+m[1]+m[2]+m[3]+m[4])/5;
	cout<< "\n1Média do aluno em Matemática:"<< mm;
		
	mp=(p[0]+p[1]+p[2]+p[3]+p[4])/5;
	cout<< "\nMédia do aluno em Português:"<< mp;
	
	mi=(i[0]+i[1]+i[2]+i[3]+i[4])/5;
	cout<< "\nMédia do aluno em Inglês:"<< mi;
	
	}
	
return 0;	
}
