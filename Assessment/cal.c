// calculator using function
#include<stdio.h>
int a,b;
int data() 
{
    int answer;
    int ch=0;
do{
    printf("\nenter your choice:");
    scanf("%d",&ch);

    printf("\nenter 1 no =");
    scanf("%d",&a);
    printf("enter 2 no =");
    scanf("%d",&b);

    switch(ch)
    {
        case 1:
        answer=a+b;
            printf("Addition is:%d \n",answer);
                break;
        case 2:
        answer=a-b;
            printf("Subtration is:%d \n",answer);
                break;
        case 3:
        answer=a*b;
            printf("Multiplication is:%d \n",answer);
                break;
        case 4:
        answer=a/b;
            printf("Division is:%d \n ",answer);
                break;
        case 5:
            return 0;
                break;
        default:
            printf(" \nenter valid choce:!!! \n");
                 break;
    }
   }   while (ch !=5);
}
int main()
{
    printf("\n ..........MENU.......... \n");   
    printf("\n1. Addition \n");  
    printf("2. Subtration \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Exit program \n");
    data();
}