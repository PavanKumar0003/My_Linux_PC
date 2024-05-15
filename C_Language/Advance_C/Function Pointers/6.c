/*
6) sorting a list of names received from the keyboard, with options using callback functions.
1: sort with case sensitivity (strcmp)
2: sort without case sensitivity (stricmp)
*/

#include<stdio.h>
#include<string.h>

int fun(int (*fp[])(const char*,const char*),char *s1,char *s2,int c);

int stricmp(const char *s,const char *s1);
int main(){
    int n,c;
    printf("enter size:");
    scanf("%d",&n);
    int i,j;
    int x;
    char t[100];
    char s[n][200];
    int (*fp[])(const char *,const char *)={strcmp,stricmp};

    printf(" Enter (1) for sort with case sensitivity (2) for sort without case sensitivity=");
    scanf("%d",&c);
    printf("Enter String:");
    for(i=0;i<n;i++) scanf("%s",s[i]);
    
    printf("\nAfter sorting:\n");
    for(j=0;j<n-1;j++){
        for(i=0;i<n-1;i++){
            x=fun(fp,s[i],s[i+1],c);
            if(x>0){
                strcpy(t,s[i]);
                strcpy(s[i],s[i+1]);
                strcpy(s[i+1],t);
            }
        }
    }
    for(i=0;i<4;i++) printf("%s\n",s[i]);
    return 0;
}

int stricmp(const char *s,const char *s1){
    int i,x;
    char t1[100];
    char t2[100];
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='A'&&s[i]<='Z') { t1[i]=s[i]+32; }
        else t1[i]=s[i];
    }
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]>='A'&&s1[i]<='Z') { t2[i]=s1[i]+32; }
        else t2[i]=s1[i];
    }

    x=strcmp(t1,t2);
    return x;
}

int fun(int (*fp[])(const char*,const char*),char *s1,char *s2,int c){
    int x;
    if(c==1){
        x=(fp[0])(s1,s2);
        return x;
    }
    if(c==2){
        x=(fp[1])(s1,s2);
        return x;
    }
}









// #include<stdio.h>
// #include<string.h>

// int main(){
//     char arr[4][20];
//     char temparr[100];
//     int x;
//     int (*cmp[])(const char*,const char *)={strcmp,strcmp};
//     //int (*icmp)(char*,char*)=stricmp;
//     for(int i=0;i<4;i++){
//         printf("Enter name%d:",i);
//         scanf("%s",arr[i]);
//     }

//     /*1.strcmp*/
//     for(int i=0;i<4-1;i++){
//         for(int j=0;j<4-1;j++){
//             x=cmp[0](arr[j],arr[j+1]);
//             if(x<0){
//                 strcpy(temparr,arr[j]);
//                 strcpy(arr[j],arr[j+1]);
//                 strcpy(arr[j+1],temparr);
//             }
//         }
//     }

//     /*2.strcmp*/

//     for(int i=0;i<4;i++){
//         printf("name%d=%s\n",i,arr[i]);
//     }
    
//     return 0;
// }
 