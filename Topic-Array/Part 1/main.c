#include<stdio.h>
int main()
{
    int a[100],i,sum=0,n;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+ a[i];
    }

    printf("The sum is: %d",sum);
    printf("The average is:%.2f",(float)sum/n);

    getch();
}
