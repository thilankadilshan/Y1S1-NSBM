//Input 10 numbers and to output number of positive, number of negative, number of zeros.

#include<stdio.h>
void main()
{
    int x, num, posi=0,nega=0,zero=0;

    for (x=1;x<=10;x++)
    {
        printf("Enter Num %d : ",x);
        scanf("%d",&num);

        if(num>0)
        {
            posi++;
        }
        else if(num<0)
        {
            nega++;
        }
        else
        {
            zero++;
        }
    

    }

        printf("number of positives are :%d\n",posi);
        printf("number of negatives are :%d\n",nega);
        printf("number of zeros are :%d\n",zero);
    
return;
}