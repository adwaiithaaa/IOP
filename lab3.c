#include <stdio.h>
#include <math.h>


// 24. WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
//1+x where n=1
//1+x/n where n=2
//1 +xn when n=3
//1 + nx when n>3 or n<1


//USING IF-ELSE
/*
int main()
{
	int x,n,m;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of n: ");
	scanf("%d",&n);
	if (n==1)
	{
		m=1+x;
		printf("%d+%d=%d",1,x,m);
	}
	if (n==2)
	{
		m=(1+x)/n;
		printf("(%d+%d)/%d=%d",1,x,n,m);
	}
	if (n==3)
	{
		m=1+pow(x,n);
		printf("%d+%d^%d=%d",1,x,n,m);
	}
	else
	{
		if(n>3 || n<1)
		{
			m=1+pow(n,x);
			printf("%d+%d^%d=%d",1,n,x,m);
		}
	}
}
*/

//USING SWITCH-CASE

/*
int main()
{
	int x,n,m;
	printf("Enter value of x: ");
	scanf("%d",&x);
	printf("Enter value of n: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			m=1+x;
			printf("%d+%d=%d",1,x,m);
			break;
		
		case 2:
			m=(1+x)/n;
			printf("(%d+%d)/%d=%d",1,x,n,m);
			break;
		
		case 3:
			m=1+pow(x,n);
			printf("%d+%d^%d=%d",1,x,n,m);
			break;
			
		default:
			m=1+pow(n,x);
			printf("%d+%d^%d=%d",1,n,x,m);
			break;
			

	}
}
*/


// 25. PROGRAM TO PRINT TABLE OF ANY NO

/*
int main()
{
	int a,i,m;
	printf("Enter a number: ");
	scanf("%d",&a);
	i=0;
	while (i<=11)
	{
		m=i*a;
		i=i+1;
		printf("\n%d x %d = %d ",i,a,m);
	}
}*/

//26. PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.

/*
int main()
{
	int n,even,odd,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	i=0;
	even=0;
	odd=0;
	while (i<=n)
	{
		if (i%2==0)
		{
			even=even+i;
			i=i+1;
		}
		else
		{
			odd=odd+i;
			i=i+1;
		}
	}
	printf("Sum of even numbers: %d",even);
	printf("\nSum of odd numbers: %d",odd);
	
}
*/


//27. PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT

/*
int main()
{
	int num;
	printf("Enter number to be checked: ");
	scanf("%d",&num);
	int flag=1;
	int b;
	    for (b=2;b<=num/2;b++)
	    {
	    	if (num%b==0)
	    	    {
	    	    	flag=0;
	    	    	break;
				}		
		}
		if (flag==1)
		    {
		    	printf("It is a prime number");
			}
		else
		    {
		    	printf("It is not a prime number");
	    	}
}
*/

//28. PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.


/*
int main()
{
	int num, sum=0, cube, q, newnum;
	printf("Enter number to be checked: ");
	scanf("%d",&num);
	newnum=num;
	while(newnum!=0)
	{
		q=newnum%10;
		cube=q*q*q;
		sum=cube+sum;
		newnum=newnum/10;
	}
	if(num==sum)
	   {
	   	printf("Armstrong number= %d", sum);
	   }
	else
	   {
	   	printf("It is not Armstrong");
	   }
		
	    
}
*/


//29. PROGRAM TO CHECK WHETHER A NO IS PALINDROME OR NOT.


/*
int main()
{
	int n,rev=0,rem,original;
	printf("Enter the number to be checked: ");
	scanf("%d",&n);
	original=n;
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	if (rev==original)
	{
		printf("The number is palindrome");	
	}
	else
	{
		printf("The number is not palindrome");
	}
}
*/

//30. PROGRAM TO PRINT REVERSE OF A GIVEN NUMBER


/*
int main()
{
	int n,rev=0,rem;
	printf("Enter the number to be reversed: ");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	printf("The reversed number is:%d",rev);
}
*/

//31. PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO


int main()
{
    int n, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;  // Get the last digit
        sum = sum + digit;  // Add digit to sum
        n = n / 10;  // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}




//32. PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS 


/*
int main() {
    int n, num, max = 0, secondMax = 0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    int i;
    printf("Enter a number: ");
    scanf("%d", &num);
    max = num;  
    for (i = 1; i < n; i++) 
	{
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > max) {
            secondMax = max;
            max = num;
        } else if (num > secondMax) {
            secondMax = num;
        }
    }

    printf("Max: %d, Second Max: %d\n", max, secondMax);
    return 0;
}
*/

//33. PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NUMBERS

/*
int main() 
{
    int n, num, max, min;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter a number: ");
    scanf("%d", &num);
    max = min = num;  // Set first number as both max and min
    int i;
    for (i = 1; i < n; i++) 
	{
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }

        if (num < min) {
            min = num;
        }
    }

    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}
*/

