#include<stdio.h>
#include<conio.h>

                                                // QUESTION=09
                                                
int main()
{
    int a[2][2], b[2][2], c[2][2],i,j;
    int m1, m2, m3, m4, m5, m6, m7;

    printf("Enter 4 elements of matrix 1:");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter 4 elements of matrix 2:");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("First matrix elements are: \n");
    for(i=0; i<2; i++)
    {
        printf("\n");
        for(j=0; j<2; j++)
       printf("%d",a[i][j]); 
    }

    printf("\n Second matrix is: \n");
     for(i=0; i<2; i++)
    {
        printf("\n");
        for(j=0; j<2; j++)
       printf("%d",b[i][j]); 
    }

    m1 = (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
    m2 = (a[1][0] + a[1][1]) * b[0][0];
    m3 = a[0][0] * (b[0][1] - b[1][1]);
    m4 = a[1][1] * (b[1][0] - b[0][0]);
    m5 = (a[0][0] + a[0][1]) * b[1][1];
    m6 = (a[1][0] - a[0][0]) * (b[0][0] + b[0][1]);
    m7 = (a[0][1] - a[1][1]) * ( b[1][0] + b[1][1]);

    c[0][0] = m1+m4-m5+m7;
    c[0][1] = m3 + m6;
    c[1][0] = m2 +m4;
    c[1][1] = m1 +m3- m2 +m6;

    printf("\nStrassen's matrix is:");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
       printf("%d ", c[i][j]);
    }
    return 0;
}