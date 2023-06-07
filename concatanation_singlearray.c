#include<stdio.h>
#include<conio.h>

                                    int main()
{
  int a[10], b[10], c[30],n,m,i, index=0;
  printf("Enter the size of an 1st array:");
  scanf("%d",&n);

  printf("Enter the elements of 1st array:");
  for(i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }

  printf("Enter the size of an 2nd array:");
  scanf("%d",&m);

  printf("Enter the elements oa an 2nd array:");
  for(i=0; i<m ;i++)
  {
    scanf("%d",&b[i]);
  }

  for(i=0; i<n; i++)
    c[index++] =a[i];

  for(i=0; i<m; i++)
  c[index++] = b[i];

  printf("After concatanation array will become:");
  for(i=0; i<(n+m); i++)
  printf("%d ",c[i]);  
  
  return 0;
}
