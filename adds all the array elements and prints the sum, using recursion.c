//Program that adds all the array elements and prints the sum, using recursion

#include <stdio.h>

 int sumofarray(int a[],int n,int i)
 {
 	   if(i<n)
        return a[i]+sumofarray(a,n,++i);

        return 0;

 }
int main()
{
    int a[10],i,n,sum;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
  //Get Data
        printf("Enter elements %d : ",i+1);
        scanf("%d", &a[i]);
    }
//sum of the array
    sum=sumofarray(a,n,0);
     printf("sum of array is :%d",sum);


}
