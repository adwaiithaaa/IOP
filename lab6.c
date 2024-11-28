//61. PROGRAM TO SORT (BUBBLE SORT) AN ARRAY

/*
int main()  
{  
    int arr[10], i, j, temp;  
    printf("Enter 10 integers:\n");  
    
    for(i = 0; i < 10; i++)  
    {  
        scanf("%d", &arr[i]);  
    }
	  
    for(i = 0; i < 10; i++)  
    {  
        for(j = 0; j < 9; j++)  
        {  
            if(arr[j] > arr[j+1])
            {  
                temp = arr[j];  
                arr[j] = arr[j+1];  
                arr[j+1] = temp;  
            }  
        }  
    }   
    printf("Sorted array: ");  
    for(i = 0; i < 10; i++)  
    {  
        printf("%d ", arr[i]);  
    }  
    return 0;  
}
*/


// 62. PROGRAM TO REVERSE AN ARRAY.

/*
int main() 
{
	int arr[10], i, temp, start = 0, end = 9;
	
	for (i = 0; i<10; i++) 
	{
		printf("Enter a value: ");
		scanf("%d", &arr[i]);
	}
	
	// Reversing the array
	while (start<end) 
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	
	printf("The reversed array is:\n ");
	for (i = 0; i <10; i++) 
	{
		printf("%d\n", arr[i]);
	}
}
*/


//63. PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.


/*
int main() 
{
	int a[3][3],i,j;
	
	printf("Enter matrix elements: ");
	for (i = 0; i < 3; i++) 
	{
		for ( j = 0; j < 3; j++) 
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	int min = a[0][0];
	int max = a[0][0];
	for ( i = 0; i < 3; i++) 
	{
		for ( j = 0; j < 3; j++)
		{
			if (a[i][j] > max) 
			{
				max = a[i][j];
			}
			else if (a[i][j] < min) 
			{
				min = a[i][j];
			}
		}
	}
	printf("Min = %d \n", min);
	printf("Max = %d \n", max);
} 
*/


//64. PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS.


/*
int main()
{
	
	int a[3][3], sum = 0,i,j;
	
	printf("Enter the matrix elements: ");
	for ( i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			sum += a[i][j];
		}
		
		printf("Sum of row %d = %d \n", i, sum);
		sum = 0;
	}
	
}
*/

//66. PROGRAM TO READ A 3*3 MATRIX AND ADD THEIR VALUE AND STORE THEM IN THIRD MATRIX


/*
int main() 
{
	int a[3][3], b[3][3], sum[3][3], i,j;
	
	printf("Enter A matrix elements: ");
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter B matrix elements:");
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	printf("Sum matrix: \n");
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			sum[i][j] = 0;
			sum[i][j] = a[i][j] + b[i][j];
			printf("%d \t", sum[i][j]);
		}
		printf("\n");
	}
}
*/



//67) PROGRAM TO READ A 3*3 MATRIX AND SUBTRACT THEIR VALUE AND STORE THEM
//IN THIRD MATRIX

/*
int main() 
{
	int a[3][3], b[3][3], sub[3][3],i,j;
	
	printf("Enter the matrix A elements: ");
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter the matrix B elements: ");
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	printf("Subtracted matrix: \n");
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			sub[i][j] = 0;
			sub[i][j] = a[i][j] - b[i][j];
			printf("%d \t", sub[i][j]);
		}
		printf("\n");
	}
}
*/


//68) PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM
//IN THIRD MATRIX


/*
int main() 
{
	int a[3][3], b[3][3], multi[3][3],i,j;
	
	printf("Enter the matrix A elements: ");
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter the matrix B elements: ");
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	printf("Product matrix: \n");
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			multi[i][j] = 0;
			multi[i][j] = a[i][j] * b[i][j];
			printf("%d \t", multi[i][j]);
		}
		printf("\n");
	}
}
*/


//69. PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY

/*
int main()
{
    int array[10],search,index,i;
    for(i=0;i<10;i++)
    {
        printf("Enter the element to be searched for: \n");
        scanf("%d",&array[i]);
    }
    printf("Array is displayed below: \n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    printf("Enter the element to be searched");
    scanf("%d",&search);
    for(i=0;i<10;i++)
    {
        if(array[i]==search)
        {
            index=i;
            break;
        }
    }
    printf("Element is present and at the index %d",index);
    return 0;
}

*/




//70) PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR
//ELEMENT IN THE ARRAY.


/*
int main()
{
    int array[10],element,occur,i;
    for(i=0;i<10;i++)
    {
        printf("enter the element\n");
        scanf("%d",&array[i]);
    }
    printf("enter the element whose occurence number you want to know\n");
    scanf("%d",&element);
    occur=0;
    for(i=0;i<10;i++)
    {
        if(array[i]==element)
        {
            occur+=1;
        }
    }
    printf("number of occurence of the entered element is %d",occur);
    return 0;
}
*/


//71) Write a program in C to find the pivot element of a sorted and rotated array using binary search. 
//Pivot element is the only element in input array which is
//smaller than its previous element. A pivot element divided a sorted rotated array 
//into two monotonically increasing array.

