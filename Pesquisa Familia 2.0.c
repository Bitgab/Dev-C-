# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>


int main (){
setlocale(LC_ALL,"");

// Declarando vari�vel.

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
 	printf("C�digo |   Descri��o \n");
 	printf("  1�   | Adicionar Fam�lia \n");
 	printf("  2�   | Sair e Exibir resultados \n");
	 printf("Resposta do usu�rio: ");
 	scanf("%s",&op);
 	op = toupper(op);	

// Condicional Switch.
 
switch (op) {
	
	case '1':
		contador ++;
		printf("Informe sua renda mensal: ");
		scanf("%f",&salario);
		
		printf("Informe quantos filhos voc� tem: ");
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
		printf("Total de fam�lia que respoderam a pesquisa: %i \n", contador);
		printf("M�dia de sal�rio: %.2f \n",mediaSalario);
		printf("M�dia do n�mero de filhos: %.1f \n",filhoMedia);
		printf("Maior sal�rio: %i \n",maiorSalario);
		printf("Menor sal�rio: %i \n",menorSalario);
		
}	


	
} while ( op == '1');
	
return 0;	
}
