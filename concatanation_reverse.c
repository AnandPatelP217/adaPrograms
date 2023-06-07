#include<stdio.h>
#include<conio.h>
void main()
{
  int a[] ={1,2,3};
  int b[] ={4,5,6};
  int c[] ={7,8,9};
  int d[20],i,m,n,p,index =0 ;

  m=n=p=3;
  for(i=0; i<m; i++)
  {
    d[index] = a[i];
    index++;
  }

  for(i=0; i<n; i++)
  {
    d[index] = c[i] * c[i];
    index++;
  }

  for(i=p-1; i>=0; i--)
  {
    d[index] = b[i];
    index++;
  }

  printf("CONCATINATION OF ARRAY (A C^2 B^r): ");
  for(i=0; i<index; i++)
  {
    printf("%d ",d[i]);
  }

  getch();
}
