//88) WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.

/*
#include<stdio.h>
int main()
{   
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr1[n]; 
    for(i =0; i <n; i++)
    {
        printf("Enter the element to be stored at index %d: ",i+1);
        scanf("%d",&arr1[i]);
    }

    int arr2[n]; 
    for(i =0; i <n; i++)
    {
        *(arr2+i) = *(arr1+i);
    }

    for(i =0; i <n; i++)
    {
        printf("%d\t",arr2[i]);
    } 
    return 0;
}
*/

//89)WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF
//SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.
/*
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr1[n] ;
    int arr2[n]; 

    for(i =0; i < n; i++)
    {
        printf("Enter the element at index %d: ",i+1);
        scanf("%d",&arr1[i]);
    }

    for(i =0; i <n; i ++)
    {
        *(arr2+i) =*(arr1+n-i-1); 
    }

    for(i =0; i <n; i++)
    {
        printf("%d\t",arr2[i]);
    }
return 0;
}
*/

//90) WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES
//USING POINTERS.

/*
#include<stdio.h>
int main()
{
    char string[100];
    printf("Enter the string: ");
    gets(string);
    char *t = string, *k = string,*m = string;
    while(*t != '\0')
    {  

        if(*t != ' ')
        {
            m++;
        }
        t++;
        
    }
    int length1 = t-k;
    int length2 = m-k;

    printf("%d is the string length including spaces\n",length1);
    printf("%d is the string length excluding spaces\n",length2);
    return 0;


} 
*/


//91)WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING
//POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.

/*
#include<stdio.h>
#include<math.h>
int main()
{
    int *ptr,n; 
    ptr =&n; 
    printf("Enter the number: ");
    scanf("%d",&n);
    int square = pow(*ptr,2);
    int cube = pow(*ptr,3);
    printf("%d %d",square,cube);
    return 0;
}
*/

//92).WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.

/*
#include<stdio.h>
int main()
{
	int i;
    int arr[5]={5,10,15,20,2};
    int *ptr = &arr[0];
    int largest=*ptr;
    for(i=0;i<4;i++)
    {
        if(*ptr>largest)
        largest=*ptr;

        ptr++;
    }
    printf("\nLargest:%d",largest);
}
*/

//93) WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.


/*
#include<stdio.h>
#include<string.h>
int main()
{
    char string[100]; 
    printf("Enter the string: "); 
    gets(string);

    char *ptr = string; 
    int wordcount =0; 

    if(strcmp(string,"") != 0) 
    {

    while(*ptr != '\0')
    {
        if(*ptr == ' ' || *ptr == '\n' || *ptr == '\0')
        {
            wordcount++;
        }
        ptr++;
    }
            wordcount++;
    }
    printf("%d",wordcount);
    return 0;
}
*/


//94).WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING
//POINTERS.FOR EXAMPLE,
//ST =”SVNITJAVA” IS COPIED AS “AVAJTINVS”

/*
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the string: ");
    char string1[100];
    char string2[100];
    gets(string1);
    int length= strlen(string1);
    int i;
    for(i=0; i < length; i++ )
    {
        *(string2+i) = *(string1 + length -1 -i);
    }
    puts(string2);
    return 0;
}
*/


//95)WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
//,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
//ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
//PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.

/*

#include<stdio.h>

typedef struct employeeData 
{
    int employee_number;
    char employeeName[100];
    float basicPay;
} e1;

int main()
{   e1 *ptr;
    e1 employees[50];
    printf("Enter the value of N: ");
    int N, i; 
    scanf("%d", &N);
    getchar();
    if(N >=1 && N <=50 )
    {  
        for(i =0; i< N; i++)
        {
            printf("Enter employee number of employee %d: ",i+1);
            scanf("%d",&employees[i].employee_number);
            getchar();
            printf("Enter employee name: ");
            gets(employees[i].employeeName);
            printf("Enter basic pay: ");
            scanf("%f",&employees[i].basicPay);
        }
        
    for(i =0; i < N; i++)
    {
    	printf("\nEmployee Number: %d\n",employees[i].employee_number);
        printf("Employee Name: %s",employees[i].employeeName);
        printf("\nBasic Pay: %f\n",employees[i].basicPay);
    }
    return 0;
    }
    
}
*/


