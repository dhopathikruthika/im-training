#include<stdio.h>
#include<conio.h>
int main()
{
    int arr1[50],arr2[50],size1,size2,i,j,merge[100];
    printf("Enter Array 1 Size: ");
    scanf("%d",&size1);
    printf("Enter Array 1 Elements: ");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
        merge[i]=arr1[i];
    }
    j=i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d",&size2);
    printf("Enter Array 2 Elements: ");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
        merge[j]=arr2[i];
        j++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0;i<j;i++)
    printf("%d",merge[i]);
    getch();
    return 0;
}
