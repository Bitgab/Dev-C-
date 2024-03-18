# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

   
  int main(){
 	   setlocale(LC_ALL, "portuguese");
       setlocale(LC_ALL, "");
      
	 // Declaração de variavel.
	  
      float valor, desconto, valorFinal;
      
    
	 // Solicitando dados ao usuário.
	 
	 printf("Digite um valor: ");
	 scanf ("%f",&valor);
	 
	 
	 // Desconto.
	 
	  desconto = valor * 0.1; 
	   valorFinal = valor - desconto; 
	  
	  
	   system ("cls || clear");
	 // Exibindo resultado.
	 
	 printf("\n=== EXIBINDO RESULTADO ===\n");
	 printf("valor informado: R$ %.2f \n",valor);
	 printf("Valor com desconto: R$ %.2f\n", desconto);
	 printf("Valor final: R$ %.2f", valorFinal);
	 
       return 0;
   }