//96) WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING
//POINTERS.

/*
#include<stdio.h>
#include<string.h>
int main()
{   int N =6, i, j;
    char str[6][100];
    strcpy(str[0],"Adwaitha");
    strcpy(str[1],"Shriya");
    strcpy(str[2],"Tanishka");
    strcpy(str[3],"Diya");
    strcpy(str[4],"Zahra");
    strcpy(str[5],"Savitha");
    char *ptr[5];
    char *temp;
    for(i =0; i <N; i++)
    {
        ptr[i] = str[i];
    }
    for(i =0; i < N; i++)
    {
        for(j =i+1; j <N; j++)
        {
            if(strcmp(ptr[i],ptr[j])>0)
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }




    for(i =0; i <N; i++)
    {
        puts(ptr[i]);
    }
return 0;
}
*/


//97) WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.

/*
#include<stdio.h>
#include<string.h>

int main()
{
    char string[100];
    int vowelcount =0;
    printf("Enter the string: ");
    gets(string);

   char *ptr = string;
   while(*ptr != '\0')
   {
    switch(*ptr)
    {
        case 'a': 
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
		vowelcount++;
    }
    ptr++;
   }

   printf("%d",vowelcount);
   return 0;
}
*/

///98)WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC
//MEMORY ALLOCATION.

/*
#include<stdio.h>
#include<stdlib.h>
void freeMatrix(int** matrix, int rows)
{
	int i, j, k;
    for (i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}
int main()
{ 
    int rows1,columns1,sum;
    printf("Enter rows of matrix 1: ");
    scanf("%d",&rows1);
    printf("Enter columns of matrix 1: ");
    scanf("%d",&columns1);
    
    int rows2, columns2;
    printf("Enter rows of matrix 2: ");
    scanf("%d",&rows2);
    printf("Enter columns of matrix 2: ");
    scanf("%d",&columns2);

    if(columns1 != rows2)
    {
        printf("Matrix multiplication is not possible");
    }

    else
    {
        int **matrix1 = (int**) malloc(rows1 * sizeof(int));
        {
        	int i;
            for(i =0; i < rows1; i++)
            {
                matrix1[i] = (int *) malloc(columns1 * sizeof(int));
            }
        }
        int **matrix2 = (int **) malloc(rows2 * sizeof(int));
        int i;
        for(i =0; i < rows2; i++)
        {
            matrix2[i] = (int *) malloc(rows1 * sizeof(int));
        }

        printf("\n Enter the input for matrix 1: ");
        for(i =0; i <rows1; i++)
        {
        	int j;
            for(j =0; j < columns1; j++)
            {
                scanf("%d",&matrix1[i][j]);
            }
            
        }
    
        printf("\n Enter the input for matrix 2: ");
        for(i =0; i <rows2; i++)
        {
        	int j;
            for(j =0; j < columns2; j++)
            {
                scanf("%d",&matrix2[i][j]);
            }
            
        }

       int **result = (int **) malloc(rows1 * sizeof(int));
       for(i =0; i < columns2; i++)
       {
        result[i] = (int *) malloc(columns2 * sizeof(int));
       }

    for(i =0; i <rows1; i++)
    {
    	int j;
        for(j =0; j <columns2; j++)
        {            
		    sum =0;
		    int k;
            for(k =0; k < rows2; k++)
            {
                sum = sum + matrix1[i][k]*matrix2[k][j];
            }
            result[i][j] = sum;

        }
    }

    for(i =0; i < rows1; i++)
    {
    	int j;
        for(j =0; j < columns2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    freeMatrix(result,rows1);
    freeMatrix(matrix1,rows1);
    freeMatrix(matrix2,rows2);
    return 0;    
    }
}
*/
