#include<stdio.h>
int main()
{
    int marksenglish,marksmaths,markshindi,total;

    printf("\nEnter marks of english=");
    scanf("%d",&marksenglish);

    printf("\nEnter marks of maths=");
    scanf("%d",&marksmaths);

    printf("\nEnter marks of hindi=");
    scanf("%d",&markshindi);

    total=marksenglish+marksmaths+markshindi;
    printf("the total amrks obtained are = %d",total);

    if(total>0 && total<50)
    {
        printf(" Grade C");
    }
    if(total>=50 && total<100)
    {
        printf("Grade B");
    }
    else 
    {
        printf("Grade A");
    }
   
    return 0;

}
