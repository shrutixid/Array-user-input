#include<stdio.h>
void main()
{
 printf("The following program is to create an linear array of size and value input by user\n\n\n");
 int num;
 printf("Enter the size of the array :-\n");
 scanf("%d",&num);
 int arr[num];
 printf("Enter the values in the array:-\n");
 for(int i=0;i<num;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("The array provided will be :-\n\n");
 for(int i=0;i<num;i++)
 {
  printf("%d\t",arr[i]);
 }
}
