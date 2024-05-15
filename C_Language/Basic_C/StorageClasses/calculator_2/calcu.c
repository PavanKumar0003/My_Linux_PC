extern int a,b,result;
extern char c;
int calculator(){
    if(c=='+') return result = a+b;
    else if(c=='-') return result = a-b;
    else if(c=='*') return result = a*b;
    else if(c=='/') return result = a/b;
    else if(c=='%') return result = a%b;
}