#include<stdio.h>
int main()
{
int i,j,count,temp,array[25];
printf("enter the numbers \n");
scanf("%d",&count);
printf("enter %d elements:",count);
for(i=0;i<count;i++)
scanf("%d",&array[i]);
{
for(i=0;i<count;i++)
{
temp=array[i];
for(j=i-1;j>=0&&temp<array[j];j--)
array[j+1]=array[j];
array[j+1]=temp;
}
}
printf("order of sorted elements: \n");
for(i=0;i<count;i++)
printf("%d\t",array[i]);
return 0;
}
