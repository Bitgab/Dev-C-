# include <stdio.h>
# include <locale.h>
int main (){
setlocale(LC_ALL,"");
int numero [5];
 numero [0] = 1;
 numero [1] = 2;
 numero [2] = 3;
 numero [3] = 4;
 numero [4] = 5;

printf("Elemento 1º: %i\n\n",numero[0]);    
printf("Elemento 2º: %i\n\n",numero[1]);  
printf("Elemento 3º: %i\n\n",numero[2]);  
printf("Elemento 4º: %i\n\n",numero[3]);  
printf("Elemento 5º: %i\n\n",numero[4]);  
return 0;
}
