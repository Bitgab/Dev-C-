# include <stdio.h>
# include <locale.h> 

int main(){
	setlocale(LC_ALL, "");
	
	
   // Declarando vari�vel.
   	
	int numero;
	int i;
	
  // Solicitando dados.
  
  printf("Escolha um n�mero: ");
  scanf("%d",&numero);
  
  for ( i = 1; i <= 10; i++)
      printf("%d x %d = %d \n", numero, i, i * numero );
	
	
}
