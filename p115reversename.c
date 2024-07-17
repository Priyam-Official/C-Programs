 #include<stdio.h>
 # include<string.h>
 int main()
 {
    char ch;
    int i;
    char name[200];
    printf("\n enter name =");
    gets(name);
    printf("\n reverse name is =");
    for(i=strlen(name);i>=0;i--){
        ch=name[i];
        printf("%c",ch);
    }
    
 }