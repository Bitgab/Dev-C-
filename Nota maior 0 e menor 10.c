# include <stdio.h>
# include <locale.h>


int main(){
setlocale(LC_ALL,"");


// Declarando a variáveis.

float nota;


// Solicitando dados ao usuário.

do{

  printf("Digite sua nota: ");
  scanf("%f",&nota);

} while (nota < 0 || nota >10);


printf("\n=== EXIBINDO NOTA ===\n");
printf("Sua nota é:%.1f \n ",nota);

return 0;	
}
