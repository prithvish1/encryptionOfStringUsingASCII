#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char str[100];
    int i=0;
    printf("********SECURITY ENCRYPTION********\n");
    printf("\nEnter the password : ");
    do
    {
        str[i]=getch();
        i++;
    }while(str[i-1]!='\r');
    str[i-1]='\0';
    if(strcmp(str,"dodgy254")==0)
    start();
    else
    printf("\nWrong password!!!\n\n\n");
}
void start()
{
    int n;
    printf("\n1) Enrypt\n2) Decrypt\n3) Exit\n");
    scanf("%d",&n);
    fflush(stdin);
    if(n==1)
    encrypt();
    else if(n==2)
    decrypt();
    else
    exit(0);
}
void encrypt()
{
    char str[100];
    int i,j,k;
    int num[100];
    printf("Enter the string : ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    num[i]=(int)str[i]+32;
    printf("Code is : ");
    for(j=0;j<i;j++)
    printf("%d ",num[j]);
    printf("5493");
    printf("\n\n\n");
    start();
}
void decrypt()
{
    char str[100],ch;
    int i=0,j,k,n;
    int num[100];
    printf("Enter the code : ");
    while(num[i-1]!=5493)
    {
    scanf("%d",&num[i]);
    i++;
    }
    i--;
    n=i;
    for(i=0;i<n;i++)
    {
    str[i]=num[i]-32;
    }
    for(j=0;j<n;j++)
    printf("%c",str[j]);
    printf("\n\n\n");
    start();
}
