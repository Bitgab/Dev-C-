# include <stdio.h>
# include <locale.h>


int main(){
setlocale(LC_ALL,"");


// Declarando a vari�veis.

float nota;


// Solicitando dados ao usu�rio.

do{

  printf("Digite sua nota: ");
  scanf("%f",&nota);

} while (nota < 0 || nota >10);


printf("\n=== EXIBINDO NOTA ===\n");
printf("Sua nota �:%.1f \n ",nota);

return 0;	
}
