#include<stdio.h>
void main()
{
    int a[]={54,456,46,45,567,68,453,6,5,757,7,45,6,756,7,75,67,77,567,34,21,89,3};
    int i,j,c=0;
    int n=sizeof (a)/sizeof (a[0]);
    for ( i = 1; i < n; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
            if (a[j]>a[j+1])
            {
            int t=a[j];
             a[j]=a[j+1];
             a[j+1]=t;
            }
            //c++;
        }
        
    }
    //printf("%d",c);
    printf("%d",n);
    printf("\n sorted array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    
}