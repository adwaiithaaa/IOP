#include<stdio.h>

//1. PROGRAM TO CALCULATE SIMPLE INTEREST.

/*int main()
{
	int P,R,T,SI;
	printf("Enter P,R,T: ");
	scanf("%d%d%d",&P,&R,&T);
	SI=(P*R*T)/100;
	printf("Simple Interest=%d", SI);
}*/


//2. PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL
//AND PERCENTAGE

/*int main()
{
	int a,b,c,d,e,sum;
	printf("Enter marks of 5 subjects: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	float avg=sum/5;
	printf("Total marks= %d",sum);
	printf("\nThe percentage= %f",avg);
}*/


//3. PROGRAM TO CALCULATE GROSS SALARY
/*int main()
{
	int sal,allow,med,gsal;
	printf("Enter basic salary: ");
	scanf("%d",&sal);
	printf("Enter allowance: ");
	scanf("%d",&allow);
	printf("Enter medical insurance: ");
	scanf("%d",&med);
	gsal=sal+allow+med;
	printf("Gross salary: %d",gsal);
	
}*/


//4. PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE
//DEGREES

/*int main()
{
	int f,c;
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%d",&f);
	c=(f-32)*5/9;
	printf("Temperature in Centigrade: %d",c);
}*/


//PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE

/*int main()
{
	int a,b,c;
	printf("Enter a and b: ");
	scanf("%d%d",&a,&b);
	printf("Value of a and b: %d\n%d",a,b);
	c=a+b;
	a=c-a;
	b=c-a;
	printf("\nA: %d",a);
	printf("\nB: %d",b);
}*/

//6. PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE

/*int main()
{
	int a,b;
	printf("Enter a and b: ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("A: %d",a);
	printf("\nB: %d",b);
}
*/


//7. PROGRAM TO CALCULATE AREA OF A TRIANGLE.

/*int main()
{
	int b,h,area;
	printf("Enter the breadth and height of the triangle: ");
	scanf("%d%d",&b,&h);
	area=(b*h)/2;
	printf("The area of the triangle s: %d", area);
}*/


//8.EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES

/*
int main()
{
	int d,h,m;
	int s=31558150;
	m=s/60;
	h=m/60;
	d=h/24;
	printf("Minutes: %d",m);
	printf("\nHours: %d",h);
	printf("\nDays: %d",d);	
}*/

//9.PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT
//INTO TOTAL SECOND

/*
int main()
{
	int h,m,d,s;
	printf("Enter time in hours: ");
	scanf("%d",&h);
	s=h*60*60;
	printf("Seconds: %d",&s);
	printf("\nEnter minutes: ");
	scanf("%d",&m);
	s=m*60;
	printf("Seconds: %d",s);
	printf("\nEnter days: ");
	scanf("%d",&d);
	s=d*60*60*24;
	printf("Seconds: %d",s);
}*/

//10. WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE
//FORMULA.
// CM = M/2+P/2+C/2+E
//WHERE CM = Cut of f mark
//M = Marks in Mathematics out of 200
//P = Marks in Physics out of 200
//C = Marks in Chemistry out of 200
//E = Marks in entrance examination out of 100

/*int main()
{
	int m,p,c,e,cm;
	printf("Enter the marks in Mathematics out of 200: ");
	scanf("%d",&m);
	printf("Enter the marks in Physics out of 200: ");
	scanf("%d",&p);
	printf("Enter the marks in Chemistry out of 200: ");
	scanf("%d",&c);
	printf("Enter the marks in entrance examination out of 100: ");
	scanf("%d",&e);
	cm=(m/2)+(p/2)+(c/2)+e;
	printf("Cut off marks: %d",cm);
}*/


//11.PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.

/*int main()
{
	int m,h,s;
	printf("Enter number of seconds: ");
	scanf("%d",&s);
	m=s/60;
	h=m/60;
	printf("Hours: %d",h);
	printf("\nMinutes: %d",m);
	printf("\nSeconds: %d",s);
}*/

//12. PROGRAM TO PRINT ASCII CODE OF ANY CHARACTER. 

/*int main()
{
	char c;
	printf("Enter character: ");
	scanf("%c",&c);
	printf("The ascii value: %d",c);
	return 0;
}*/

//13. PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD.

/*
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	{
		if (num%2==0)
		        printf("%d is an even number",num);
		else
		        printf("%d is an odd number",num);
	}
}*/

//14. PROGRAM TO CHECK WHETHER A GIVEN CHARACTER
//IS CAPITAL, LETTER, SMALL 

/*
int main()
{
	char c;
	printf("Enter character: ");
	scanf("%c",&c);
	if (c>='A' && c<='Z')
	{
		printf("It is a capital letter");
	}
	else if (c>= 'a' && c<='z')
	{
		printf("It is a small letter");	
	}
	else
	{
		printf("It is a special character");
	}
}*/


//15. PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION

/*
int main()
{
	int a,b,c,d,e,tot;
	printf("Enter marks of 5 subjects: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	tot=(a+b+c+d+e)/5;
	printf("Total=%d",tot);
	if (tot>90 && tot<=100)
	{
		printf("\nGrade A");
	}
	else if (tot>80 && tot<=90)
	{
		printf("\nGrade B");
	}
	else if (tot>70 && tot<=80)
	{
		printf("\nGrade C");
	}
	else if (tot>50 && tot<=70)
	{
		printf("\nGrade D");
	}
	else
	{
		printf("\nInvalid Grade");
	}
	
	
}*/



