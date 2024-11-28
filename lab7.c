#include<stdio.h>

//76) WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.

/*
int even_odd(int a);
int main()
{
	int a, num;
	printf("Enter the no to be checked: ");
	scanf("%d", &a);
	num=even_odd(a);
	if(num==1)
	{
		printf("It is an even");
	}
	else
	{
		printf("It is an odd");
	}
}
int even_odd(int a)
{
	if(a%2==0)
	{
		return 1;
	}
	else
	return 0;
}
*/


//77) WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.

/*
int palindrome(int a);
void main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	if (palindrome(a))
	{
		printf("It is a palindrome number\n");
	}
	else
	{
		printf("It is not a palindrome number\n");
	}
}
int palindrome(int a)
{
	int digit, sum=0, dup=a;
	while(a>0)
	{
		digit= a%10;
		sum= (sum*10)+ digit;
		a =a/10; 
	}
	
	if(dup==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
*/


//78) WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.

/*
int amstrong(int num);

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(amstrong(num))
	{
		printf("It is an armstrong number\n");
	}
	else
	{
		printf("It is not an armstrong number\n");
	}
	return 0;
}
int amstrong(int num)
{
	int sum=0, digit, temp=num;
	while(num>0)
	{
		digit= num%10;
		sum= sum + (digit*digit*digit);
		num= num/10;
	}
	if(temp==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
*/



//79) WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY
//X AND Y .

/*
int interchange(int x, int y);
int main()
{
	int x,y;
	printf("Enter the values of x and y: ");
	scanf("%d%d", &x,&y);
	interchange(x,y);
}
int interchange(int x, int y)
{
	int num;
	num=x;
	x=y;
	y=num;
	printf("%d\t%d", x, y);
}
*/



//80) WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI
//NUMBERS.TEST THE FUNCTION FOR N=5,10,AND 15.

/*
void fib(int n);

int main() {
    fib(5);
    fib(10);
    fib(15);

    return 0;
}


void fib(int n) 
{
    int a = 0, b = 1, c, i;

    if (n >= 1) {
        printf("Fibonacci Series up to %d terms: \n", n);
        printf("%d ", a);  
    }
    
    if (n > 1) {
        printf("%d ", b);  
    }

    for (i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");  
}
*/


//81) WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN
//ZERO OTHERWISE.

/*
int isPrime(int num);

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPrime(number)) 
    {
        printf("%d is a prime number.\n", number);
    } else 
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

int isPrime(int num) 
{
    int i;
    for (i = 2; i * i <= num; i++) {  
        if (num % i == 0) {
            return 0; 
        }
    }

    return 1;  
}
*/


//82) WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.   
//NCR = (!N/(!R*!(N-R)));

/*
double nCr(double n, double r);
double fact(double num);
int main()
{
    double n,r;
    printf("Enter n & r: ");
    scanf("%lf%lf", &n,&r);  

    double result = nCr(n,r); 
    printf("combination = %.2lf\n", result);  

    return 0;  
}
double fact(double num)  
{
    int i;
    double fact = 1;
    for( i  = 1 ; i <= num ; i++)
    {
    fact*=i;
    }
    return fact;
}

double nCr(double n, double r)  
{
    double combi;
    combi = fact(n)/(fact(r)*fact(n-r));
    return combi;
}
*/


//83) WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.

/*
void read_arr_max()
{
    int n, i;
    printf("Enter the number of terms you want in array\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element\n");
        scanf("%d",&arr[i]);
    }
    printf("array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    int max;
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("\nMaximum element of the array is %d",max);
}
int main()
{
    read_arr_max();
    return 0;

}
*/

//84) WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION.

/*
struct book
{
	char bookname[100];
	char author[100];
	int publicationyear;
	float price;
}; 

struct book readbook()
{
	struct book b;
	printf("Enter book name");
	scanf("%s", &b.bookname);
	printf("Enter author");
	scanf("%s", &b.author);
	printf("Enter year");
	scanf("%d", &b.publicationyear);
	printf("Enter price");
	scanf("%f", &b.price);
	return b;
}
 
void displaybook(struct book b)
{
	printf("\nbook info");
	printf("bookname: %s\n", b.bookname);
	printf("author:%s\n", b.author);
	printf("publicationyear: %d\n", b.publicationyear);
	printf("price: %f\n", b.price);
}
int main()
{
	struct book m;
	m = readbook();
	displaybook(m);
	return 0;
}
*/


//84) WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION
//USING POINTER TO STRUCTURE.

/*
#include<string.h>

struct books
    {
        char bookname[20];
        char author[20];
        int publicationyear;
        float price;
    };
struct books b;

void entry(struct books *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nenter the details of book %d\n",i+1);
        printf("\nbook name");
        scanf("%s",&p->bookname);
        printf("\nauthor's name");
        scanf("%s",&p->author);
        printf("\nyear of publication");
        scanf("%d",&p->publicationyear);
        printf("\nbook price");
        scanf("%f",&p->price);
        
    }

}

void display(struct books *p,int n)
{
   
    int i;
    for(i=0;i<n;i++)
    {
        printf("\ndetails of book %d\n",i+1);
        printf("\nbook name");
        printf("       %s",p->bookname);
        printf("\nauthor's name");
        printf("       %s",p->author);
        printf("\nyear of publication");
        printf("       %d",p->publicationyear);
        printf("\nbook price");
        printf("       %f",p->price);
        
    }

}
int main()
{
    int n;
    printf("\nenter the number of entries\n");
    scanf("%d",&n);
    
    entry(&b,n);
    display(&b,n);   

*/


//85) WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.

/*
void is_vowel(char ch);
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);

    is_vowel(c);
}

void is_vowel(char ch)
{
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("\nVowel");
        break;

        default:
        printf("\nNot vowel");
    }
}
*/

//86) WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT LENGTH OF STRING.

/*
#include<string.h>
int length(char *st);
int main()
{
    char line[1000];
    printf("Enter a string. \n");
    gets(line);
    int len = length(line);
    printf("length of string=%d",len);
}

int length(char *st)
{
    int count = 0;
    while(st[count]!='\0')
    {
        count++;
    }

    return count;
}
*/


//87) WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
//INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING
//ARRAY OF STRUCTURE INTO FUNCTION).

/*
void passedStudents(int arr[]); 
int main()
{
    int students[10], i; 
    for(i =0; i <10; i++)
    {
        printf("Enter marks: ");
        scanf("%d",&students[i]);
    }
    passedStudents(students); 
}

void passedStudents(int arr[]) 
{
	int i;
    for(i =0; i <10; i++) 
    {
        if(arr[i] > 500)
        {
            printf("Student with roll no. %d has passed the examinations with %d marks\n ",i,arr[i]);
        }
    }
}
*/
