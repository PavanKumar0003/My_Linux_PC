#include<stdio.h>

#define SIZE 10

void push(int a[],int *);
void pop(int a[],int *);
void DisplayValues(int a[]);

int main()
{
    int arr[SIZE],select,index = -1;
   while(1)
   {
    printf("\t\t::::::::::Enter Stacking::::::::::\n");
    printf("\t\t1.Push\n");
    printf("\t\t2.Pop\n");
    printf("\t\t3.Exit\n");
    printf("Enter our choice:");
    scanf("%d",&select);

    switch(select)
    {
        case 1:
                push(arr,&index);
                printf("Pushed Value:%d\n",arr[index]);
                DisplayValues(arr);
                break;
        case 2:
                pop(arr,&index);
                printf("Popped Value:%d\n",arr[index+1]);
                DisplayValues(arr);
                break;
        case 3:
                goto Exit;
                break;
        default:
                break;
    }

  }
    Exit:printf("............Thank you............ \n");
        return 0;

}

void push(int a[],int *index)
{
    int n;
    if(*index == SIZE-1)
        printf("Stack if Full\n");
    else
    {
        printf("Enter Insert Value:");
        scanf("%d",&n);
        (*index)++;
        a[*index] = n;
    }

}

void pop(int a[],int *index)
{
    if(*index== -1)
        printf("Stack is Empty\n");
    else
        (*index)--;
}

void DisplayValues(int a[])
{
    for(int i=0;i<SIZE;i++)
    {
        printf("%d|",a[i]);
    }
    printf("\n");
}