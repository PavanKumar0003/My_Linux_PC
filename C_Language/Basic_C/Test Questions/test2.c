  #include <stdio.h>
   void foo(int **p);
    int main()
    {
        int i[10]={25,63,54,0,52,2};
        int *p;
        p=&i[0];
        printf("i=%d ",*p);
    }