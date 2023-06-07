#include<stdio.h>
#include<conio.h>

int main()
{
  int a[10],b[10],c[10],d[50],index=0,i,n1,n2,n3;

 printf("Enter the size of an 1st array:");
  scanf("%d",&n1);

  printf("Enter the elements of 1st array:");
  for(i=0; i<n1; i++)
  {
    scanf("%d",&a[i]);
  }

  printf("Enter the size of an 2nd array:");
  scanf("%d",&n2);

  printf("Enter the elements of 2nd array:");
  for(i=0; i<n2; i++)
  {
    scanf("%d",&b[i]);
  }

  printf("Enter the size of an 3rd array:");
  scanf("%d",&n3);

  printf("Enter the elements of 3rd array:");
  for(i=0; i<n3; i++)
  {
    scanf("%d",&c[i]);
  }

  for(i=0; i<n1; i++)
    d[index++] =a[i];

  for(i=0; i<n2; i++)
  d[index++] = b[i];

  for(i=0; i<n3; i++)
    d[index++] =c[i];

  printf("After concatination (ABC): ");
  for(i=0; i<(n1+n2+n3); i++)
  printf("%d ",d[i]);
  return 0;
}


                            