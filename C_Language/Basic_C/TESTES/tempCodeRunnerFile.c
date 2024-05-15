
void mystrcmp(char s[],char k[]);
void mystrcpy(char d[],char s[]);
void mystrcat(char catd[],char cats[]);

int stcmp,stcmp2;

int main(){
	char s[]="Kernal";
  char k[]="l";	
	char d[]="Pavan", p[]="kumar";
	char catd[]="Sai",cats[]="Teja";

	mystrcmp(s,k);
	mystrcat(catd,cats);
	mystrcpy(d,p);
	return 0;
}


void mystrcmp(char s[],char k[]){
    int se=0,ke=0,i;
    for(i=0;s[i]!='\0';i++) se++;
    for(i=0;k[i]!='\0';i++) ke++;
    if(se==ke){
        for(i=0;s[i]!='\0';i++){
            if(s[i]<k[i]) stcmp=1;
            else if (s[i]>k[i]) stcmp= -1;
            else stcmp2=0;
        }
    }
    stcmp= -1;
}

void mystrcpy(char d[],char p[])
{
    int i = 0;
    while( p[i] != '\0'){
        d[i] = p[i];
        i++;
    }
		d[i] = '\0';
}

void mystrcat(char catd[],char cats[]){
    int se=0,de=0,i;
    for(i=0;cats[i]!='\0';i++) se++;
    for(i=0;catd[i]!='\0';i++) de++;
    for(i=0; i<=de; i++) catd[de+i]=cats[i];
}
