#include<stdio.h>

//16. PROGRAM TO READ THREE NOS. AND PRINT MAX

/*int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		if(a>c)
		{
			printf("The biggest number is: %d",a);
		}
		else
		{
			printf("The biggest number is: %d",c);
		}
	}
	else if (b>a)
	{
		if (b>c)
		{
			printf("The biggest number is: %d",b);
		}
		else
		{
			printf("The biggest number is: %d",c);
		}
	}
	
	else
	{
		printf("The biggest number is: %d,c");
	}
}*/

//17. PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&)

/*
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
	{
		printf("The biggest number is:%d",a);
	}
	else if (b>a && b>c)
	{
		printf("The biggest nummber is:%d",b);
	}
	else
	{
		printf("The biggest number is:%d",c);
	}
}*/


//18. PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :)
//OPERATOR.

/*
int main()
{ int a,b,c,big;
printf("Enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
big=((a>b&&a>c)?a:b>c?b:c);
printf("\nThe biggest number is:%d",big);
return 0;
}
*/


//19. PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE
//LETTER OR NOT USING CONDITIONAL OPERATOR.

/*
int main()
{
 char c;
 printf("Enter character : ");
 scanf("%c",&c);
 char L=(c>='a' && c<='z')?printf("It is a small letter"):printf("It is a capital letter");
}
*/




//20. PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE.


/*
int main()
{
	int a,b,m;
	unsigned char c;
	printf("Enter the operation to be used: ");
	scanf("%c",&c);
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	switch(c)
	{
		case '+': m=a+b;
		            printf("%d+%d=%d",a,b,m);
		            break;
		case '-': m=a-b;
		            printf("%d-%d=%d",a,b,m);
		            break;
		case '*': m=a*b;
		            printf("%d*%d=%d",a,b,m);
		            break;
		case '/': m=a/b;
		            printf("%d/%d=%d",a,b,m);
		            break;
		default:printf("\nWrong operator");	
	}
}
*/


//21. PROGRAM TO CALCULATE FACTORIAL OF A NO

/*
int main()
{
	int a, fact=1,i;
	printf("Enter number: ");
	scanf("%d",&a);
	i=1;
	while (i<=a)
	{
		fact=fact*i;
		i+=1;
		
	}
	printf("Factorial of %d= %d",a,fact);
	return 0;
}
*/


//22. PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER
//FILE(<MATH.H>).


/*
int main()
{
	int a,e;
	printf("Enter base and exponent: ");
	scanf("%d%d",&a,&e);
	int i=1;
	int p=1;
	while (i<=e)
	{
		p=p*a;
		i+=1;
	}
	printf("Value=%d",p);

}
*/




