#include<stdio.h>
#include"rand.h"
#include"fact.h"
#include"fib.h"

int main()
{
    char s[30];
    char chk=1;/*to check if string value equal exit */
    int num=1;
    
    do {
	
        printf("Enter what U want >");
        
	gets(s);
        chk=((char)strcmp(s,"exit"));
        
	if (!strcmp(s,"rand")){
	randFn();
	}
	else if (!strcmp(s,"fact")){
	printf("Enter a number: ");
	scanf("%d",&num);
	getchar();/*to clean buffer and return "\n" to the program*/
	printf("Result is: %ld \n",(long)fact(num));
	
	}
	else if (!strcmp(s,"fib")){
	printf("Enter a number: ");
        scanf("%d",&num);
	getchar();/*to clean buffer and return "\n" to the program*/ 
        printf("The sequence is: ");
	for (int i=0;i<num;i++){
	printf("%ld, ",fib(i));
	}
	printf("%ld",fib(num));
	printf("\n");

	}

	else if (chk!=0) {
            printf("You said: %s \n", s);
        }
	

    } while (chk!=0);
    printf("Good Bye :)\n");

    return 0;
}

