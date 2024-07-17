#include<stdio.h>
int main()
{
int i, j,rows;
printf("\n Enter number of rows=");
scanf("%d",&rows);
for(i=rows;i>=1;i--)
{
for(j=rows;j>=i;j--)
{
printf("%d",i);
}
printf("\n");
}

return 0;
}

