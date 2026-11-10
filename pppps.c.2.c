#include <stdio.h>
int main()
{
int values[5];
printf("enter 5 integers:");
// taking input and storing it in a array
for(int i=0; i<5;++i)
{
scanf("%d",&values[i]);
}
printf("displaying integers:");
// printing elements of the array
for(int i=0; i<5; i++)
{
printf("%d\n", values[i]);
}
return 0;
}




