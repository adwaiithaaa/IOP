//99. WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS
//PRESENT IN THE FILE.

/*
#include<stdio.h>
int main()
{
    FILE *fptr; 
    fptr = fopen("Text.txt","w");
    
    fprintf(fptr,"%s","Shriya");
    fclose(fptr); 

    
    fptr = fopen("Text.txt","r");
    char string[100];
    fscanf(fptr,"%s",string); 

    puts(string);
    fclose(fptr);
 
    fptr = fopen("Text.txt","r");

    int vowelCount =0;
    char ch;
    fscanf(fptr,"%c",&ch);
    while( !feof(fptr))
    {
        switch(ch)
        {
            case 'a': 
            case 'e':
            case 'i':
            case 'o':
            case 'u':vowelCount++;
        }
    fscanf(fptr,"%c",&ch);
   
    }

    fclose(fptr);
    printf("%d",vowelCount);


return 0;

}
*/

//100. A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL
//NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N
//STUDENTS.

/*
#include<stdio.h>
struct StudentInfo
{
    int rollNo;
    char name[100];
    float totalMarks;
}s;
int main()
{  
    FILE *fptr;
    fptr = fopen("LNMIITSTUDENT.JAVA","w");
    int N,i;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    getchar();

    for(i =0; i < N; i++)
    {   
        printf("Enter the details of student\n");
        printf("Enter Roll No.: ");
        scanf("%d",&s.rollNo);
        getchar();
        printf("Enter student Name: ");
        gets(s.name);
        printf("Enter Total Marks: ");
        scanf("%f",&s.totalMarks);

        fprintf(fptr,"%s","Roll_No:");
        fprintf(fptr,"%d",s.rollNo);
        fprintf(fptr,"%s","\n");

        fprintf(fptr,"%s","Name:");
        fprintf(fptr,"%s",s.name);
        fprintf(fptr,"%s","\n");

        fprintf(fptr,"%s","Total Marks");
        fprintf(fptr,"%f",s.totalMarks);
        fprintf(fptr,"%s","\n");

        fprintf(fptr,"%s","\n");


    }
    fclose(fptr);
    return 0;
    
}
*/


//101. WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”.

/*
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("LNMIITSTUDENT.DAT","a");
    fprintf(fptr,"%s","Adding to file");
    fclose(fptr);
    
    return 0;
}
*/


//102. WRITE A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE.

/*
#include<stdio.h>
int main()
{
    int charCount =0,wordsCount=0,lineCount =0;
    
    FILE *fptr;
    fptr =fopen("textFile.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    while(!feof(fptr))
    {
        charCount++;
        if(ch == ' ')
        {
            wordsCount++;
        }
        if(ch == '\n')
        {
            lineCount++;
        }

        fscanf(fptr,"%c",&ch);
    }

    printf("%d is the character count, %d is the word count and %d is the line count.",charCount,wordsCount,lineCount);
}
*/

//103) WRITE A C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS.

/*
#include<stdio.h>
#define BIGGEST(a,b)  ((a)>(b)?(a):(b))

int main()
{   int num1,num2;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);

    int result = BIGGEST(num1,num2);
    printf("%d is the biggest among entered numbers",result);
    return 0;

}
*/

//104) AN ENUMERATION WITH COLOR NAMES CAN BE USED IN A SWITCH STATEMENT TO DISPLAY
//THE HEXADECIMAL COLOR CODE.

//105) WRITE A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS.
//THE PERMUTATIONS
//OF THE STRING ARE: ABCD ABDC ACBD ACDB ADCB ADBC BACD BADC BCAD BCDA BDCA BDAC CBAD
//CBDACABD CADB CDAB CDBA DBCA DBAC DCBA DCAB DACB DABC

/*
#include<stdio.h>
#include<string.h>
void swap (char *a, char *b)
{
    char t = *a;
    *a = *b;
    *b =t;
}
void permute(char *word,int left,int right)
{
    //base case
    int i;
    if(left == right)
    {
        printf("%s ",word); 
    }
    else
    {
     for(i = left; i <= right; i++)
     {
        swap(word+left,word+i); 
        permute(word, left+1,right); 
        swap(word+i,word+left); 
     }
    }
}

int main()
{
    char word[]= "ABCD";
    int left =0,n =strlen(word);
    permute(word,0,n-1);

return 0;
}
*/

