# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>


int main (){
setlocale(LC_ALL,"");

int qtdFilhos, contador = 1;
float salario;
float mediaSalario, mediaDeFilhos, somaSalario, soma;
int maiorSalario = INT_MIN, menorSalario = INT_MAX;
char continua;

// Solicitando dados ao usuário.


do {
		
	
 	printf("Informe quantos filhos você tem: ");
 	scanf("%i",&qtdFilhos);
 	  
 	printf("Informe seu salário: ");
 	scanf("%f",&salario);
 	if (salario > maiorSalario){
		maiorSalario = salario;
	}
	if (salario < menorSalario){
		menorSalario = salario;
	}

 printf("\n=== MENU ===\n");
 printf("\n");
 printf("Código |   Descrição \n");
 printf("  1ª   | Adicionar Família \n");
 printf("  2ª   | Sair e Exibir resultados \n");
 printf("Resposta do usuário: ");
 scanf("%s",&continua);
 continua = toupper(continua);
 
 
 // Cálculo.
 
 
	somaSalario += salario;
	mediaSalario = somaSalario / contador;
	
	soma += qtdFilhos;
	mediaDeFilhos = soma / contador;
 
 
 // Condicional Switch.
 
 switch (continua){
 	
 	case '1':
 	  contador++;
 	break;
	 
	case '2':
		printf("\n === EXIBINDO RESULTADO ===\n");
		printf("Total de família que respoderam a pesquisa: %i \n",contador);
		printf("Média de salário: %.2f \n",mediaSalario);
		printf("Média do múmero de filhos: %i \n",mediaDeFilhos);
		printf("Maior salário: %i \n",maiorSalario);
		printf("Menor salário: %i \n",menorSalario);
	
	break;
	
	default: 
	printf("Opção inválida!");	
	   
 	} 
  
 }while (continua == '1');
 
return 0;
}
