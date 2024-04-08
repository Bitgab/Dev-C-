# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>


int main (){
setlocale(LC_ALL,"");

// Declarando variável.

int contador;
int filho;
float salario, mediaSalario, somaSalario;
float filhoSoma, filhoMedia;
int maiorSalario = INT_MIN, menorSalario = INT_MAX;
char op;


// Solicitando dados ao usuario.

do{
printf("\nBem vindo a pesquisa social do Programador!\n");
 
	system ("cls || clear"); 
	printf("\nBem vindo a pesquisa social do Programador!\n");
	printf("\n======= MENU =======\n");
 	printf("\n");
 	printf("Código |   Descrição \n");
 	printf("  1ª   | Adicionar Família \n");
 	printf("  2ª   | Sair e Exibir resultados \n");
	 printf("Resposta do usuário: ");
 	scanf("%s",&op);
 	op = toupper(op);	

// Condicional Switch.
 
switch (op) {
	
	case '1':
		contador ++;
		printf("Informe sua renda mensal: ");
		scanf("%f",&salario);
		
		printf("Informe quantos filhos você tem: ");
		scanf("%d",&filho);
		
		somaSalario += salario;
		mediaSalario = somaSalario / (float)contador;
		
		filhoSoma   += filho;
		filhoMedia   = filhoSoma  /  contador;
		
			if (salario > maiorSalario){
			 maiorSalario = salario;
		}
		if (salario < menorSalario){
			menorSalario = salario;
    	}
	break;	
	
	case '2':
		printf("\n === EXIBINDO RESULTADO ===\n");
		printf("Total de família que respoderam a pesquisa: %i \n", contador);
		printf("Média de salário: %.2f \n",mediaSalario);
		printf("Média do número de filhos: %.1f \n",filhoMedia);
		printf("Maior salário: %i \n",maiorSalario);
		printf("Menor salário: %i \n",menorSalario);
		
}	


	
} while ( op == '1');
	
return 0;	
}
