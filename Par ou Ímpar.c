# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

   
  int main(){
 	   setlocale(LC_ALL, "portuguese");
       setlocale(LC_ALL, "");
       
       
     //Declara��o de vari�vel.
     
       int numero;
       
       
       // Solicitando dados ao usu�rio.
       
       printf ("Digite um n�mero: ");
       scanf ("%i", &numero);
       
       
       // Condicional.
       
       if (numero % 2 == 0){
       	printf("Par.");
	   } else{
	   	printf ("�mpar.");
	   }  
	   
       return 0;
   }
       
