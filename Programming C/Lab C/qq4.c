    #include<stdio.h>
    void main()
    {
    int num1=1,num2,total;
    while(num1<=10)

    {
        printf("Enter Number %d :",num1);
        scanf("%d",&num2);
        num1++;
        total=total+num2;
    }
    printf("\nTotal is :%d",total);

    return;
    }
