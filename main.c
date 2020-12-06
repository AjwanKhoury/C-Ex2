#include <stdio.h>
#include<string.h>  
#include "myBank.h"

int main(){
	float arr [50][2] ={0};
   	char save[100];
	int Num = 0;
	float intereste=0;

   do{
		printf("Transaction type?: ");
   		scanf("%s", save);

      	if(strcmp(save,"O") == 0){
      		BankOpen(arr);
   		}

   		else if(strcmp(save,"B") == 0){
   			printf("Account number?: ");
			scanf("%d", &Num);
			if(Num > 950 || Num < 901)
				printf("Invalid Account Number\n");
			else
   				BankCheck(arr, Num);
   		}

   		else if(strcmp(save,"D") == 0){
   			printf("Account number?: ");
			scanf("%d", &Num);
			if(Num > 950 || Num < 901)
				printf("Invalid Account Number\n");
			else{
				BankEnter(arr, Num);
			}
		}

		else if(strcmp(save,"W") == 0){
			printf("Account number?: ");
			scanf("%d", &Num);
			if(Num > 950 || Num < 901)
				printf("Invalid Account Number\n");
			else{
				BankOut(arr, Num);
			}
   		}

		else if(strcmp(save,"C") == 0){
			printf("Account number?: ");
			scanf("%d", &Num);
			if(Num > 950 || Num < 901)
				printf("Invalid Account Number\n");
			else
				BankClose(arr, Num);
   		}

		else if(strcmp(save,"I") == 0){
			printf("Interest rate?: ");
			scanf("%f", &intereste);
			BaskInteres(arr, intereste);
   		}
		else if(strcmp(save,"P") == 0){
			BankPrinter(arr);
   		}
		else if(strcmp(save,"E") == 0){
			break;
   		}
   		else
   			printf("Invalid Char\n");

   		printf("\n");
   }while(1);

   
   return 0;
}