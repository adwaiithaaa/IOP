#include<stdio.h>

//PATTERN PRINTING

//48.

/*
void main()
{
	int a,j,i,k;
	printf("Enter number of rows: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
*/


//49.

/*
void main()
{
	int n,j,i,k;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n-i+1;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}

*/
//50.
/*
void main()
{
	int n,i,c=65,j;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",c);
		}
		c=c+1;
		printf("\n");
	}
}
*/

//51.

/*
void main()
{
	int n,i,j;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==i)
		{
		printf("1");
		}
		else
	    {
		    printf("0");
     	}
        }
	    printf("\n");
    }
}
*/

//52.

/*
void main()
{
	int n,j,i,sum=0,a=1,prod;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		while(a<=i)
		{
			sum=sum*10+1;
			a=a+1;
		}
		prod=sum*sum;
		printf("%d",prod);
		printf("\n");
	}
}
*/


//53. 

/*
int main()
{
	int n,i,k,j,y,l,m;
	printf("Enter size of triangle: ");
	scanf("%d",&n);
	for(i=n;i>0;i=i-2)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n-i+1;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	    for(y=n;y>0;y=y-2)
	    {
			
			if(n%2==0)
			{
				for(l=1;l<=n-y+3;l++)
			{
			printf(" ");
			}
			    for(m=1;m<y-2;m++)
			{
				printf("* ");
			}
			}
			
			else
			{
				for(l=1;l<=n-y+2;l++)
			{
				printf(" ");
			}
			        for(m=1;m<y-1;m++)
			{
				printf("* ");
			}
			}
			printf("\n");
		}
	return 0;
}
*/

//54. PROGRAM TO RED AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS.
/*
int main()
{
	int i,arr[10],sum=0;
	    printf("Enter 10 numbers to find sum of: ");
	for(i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
	sum=sum+arr[i];
	}
	printf("%d",sum);
	return 0;
}
*/


//55) PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND
//TOTAL NO. OF EVERY ELEMENT.

/*
int main()
{
	int arr[10],a=0,b=0,i;
	printf("Enter any 10 numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			a=a+1;
		}
		else
		{
			b=b+1;
		}
	}
	        printf("Number of odd numbers= %d \n",b);
	    printf("Number of even numbers= %d",a);
	return 0;
}
*/


//56) PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE,
//NEGATIVE, AND ZERO ELEMENTS


/*
int main()
{
	int a[10],n,d=0,b=0,c=0,i;
	printf("Enter 10 numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			d=d+1;
		}
		else if(a[i]<0)
		{
			b=b+1;
		}
		else
		{
			c=c+1;
		}
	}
	        printf("Positive numbers present is= %d\n",d);
	        printf("Negative numbers present is= %d\n",b);
	        printf("Zero elements are= %d",c);
	return 0;
}
*/


//57) PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.

/*
int main()
{
	int max,smax,d,n,i;
	printf("Enter number of numbers to be checked: ");
	scanf("%d",&n);
	int a[n];
	if(n<2)
	{
		printf("Enter atleast 2 numbers: ");
	}
	else
	printf("Enter numbers (1): ");
	scanf("%d",&a[1]);
	max=smax=a[1];
	{
		for(i=2;i<=n;i++)
		{
			printf("Enter numbers (%d): ",i);
			scanf("%d",&a[i]);
			if(a[i]>smax)
			{
				smax=a[i];
			}
			if(smax>max)
			{
				d=max;
				max=smax;
				smax=d;
			}
		}
		printf("Array is ");
		for(i=1;i<=n;i++)
		{
			printf("%d \t",a[i]);
		}
		if(smax==max)
		{
			printf("Dont enter same number: ");
		}
		else
		{
		printf("\nMaximum number is : %d\n",max);
		printf("Second maximum number is : %d",smax);
		}
	}
	return 0;
}
*/

//58. PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE
//ARRAYS INTO THIRD.

/*
int main()
{
	int a[10],b[10],c[10];
	int n,i;
	printf("Enter number for A array\n");
	for(i=0;i<10;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter number for B array\n");
	for(i=0;i<10;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&b[i]);
	}
	for(i=0;i<10;i++)
	{
		c[i]=a[i]+b[i];
		printf("Addition array is= %d\n",c[i]);
	}
	return 0;
}
*/



//59. PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE
//ARRAYS

/*
int main()
{
	int a[10],b[10],c[10];
	int n,d,i;
	printf("Enter number for A array\n");
	for(i=0;i<10;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter number for B array\n");
	for(i=0;i<10;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&b[i]);
	}
	for(i=0;i<10;i++)
	{
		d=a[i];
		a[i]=b[i];
		b[i]=d;
	}
	    printf("A array is\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("B array is\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}
*/


//60. PROGRAM TO SORT (SELECTION SORT) AN ARRAY.


/*
int main() 
{
    int arr[10], n, i, j, tindex, temp;

    printf("Enter the no. of numbers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
	{
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }

    // Selection Sort algorithm
    for (i = 0; i < n-1; i++) 
	{
        // Assume the current index as the smallest
        tindex = i;

        // Find the smallest element in the array
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[tindex]) 
			{
                tindex = j;
            }
        }

        // Swapping smallest element with the first element of original array
        temp = arr[tindex];
        arr[tindex] = arr[i];
        arr[i] = temp;
    }

    // Displaying sorted array
    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/



