#include<stdio.h>
#define SIZE 10

void Enqueue(int a[],int *,int *);
void Dequeue(int a[],int *,int *);
void DisplayValues(int a[],int *,int *);
void Depth(int a[],int *,int *);
void Peek(int a[],int *,int *);

int main()
{
    int arr[SIZE],Select=0;
    int R=-1,F=-1,i;
    while(1)
    {
        printf("\t\t::::::::::Enter Queue's::::::::::\n");
        printf("\t\t1.Enqueue\n");
        printf("\t\t2.Dequeue\n");
        printf("\t\t3.Peek\n");
        printf("\t\t4.Depth\n");
        printf("\t\t5.Exit\n");
        printf("Enter our choice:");
        scanf("%d",&Select);
        switch(Select)
        {
            case 1:
                    Enqueue(arr,&R,&F);
                    DisplayValues(arr,&R,&F);
                    break;
            case 2:
                    Dequeue(arr,&R,&F);
                    DisplayValues(arr,&R,&F);
                    break;
            case 3:
                    Peek(arr,&R,&F);
                    break;
            case 4:
                    Depth(arr,&R,&F);
                    break;
            case 5: goto Exit;
                    break;
        
            default:
                    break;
        }
    }
    Exit: printf("\n............Thank you............\n");
    return 0;
}


void Enqueue(int a[],int *R,int *F)
{
    int n;
    if(*R==SIZE-1)
            printf("Queue IS Full\n");
    else if(*R==-1 && *F== -1)
    {
        printf("Enter Element:");
        scanf("%d",&n);
        printf("N:%d\n",n);
        *R=0;
        *F=0;
        printf("R:%d, F:%d\n",*R,*F);
        a[*R]=n;
    }
    else 
    {
        printf("Enter Element:");
        scanf("%d",&n);
        printf("n:%d\n",n);
        (*R)++;
        printf("R:%d, F:%d\n",*R,*F);
        a[*R]=n;
        printf("a[R]:%d\n",a[*R]);
    }
}

void Dequeue(int a[],int *R,int *F)
{
    if(*R==-1 && *F==-1)
            printf("Queue IS Empty\n");
    else if(*R==*F)
    {
        *R=-1;
        *F=-1;
    }
    else
        (*F)++;
}

void DisplayValues(int a[],int *R,int *F)
{
    int i;
    for(i=*F;i<=*R;i++)
        printf("%d|",a[i]);
}


void Peek(int a[],int *R,int *F)
{
    printf("Peek:%d\n",a[*F]);
}

void Depth(int a[],int *R,int *F)
{
    printf("Depth:%d\n",a[*R]);
}