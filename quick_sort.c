#include<stdio.h>
#include<conio.h>

                                                // QUICK SORTING WHEN 1ST ELEMENT IS PIVOT - QUESTION -05

                                                
void quick_sort(int a[], int m, int n);

void main()
{
    int a[20],i,n;
   // clrscr();
    printf("Enter the size of an array:");
    scanf("%d",&n);

    printf("Enter the %d elements of an array:", n);
    for ( i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
         //code 
    }

    quick_sort(a,0,n);
    printf("The sorted array is:");
    for(i=0; i<n; i++)
    printf("%d ",a[i]);
  //  getch();
    
}

void quick_sort(int a[], int m, int n)
{
    int i,j,k,temp;
    i=m; j=n; k=a[m];
    while(i<j)
    {
        do
        {
            i++;
            // code 
        } while (a[i]<k);
        
        do
        {
            j--;
            // code /
        } while (a[j]>k && j>=0);
        
        if (i<j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j]= temp;
             //code /
        }

        else
        {
            temp = a[i];
            a[i] = a[m];
            a[m]= temp;
            quick_sort(a,m,j-1);
            quick_sort(a, j+1,n);
        }
        
    }
}

                                    //when lasst elemnet is pivort- QUESTION- 06

/*
void swap(int *a, int *b)
{
    int t =*a;
    *a = *b;
     *b = t;
}

int partition(int a[], int low, int high)
{
 int pivort = a[high];
 int i = (low -1);
 for (int  j = low; j <= high -1 ; j++)
 {
    if (a[j]<pivort)
    {
        i++;
        swap(&a[i], &a[j]);
        //code /
    }
    //code /
 }
 swap(&a[i+1], &a[high]);
 return (i+1);
}

void print_array(int a[], int size)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
        /* code /
    }
    
}

void quick_sort(int a[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        quick_sort(a, low, pi-1);
        quick_sort(a, pi+1, high);
        /* code /
    }
    
}

void main()
{
    int a[20],i,n,j;
    printf("Enter the size of an array:");
    scanf("%d",&n);

    printf("Enter the %d elements of an array:", n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
         //code 
    }

    quick_sort(a,0,n-1);
    print_array(a,n);
}
*/

      
