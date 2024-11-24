
#include <stdio.h>
#include <math.h>


//34. PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)

/*
int main()
{

    int n, a = 0, b = 1, sum;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d", a, b);
    int i;

    for (i = 3; i <= n; i++) 
	{
        sum = a + b;
        printf(" %d", sum);
        a = b;
        b = sum;
    }

    printf("\n");
    return 0;
}
*/

//35. READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF NUMBERS

/*
int main() 
{
    int n, sum = 0,rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) 
	{
		rem=n%10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("The sum is %d",sum);
}
*/

//36. PROGRAM TO PRINT 1,3,5,7,9………N


/*
int main()
{
	int n,i=1;
	printf("Enter the limit: ");
	scanf("%d",&n);
	while (i<=n)
	{
		if (i%2!=0)
		{
			printf("\n%d",i);
		}
		i=i+1;	
	}
}
*/

//37. PROGRAM TO PRINT 2,4,6,8,10,12………N.

/*
int main()
{
	int n,i=1;1
	printf("Enter the limit: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if (i%2==0)
		{
			printf("\n%d",i);
		}
		i=i+1;
	}
}*/



//38. PROGRAM TO PRINT 1,4,9,16,25,………N.

/*
int main()
{
	int n,i=0,add=0;
	printf("Enter a limit: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if (i%2!=0)
		{
			add=add+i;
			printf("\n%d",add);
		}
		i=i+1;
	
	}	
}
*/


//39. PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.

/*
int main() 
{
    int n,i,j;
    float sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &n);
    for (i=1;i <= n; i++) 
	{
        fact = 1;
        for (j=1;j <= i; j++) 
		{
            fact = fact * j;
        }
        sum = sum + (i / fact);
    }

    printf("Sum of series: %.2f\n", sum);
    return 0;
}
*/

//40. READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A
//LIST OF NUMBERS READ.

/*
int main()
{
	int n,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n>=0)
	{
		sum=sum+n;
		printf("Enter a number: ");
		scanf("%d",&n);
	}
	printf("The sum is %d",sum);
}
*/



//41. READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)


/*
int main()
{
	int n,i=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("\n %d",i);
		}
		i=i+1;
	}
}
*/

//42. READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE

/*
int main()
{
	int n,i=1,count=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			count=count+1;
		}
		i=i+1;
	}
	if(count==2)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is a composite number",n);
	}
}
*/

//43. WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES
//REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.
//If sales<=Rs. 500, commission is 5%
// If sales> but <=2000, commission is Rs. 35 plus 10% above Rs. 500
//If sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000
// If sales>5000, commission is 12.5%


/*
int main()
{
	int sales,com;
	printf("Enter sales amount: ");
	scanf("%d",&sales);
	if(sales<=500)
	{
		com=(5.0/100)*sales;
	}
	if(sales>500 && sales<=2000)
	{
		com=((10.0/100)*sales)+35;
	}
	if(sales>2000 && sales<=5000)
	{
		com=((12.0/100)*sales)+185;
	}
	if(sales>5000)
	{
		com=(12.5/100)*sales;
	}
	printf("Commission is %d rupees",com);
}
*/


//44. WRITE A PROGRAM IN C FOR THE FOLLOWING.
//AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS
//FOLLOWS.
//Consumption in unit Rate for Charge
//0-200 Re 0.50 per unit
//210-400 Rs. 100 plus Re 0.65 per unit excess of 200
//401-600 Rs. 230 plus Re 0.80 per unit excess of 400
//Above 600 Rs. 425 plus Rs. 125 per unit excess of 600
//Print the amount to be paid by the consumer

/*
int main()
{
	float con,rate,newc;
	printf("Enter the consumption in unit: ");
	scanf("%f",&con);
	if(con>=0 && con<=200)
	{
		rate=0.50*con;
	}
	else if(con>=210.0 && con<=400.0)
	{
		newc=con-200.0;
		rate=(0.65*newc)+100.0;
	}
	else if(con>=401.0 && con<=600.0)
	{
		newc=con-400.0;
		rate=(0.80*newc)+230.0;
	}
	else if(con>600.0)
	{
		newc=con-600.0;
		rate=(1.25*newc)+425.0;
	}
	printf("Total to be paid= %f",rate);
}
*/
















