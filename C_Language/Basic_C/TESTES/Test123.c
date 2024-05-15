#include<stdio.h>
#include<string.h>

#define ALPHA(i)  (avt[i]>='A' && avt[i]<='Z')||(avt[i]>='a' && avt[i]<='z') || (avt[i]>='0' && avt[i]<='9')
void Strrev(char str[],int);
//void replace(char avt[],char serrpl[],char ser[]);
//int strFind(char avt[],char serrpl[]);
int main()
{
	char avt[100]="Cat is good pet",temp;
    char serrpl[10]="good";
    char ser[5]="camel";
	int i,size;
	int s=0,x=0;
	size=strlen(avt);
	Strrev(avt,size);
    printf("str=%s\n",avt);


	for(i=0;avt[i]!='\0';i++)
	{ 
        //printf("i=%d\n",i);
		if(ALPHA(i)){
            if(avt[i+1]==' '|| avt[i+1]=='\0'){
				x=i;
                //printf("x=%d\n",x);
				for(int j=x,k=s ; k<j ; j--,k++){
					temp=avt[k];
					avt[k]=avt[j];
					avt[j]=temp;
				}
				s=x+2;
			}
		}
	}
    printf("%s\n",avt);
    printf("pos:%d\n",strFind(avt,serrpl));
}

 int strFind(char avt[],char serrpl[]){
 	int i,cnt, ant;
     for(i=0,ant=0,cnt=0;avt[i]!='\0';i++){
        ant++;
         if((avt[i]==serrpl[0]) && (avt[i+1]==serrpl[1])){
            printf("\nant=%d",ant-1);
            cnt++;
         }
     }
     printf("\ncnt=%d",cnt);
    return ((ant-1)-cnt);
 }

void Strrev(char avt[],int size){
	char temp;
	int s=size-1;
	for(int i=0;i<size/2;i++){
		temp=avt[i];
		avt[i]=avt[s-i];
		avt[s-i]=temp;
	}
}