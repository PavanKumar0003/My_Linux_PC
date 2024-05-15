#include<stdio.h>
#include<string.h>
//int fun(char (*fp)(char*,char*),char *s1,char *s2);
int stricmp(const char *s,const char *s1);
int main()
{
int n,c;
printf("enter size:");
scanf("%d",&n);
int i,j;
int x;
char t[100];
char s[n][200];
int (*fp[])(const char *,const char *)={strcmp,stricmp};
printf(" 1 :  sort with case sensitivity ,2 : sort without case sensitivity=");
scanf("%d",&c);
for(i=0;i<n;i++)
{
scanf("%s",s[i]);

// printf("%s",s[i]);
}
for(j=0;j<n-1;j++)
{
for(i=0;i<n-1;i++)
{
printf("After sorting:\n");
x=fp[c-1](s[i],s[i+1]);
if(x>0)
{
strcpy(t,s[i]);
strcpy(s[i],s[i+1]);
strcpy(s[i+1],t);
}
}
}
for(i=0;i<4;i++)
{
printf("%s\n",s[i]);
// printf("\n");
}
return 0;
}
int stricmp(const char *s,const char *s1)
{
int i,x;
char t1[100];
char t2[100];
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='A'&&s[i]<='Z')
{
t1[i]=s[i]+32;
}
t1[i]=s[i];
}
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]>='A'&&s1[i]<='Z')
{
t2[i]=s1[i]+32;
}
t2[i]=s1[i];
}
x=strcmp(t1,t2);
return x;

}