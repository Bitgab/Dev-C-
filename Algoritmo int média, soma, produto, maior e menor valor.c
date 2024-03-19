# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


 int main(){
 	setlocale(LC_ALL, "");
 	
 	 // Declaração de variáveis.
 	 
 	 int numeroUm, numeroDois;
 	 int soma, produto;
 	 int maiorValor, menorValor;
 	 float media;
 	 
 	 
     // Solicitando dados ao usuário.
     
     printf("Digite o primeiro número: ");
     scanf("%i",&numeroUm);
     
     printf("Digite o segundo  número: ");
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
	 printf("Primeiro número: %i \n", numeroUm);
	 printf("Segundo  número: %1 \n\n",numeroDois);
	 printf("A média é: %.1f\n", media);
	 printf("A soma  é: %i\n", soma);
	 printf("O produto é: %i\n\n", produto);
	
	 if (numeroUm == numeroDois){
	 	printf("Os dois números são iguais.");
	 } else {
	 	printf("Maior número: %i \n", maiorValor );
	 	printf("Menor número: %i \n", menorValor);
	 }
	    
 	
 	return 0;
 	
 }
