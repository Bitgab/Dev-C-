# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


 int main(){
 	setlocale(LC_ALL, "");
 	
 	 // Declara��o de vari�veis.
 	 
 	 int numeroUm, numeroDois;
 	 int soma, produto;
 	 int maiorValor, menorValor;
 	 float media;
 	 
 	 
     // Solicitando dados ao usu�rio.
     
     printf("Digite o primeiro n�mero: ");
     scanf("%i",&numeroUm);
     
     printf("Digite o segundo  n�mero: ");
     scanf("%i",&numeroDois);
     
     
     // Calculo.
     
     soma = numeroUm + numeroDois;
	 produto = numeroUm * numeroDois ;
	 media = soma / (float) 2;
	 
	 
	 // Condicional. 
	   if (numeroUm > numeroDois){
	   maiorValor = numeroUm;
	   menorValor = numeroDois;
	 } else
	   	maiorValor = numeroDois; 
	 	menorValor = numeroUm;

	 
	  // Exibindo resultado.
	  
	 printf("\n=== EXIBINDO RESULTADO ===\n");
	 printf("Primeiro n�mero: %i \n", numeroUm);
	 printf("Segundo  n�mero: %1 \n\n",numeroDois);
	 printf("A m�dia �: %.1f\n", media);
	 printf("A soma  �: %i\n", soma);
	 printf("O produto �: %i\n\n", produto);
	
	 if (numeroUm == numeroDois){
	 	printf("Os dois n�meros s�o iguais.");
	 } else {
	 	printf("Maior n�mero: %i \n", maiorValor );
	 	printf("Menor n�mero: %i \n", menorValor);
	 }
	    
 	
 	return 0;
 	
 }
