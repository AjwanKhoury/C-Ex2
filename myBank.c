#include <stdio.h>
#include "myBank.h"


void BankOpen(float arr[50][2]){
	int i = 0 ;
	for(; i < 50 ; i++){
		if(arr[i][0] == 0){
			printf("Initial deposit?: ");
			float amount = 0;
			scanf("%f", &amount);
			arr[i][0] = 1;
			arr[i][1] = amount;
			printf("Bank number: %d , amount: %f\n ", i+901, arr[i][1]);
			break;
		}
	}
	if(i == 50 )
		printf("already there is 50 account , no space to add other account\n");
}

void BankCheck(float arr[50][2], int bankNum){
	if(arr[bankNum-901][0] == 1)
		printf("Bank number: %d , amount: %f\n ", bankNum, arr[bankNum-901][1]);
	else
		printf("The acount %d is not active..\n", bankNum);
}

void BankEnter(float arr[50][2], int bankNum){
	if(arr[bankNum-901][0] == 1){
		float amount = 0;
		printf("Amount?: ");
		scanf("%f", &amount);
		arr[bankNum-901][1] += amount;
		printf("Bank number: %d , amount: %f\n ", bankNum, arr[bankNum-901][1]);
	}
	else
		printf("The acount %d is not active..\n", bankNum);
}

void BankOut(float arr[50][2], int bankNum){
	if(arr[bankNum-901][0] == 1){
		float amount = 0;
		printf("Amount?: ");
		scanf("%f", &amount);
		if(amount <= arr[bankNum-901][1]){
			arr[bankNum-901][1] -= amount;
			printf("Bank number: %d , amount: %f\n ", bankNum, arr[bankNum-901][1]);
		}
		else
			printf("There is no amount in your account!!\n");
	}
	else
		printf("The acount %d is not active..\n", bankNum);
}

void BankClose(float arr[50][2], int bankNum){
	arr[bankNum-901][0] = 0;
}

void BaskInteres(float arr[50][2], int interes){
	for(int i = 0 ; i < 50 ; i++)
		if(arr[i][0] == 1)
			arr[i][1] += arr[i][1]* interes/100;
	}


void BankPrinter(float arr[50][2]){
	for(int i = 0 ; i < 50 ; i++){
		 if(arr[i][0] == 1)
			printf("Bank number: %d , amount: %f\n ", i+901, arr[i][1]);
	}
}