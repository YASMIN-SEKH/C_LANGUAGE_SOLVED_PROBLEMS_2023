#include <stdio.h>
#include <stdlib.h>

//Write a program to find the sum and average of different numbers which are accepted by
//user as many as user wants

int main()
{
    int n,num,sum=0,average;
    printf("enter number of terms you wanna calculate: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
        {
            printf("enter number: ");
            scanf("%d",&num);
            sum=sum+num;
            average=sum/n;
        }
        printf("sum is %d\n",sum);
        printf("average is %d",average);



    return 0;
}
