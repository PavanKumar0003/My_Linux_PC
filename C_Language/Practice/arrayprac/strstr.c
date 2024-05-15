#include<stdio.h>
#include<string.h>
int mystrstr(char s1[],char s2[]);
int main()
{
	int a;
	char s1[100];
	char s2[20];
	printf("enter the string 1: ");
	scanf("%[^\n]s",s1);
	printf("enter the string 2: ");
	scanf(" %[^\n]s",s2);
	a=mystrstr(s1,s2);
	if(a==-1)
		printf("not matched\n");
	else
		printf("index of s1[%d]\n",a);
	return 0;
}

int mystrstr(char s1[],char s2[])
{
	int i,j,k,a,c=0;
	for(i=0;s2[i]!=0;i++)
	{
		c++;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		for(j=0;s1[j]!='\0';j++)
		{
			if(s2[i]==s1[j])
			{
				for(k=i+1,a=j+1;s2[k]!='\0';k++,a++)
				{
					if(s2[k]==s1[a])
					{
						if(s2[c-1]==s2[k])
						{
							return j;
						}
					}
				}
			}
		}
	return -1;
	}

}