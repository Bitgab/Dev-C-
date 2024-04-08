# include <stdio.h>
# include <string.h>
# include <locale.h>


 int main(){
 	setlocale(LC_ALL, "portuguese");
 	
 	 // Declaração de variáveis.
 	 
 	 char loginSalvo [200] = "Gabriel";
 	 char senhaSalva [200] = "1234567";
 	 char login      [200];
 	 char senha      [200];
 	 
 	 printf("Informe seu usuário: ");
 	 scanf("%s",&login);
 	 
 	 printf("Digite sua senha: ");
 	 scanf("%s",&senha);
 	 
 	 if (strcmp(login,loginSalvo) == 0 && strcmp(senha,senhaSalva) == 0){
 	 	printf("Bem vindo!");
	  } else{
	  	printf("Acesso negado!");
	  }
 	 
 	 return 0;
 }
