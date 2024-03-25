# include <stdio.h>
# include <locale.h>


int main(){
setlocale(LC_ALL, "");

//  Variável.

int i;
int numero1, numero2, numero3 ,	numero4 , numero5;


//  Solicitando dados.

printf("Digite o 1° número: ");
scanf("%d",&numero1);

printf("Digite o 2° número: ");
scanf("%d",&numero2);

printf("Digite o 3° número: ");
scanf("%d",&numero3);

printf("Digite o 4° número: ");
scanf("%d",&numero4);

printf("Digite o 5° número: ");
scanf("%d",&numero5);

 
  for ( i = numero1; i <= 5; i++){
  
      printf("%d + %d + %d + %d + %d = %d \n", numero1, numero2, numero3, numero4, numero5,  i + numero2 + numero3 + numero4 + numero5 );
}
return 0;	
}
