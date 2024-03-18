# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

   
  int main(){
 	   setlocale(LC_ALL, "portuguese");
       setlocale(LC_ALL, "");
       
       
     //Declaração de variável.
     
       int numero;
       
       
       // Solicitando dados ao usuário.
       
       printf ("Digite um número: ");
       scanf ("%i", &numero);
       
       
       // Condicional.
       
       if (numero % 2 == 0){
       	printf("Par.");
	   } else{
	   	printf ("Ímpar.");
	   }  
	   
       return 0;
   }
       
