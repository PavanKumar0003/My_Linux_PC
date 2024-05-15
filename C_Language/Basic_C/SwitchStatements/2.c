#include<stdio.h>

int main()
{
    int d,m,y;
    printf("Enter d-m-y:");
    scanf("%d-%d-%d",&d,&m,&y);


    switch(m)  //switch(expression)
    {
        case 1: if(d%10==1) printf("%dst January %d",d,y);
                else if( d%10==2) printf("%dnd January %d",d,y);
                else if(d%10==3) printf("%drd January %d",d,y);
                else printf("%dth January %d",d,y);
                break;
        case 2: if(d%10==1) printf("%dst Febraury %d",d,y);
                else if( d%10==2) printf("%dnd Febraury %d",d ,y);
                else if(d%10==3) printf("%drd Febraury %d",d ,y);
                else printf("%dth Febraury %d",d ,y);
                break;
        case 3: if( d%10==1) printf("%dst March %d",d,y);
                else if( d%10==2) printf("%dnd March %d",d,y);
                else if(d%10==3) printf("%drd March %d",d,y);
                else printf("%dth March %d",d, y);
                break;
        case 4: if( d%10==1) printf("%dst April %d",d,y);
                else if( d%10==2) printf("%dnd April %d",d,y);
                else if(d%10==3) printf("%drd April %d",d,y);
                else printf("%dth April %d",d, y);
                break;
        case 5: if( d%10==1) printf("%dst May %d",d ,y);
                else if( d%10==2) printf("%dnd May %d",d ,y);
                else if(d%10==3) printf("%drd May %d",d,y);
                else printf("%dth May %d",d,y);
                break;
        case 6: if( d%10==1) printf("%dst June %d",d,y);
                else if( d%10==2) printf("%dnd June %d",d ,y);
                else if(d%10==3) printf("%drd June %d",d ,y);
                else printf("%dth June %d",d,y);
                break;
        case 7: if( d%10==1) printf("%dst July %d",d,y);
                else if( d%10==2) printf("%dnd July %d",d ,y);
                else if(d%10==3) printf("%drd July %d",d,y);
                else printf("%dth July %d",d, y);
                break;
        case 8: if( d%10==1) printf("%dst August %d",d,y);
                else if( d%10==2) printf("%dnd August %d",d ,y);
                else if(d%10==3) printf("%drd August %d",d ,y);
                else printf("%dth August %d",d, y);
                break;
        case 9: if( d%10==1) printf("%dst September %d",d,y);
                else if( d%10==2) printf("%dnd September %d",d,y);
                else if(d%10==3) printf("%drd September %d",d,y);
                else printf("%dth September %d",d, y);
                break;
        case 10: if( d%10==1) printf("%dst October %d",d, y);
                else if( d%10==2) printf("%dnd October %d",d, y);
                else if(d%10==3) printf("%drd October %d",d, y);
                else printf("%dth October %d",d,y);
                break;
        case 11: if( d%10==1) printf("%dst November %d",d,y);
                else if( d%10==2) printf("%dnd November %d",d ,y);
                else if(d%10==3) printf("%drd November %d",d ,y);
                else printf("%dth November %d",d,y);
                break;
        case 12: if( d%10==1) printf("%dst  december %d",d,y);
                else if( d%10==2) printf("%dnd  december %d",d ,y);
                else if(d%10==3) printf("%drd  december %d",d,y);
                else printf("%dth  ecember %d",d,y);
                break;
        default: printf("........."); break;
    }

    return 0;
}