 #include<stdio.h>
 int main()
 {
    int no;
    asus:
    printf("\n enter number=");
    scanf("%d",& no);
    if(no>0){
        printf("the square is%d",no*no);
    }
    else{
        goto asus;
    }
 }