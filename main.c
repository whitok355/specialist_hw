#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("TASK 1\n");
	
	int n, sum = 0;
	
	printf("Please enter natural number\n");
	
	scanf("%d", &n);
	
	if(n > 0){
		printf("You number correctly\n");
		
		for(int i=1; i <= n; i++){
			sum += i;
		};
		
		printf("Your enter number %d, total summ %d\n", n, sum);
		
	} else{
		printf("You enter incorrectly number\n");
	}
	
	printf("TASK 2\n");
		
	int quantity, max_num;
	
	printf("Please enter the number of elements\n");
	scanf("%d", &quantity);
	
	if(quantity < 0){
		printf("Uncorrectly the number of elements\n");
	} else {
		
		int number;
		
		for(int i = 0; i < quantity; i++){
			printf("Please enter your number\n");
			scanf("%d", &number);
			if(number > max_num) {
				max_num = number;
			}
		}
	}
	printf("The maximum number that you entered %d\n", max_num);
	
}