//106. CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY,
//PRICE AND AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND
//PRICE AS INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.

/*
#include<stdio.h>

struct ITEM
{
    char name[100];
    int quantity;
    float price;
    float amount;
};

float calculateAmount(struct ITEM s)
{
    s.amount = s.price * s.quantity;
    return s.amount;
}

int main()
{   
    struct ITEM s1;
    printf("Enter the name of the item: ");
    scanf("%s",s1.name);
    printf("Enter the quantity of item: ");
    scanf("%d",&s1.quantity);
    printf("Enter the price of the item: ");
    scanf("%f",&s1.price);
    
    s1.amount = calculateAmount(s1); 
    
    printf("The amount of %s is %f",s1.name,s1.amount); 
    return 0;

    
}
*/


//107) IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS
//LAST N DIGITS
//FOR EXAMPLE FLIP(123, 2)= 132 ; (HERE N=2) FLIP(12345,3)= 12543 (HERE N=3).

/*
#include<stdio.h>
#include<math.h>
//function to count digits
int countDigits(int n)
{   int count =0;
    while(n != 0)
    {
        count++;
        n  /= 10;
    }
    return count;
}
//function to store each digit in array
void storeDigits(int num,int arr[],int digits)
{
	int i;
    for(i =0; i <digits; i++ )
    {
        arr[digits-i-1] = num%10;
        num =num/10;
    }
}
//function to swap integer variables
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b; 
    *b =t;
}

int flipNum(int digits, int arr[],int n)
{   int answer=0,i;
    for(i =0; i < n/2; i++)
    {
        swap(&arr[digits-1-i],&arr[digits-n+i]);
    }
    for(i =0; i < digits;i++)
    {
        answer = answer + (pow(10,digits-i-1)*arr[i]); 
    }
    return answer;
}

int main()
{   int num,n;
    printf("Enter the number and the value of N: ");
    scanf("%d %d",&num,&n);

    int digits = countDigits(num);
    if(n >digits)
    {
        printf("Invalid Input");
    }
    else
    {
        int arr[digits];
        storeDigits(num,arr,digits);
        int ans = flipNum(digits,arr,n);
    printf("%d",ans);
    }
  return 0;  
}
*/

// 108. WITHOUT USING INBUILT STRING FUNCTIONS, PERFORM THE FOLLOWING IN C LANGUAGE:
//A. COPY ONE STRING INTO ANOTHER
//B. COMPARE TWO STRINGS
//C. CONCAT TWO STRINGS
//D. REVERSE A GIVEN STRING

/*
#include<stdio.h>
void swap(char *a, char *b)
{
    char t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    char word1[100]= "Adwaitha";
    char word2[] = "Sivaraj";

    char copy[10],concate[100];
    
    //copying word 1 to copy
    int i, length =0;
    while(word1[length] != '\0')
    {
        length++;
    }
    for(i =0; i < length; i++)
    {
        copy[i] = word1[i];
    }
    copy[length] = '\0';
    puts(copy);

    // concatenating word1 and word2;
    int length2 =0;
    while(word2[length2] !='\0')
    {
        word1[length+length2] = word2[length2];
        length2++;
    }
    puts(word1);

    //comparing two strings
    if(length == length2)
    {   int flag =1;
        for(i =0; i < length; i++)
        {
            if(word1[i] != word2[i])
            {
                flag =0;
                break;
            }
        }
        if(flag == 0)
        {
            printf("\nThe two strings are different");
        }
        if(flag ==1)
        {
            printf("\nThe two strings are equal");
        }
    }
    else
    {
           printf("\nThe two strings are different\n");
    }

    //reversing the string 1

    for(i =0; i < (length+length2)/2; i++)
    {
        swap(&word1[i],&word1[length+length2-1-i]);
    }

    puts(word1);


}
*/

//109). MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C
//A. INITIALIZE THE POINTER WITH THE OTHER (A NORMAL VARIABLE WHOSE VALUE WE HAVE TO
//MODIFY)

/*
#include<stdio.h>
int main()
{
    int var,value,*ptr;
    ptr = &var;

    printf("Enter the initial value of variable: ");
    scanf("%d",&var);
    printf("\n%d is the initial value of variable",var);

    printf("\nEnter the new value of variable: ");
    scanf("%d",&value);
    *ptr = value;
    printf("\n%d is the modified value of variable",var);
return 0;
    
}
*/
