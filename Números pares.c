# include <stdio.h>
# include <locale.h>

int main(){
setlocale(LC_ALL, "");

//  Declarando a variável.

 	int i;
 	
 	
//  For 	

    for (i = 100; i <= 120; i++){
  
    if(i % 2 == 0){  
       printf("%d \n", i);
        }
    }
	
return 0;	
}
