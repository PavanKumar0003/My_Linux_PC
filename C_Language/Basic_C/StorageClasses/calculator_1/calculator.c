extern int a,b;
extern char c;
int calculator(){
    if(c=='+') return a+b;
    else if(c=='-') return a-b;
    else if(c=='*') return a*b;
    else if(c=='/') return a/b;
    else if(c=='%') return a%b;
}