#include <stdio.h>

struct emp
{
    int eno;
    char ename[20];
    int sal;
};

int main()
{
    struct emp e1, e2, e3;
    
  
    printf("\nEnter eno=");
    scanf("%d", &e1.eno);
    fflush(stdin);
    printf("\nEnter ename=");
    scanf("%s", e1.ename);
    fflush(stdin);
    printf("\nEnter salary=");
    scanf("%d", &e1.sal);
    
    
    printf("\nEnter eno=");
    scanf("%d", &e2.eno);
    fflush(stdin);
    printf("\nEnter ename=");
    scanf("%s", e2.ename);
    fflush(stdin);
    printf("\nEnter salary=");
    scanf("%d", &e2.sal);
    
  
    printf("\nEnter eno=");
    scanf("%d", &e3.eno);
    fflush(stdin);
    printf("\nEnter ename=");
    scanf("%s", e3.ename);
    fflush(stdin);
    printf("\nEnter salary=");
    scanf("%d", &e3.sal);
    
    
    printf("\n%d\t%s\t%d", e1.eno, e1.ename, e1.sal);
    if (e1.sal > 1000)
    {
        printf("\tgood work");
    }
    
   
    printf("\n%d\t%s\t%d", e2.eno, e2.ename, e2.sal);
    if (e2.sal > 1000)
    {
        printf("\tgood work");
    }
    
    
    printf("\n%d\t%s\t%d", e3.eno, e3.ename, e3.sal);
    if (e3.sal > 1000)
    {
        printf("\tgood work");
    }
    
    return 0;
}