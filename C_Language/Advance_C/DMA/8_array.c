/*
8)  Write a function that takes two sorted integer arrays as input, and returns an array of integers
    from both arrays in sorted order, excluding duplicate numbers. 
    Assume that the input arrays are sorted.
eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20
output array3 : 9,10,12,13,14,15,16,19,20
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *sorted(int *,int *,int,int);


int main(){
    int *pn,*pm;
    int *str1,*str2,size1=3,size2=3;
    printf("Enter Size of arr 1:");
    scanf("%d",&size1);
    printf("Enter Size of arr 2:");
    scanf("%d",&size2);

    str1=(int *)malloc(size1*sizeof(int));
    str2=(int *)malloc(size2*sizeof(int));

    printf("Enter SubString1:");
    for(int i=0;i<size1;i++) scanf("%d",&str1[i]);
    printf("\nEnter SubString2:");
    for(int i=0;i<size2;i++) scanf("%d",&str2[i]);
    sorted(str1,str2,size1,size2);
    free(str1);
    free(str2);
    return 0;
}


void *sorted(int *str1,int *str2,int siz1,int siz2){
    int s1=0,s2=0,i,size=0,Totalsize=0,SubTot=0,temp2;
    char temp;
    for(i=0;i<siz1;i++) s1++;
    for(i=0;i<siz2;i++) s2++;
    Totalsize=s1+s2;
    SubTot=Totalsize;
    /*Adding arrays*/
    for(int i=0;i<(s1>s2?s1:s2);i++){
        *(str1+s1+i)=*(str2+i);
    }
    printf("After adding:");
    for(int i=0;i<Totalsize;i++){
        printf("%d,",*(str1+i));
    }
    /*Swaping*/
    for(int i=0;i<Totalsize-1;i++){
        for(int j=0;j<SubTot-1;j++){
            if(*(str1+j+1)<*(str1+j)){
                temp2=*(str1+j);
                *(str1+j)=*(str1+j+1);
                *(str1+j+1)=temp2;
            }
        }
        SubTot--;
    }
    printf("\nAfter sorting:");
    for(int i=0;i<Totalsize;i++){
        printf("%d,",*(str1+i));
    }
    int c=0;
    SubTot=Totalsize;
    /*Array Duplicat*/
    for(int i=0;i<Totalsize-1;i++){
        for(int j=0;j<SubTot-1;j++){
            if(*(str1+j)==*(str1+j+1)){
                *(str1+Totalsize)=*(str1+j+1);    //add to last index
                for(int k=0;k<Totalsize-1;k++){
                    *(str1+j+k)=*(str1+j+k+1);    //shifting elements to left side
                }
                c++;
                SubTot--;
            }
        }
    }
    printf("c=%d\n",c);
    //str1=(int*)realloc((int*)str1,c);
    printf("\nAfter Removing Duplicate:");
    for(int i=0;i<(Totalsize-1)-c;i++) printf("%d,",*(str1+i));  //(Totalsize-1)-c
}

/*
if 1 duplicate element is detected then reduce the array size for 1 element */
