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

// Solicitando dados ao usu�rio.


do {
		
	
 	printf("Informe quantos filhos voc� tem: ");
 	scanf("%i",&qtdFilhos);
 	  
 	printf("Informe seu sal�rio: ");
 	scanf("%f",&salario);
 	if (salario > maiorSalario){
		maiorSalario = salario;
	}
	if (salario < menorSalario){
		menorSalario = salario;
	}

 printf("\n=== MENU ===\n");
 printf("\n");
 printf("C�digo |   Descri��o \n");
 printf("  1�   | Adicionar Fam�lia \n");
 printf("  2�   | Sair e Exibir resultados \n");
 printf("Resposta do usu�rio: ");
 scanf("%s",&continua);
 continua = toupper(continua);
 
 
 // C�lculo.
 
 
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
		printf("Total de fam�lia que respoderam a pesquisa: %i \n",contador);
		printf("M�dia de sal�rio: %.2f \n",mediaSalario);
		printf("M�dia do m�mero de filhos: %i \n",mediaDeFilhos);
		printf("Maior sal�rio: %i \n",maiorSalario);
		printf("Menor sal�rio: %i \n",menorSalario);
	
	break;
	
	default: 
	printf("Op��o inv�lida!");	
	   
 	} 
  
 }while (continua == '1');
 
return 0;
}