/*
int main()
{
    int high,low,i;
    int low_index=0,high_index=5;
    printf("Let the array is:");
    int arr[6]={5,8,69,115,200,3500};
    for(i=0;i<6;i++)
    {
        printf("\t%d",arr[i]);
    }

    int rotate_arr[6]={200,3500,5,8,69,115};
    printf("\nThe rotated array is:");
    for(i=0;i<6;i++)
    {
        printf("\t%d",rotate_arr[i]);
    }

    high =arr[5];
    low= arr[0];

    while(high!=low)
    {
        if(high<low)
        {
            printf("\nNot rotated");
        }
    else if(high == low)
    {
        
    }
    }


}
*/

//72) Write a program in C to rotate an array by N positions.

/*
void main()
{
    int num,i;
    printf("Enter the number of elements you want in the array ");
    scanf("%d", &num);
    printf("Enter the elements ");
    int a[num];
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    int rotate_point;
    printf("Enter the number of positions you want to rotate by ");
    scanf("%d", &rotate_point);
    int b[num];
    for (i = 0; i < num; i++)
    {
        if (i + rotate_point < num)
        {
            b[i + rotate_point] = a[i];
        }
        if (i + rotate_point >= num)
        {
            b[i + rotate_point - num] = a[i];
        }
    }
    printf("The array after rotation is : \n");
    for (i = 0; i < num; i++)
    {
        printf("%d ", b[i]);
    }
}
*/

//73) An election is contested by 5 candidates. The candidate is numbered are 1 to 5
//and the voting is done by marking the candidate number on the ballot paper.
//Write a program to read the ballots and count the votes cast for each candidate
//using an array variable count. In case, a number, read is outside the range 1 to 5,
//the ballot should be considered as a ‘spoilt ballot’ and the program should also
//count the number of spoilt ballots.

/*
int main()
{
    int candidatevotes[5];  
    int countspoiltballots = 0; 
    int i;
    for(i =0; i<5; i++)
    {
        candidatevotes[i] = 0;
    }
    
    for(i =0; i<5; i++)
    {  
        int n;
        printf("Enter the candidate number who you want to vote or press 0 to end the program: ");
        scanf("%d",&n);
        if(n == 0)
        break;
        if(n >=1 && n <=5)
        {
        candidatevotes[n-1]++;
        }
        if(n >5)
        {
            countspoiltballots++;
        }
    }

    printf("The votes of all candidates are listed below: \n");

    for(i =0; i <5; i++)
    {
        printf("The candidate %d has won %d votes\n",i+1,candidatevotes[i]); 
    }
    printf("%d number of spoilt ballots",countspoiltballots); 
    return 0;
}
*/


//74) Given are one dimensional arrays A and B which are sorted in ascending order.
//Write a program to merge them into a single sorted array C that contains every
//item form array A and B, in ascending order.

/*
int main()
{  
    int a, b, i, j;
    printf("Enter the index for array 1: ");
    scanf("%d",&a);

    printf("Enter the index for array 2: ");
    scanf("%d",&b);

    int arr1[a];
    int arr2[b];
    
    for(i =0; i <a; i++)
    {   printf("Enter number:");
        scanf("%d",&arr1[i]);
    }

    for(i =0; i <b; i++)
    {
        printf("Enter number: ");
        scanf("%d",&arr2[i]);
    }

    
    for(i =0; i <a; i ++)
    {
        for(j =i+1; j<a;j++ )
        {
            if(arr1[i] > arr1[j])
            {
                int t = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = t;
            }
        }
    }
	
    for(i =0; i <b; i ++)
    {
        for(j =i+1; j<b;j++ )
        {
            if(arr2[i] > arr2[j])
            {
                int t = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = t;
            }
        }
    }

    int arr3[a+b];

    for(i =0; i <a; i++)
    {
        arr3[i] = arr1[i];
    }
    for(i = a; i <a+b; i++)
    {
        arr3[i] = arr2[a+b-i-1];
    }
    
    for(i =0; i <a+b; i ++)
    {
        for(j =i+1; j<a+b;j++ )
        {
            if(arr3[i] > arr3[j])
            {
                int t = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = t;
            }
        }
    }

    for(i =0; i <a+b; i++)
    {
         printf("%d ",arr3[i]);
    }
}
*/


//75)The annual examination results of 10 students are tabulated as follows:
//Roll No. Subject1 Subject2 Subject3
//.____________________________________
//Write a program to read the data and determine the following:
//(a) Total marks obtained by each student.
//(b) The highest marks in each subject and the Roll No. of the student who
//secured it.
//(c) The student who obtained the highest total marks.

/*
int main()
{
    int students =10;
    int result[10][4];
    int i, j;
    for(i =0; i <students; i++)
    {
     printf("Enter the roll no. of student: ");
     scanf("%d",&result[i][0]); 

     printf("Enter marks of subject 1: ");
     scanf("%d",&result[i][1]);

     printf("Enter marks of subject 2: ");
     scanf("%d",&result[i][2]);

     printf("Enter marks of subject 3: ");
     scanf("%d",&result[i][3]);
     
    }
    printf("Roll No.\tSubject1\tSubject2\tSubject3");


    for(i =0; i <10; i++)
    {
        for(j =0; j <4; j++)
        {
            printf("%d\t\t",result[i][j]);
        }
        printf("\n");
    }
}
*/



