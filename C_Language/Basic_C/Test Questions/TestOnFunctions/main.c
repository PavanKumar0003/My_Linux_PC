   #include<stdio.h>
   int netsalary;
   int calculateNetSalary(int,int,int,int);
   int main(){
       int TotalSalary=0,lops=0,m=0,y=0;
       printf("Enter TotalSalary,lops,m,y:");
       scanf("%d,%d,%d,%d",&TotalSalary,&lops,&m,&y);
       if(m<=0 || y<=0 || TotalSalary<=0 || lops<=0){
         while(m>=0 || y>=0 || TotalSalary>=0 || lops>=0){
          printf("Sorry Enter Proper parameters:");
          scanf("%d,%d,%d,%d",&TotalSalary,&lops,&m,&y);
           if(m>=0 && y>=0 && TotalSalary>=0 && lops>=0) break;
        }
      }
      calculateNetSalary(TotalSalary,lops,m,y); //}
      printf("Net salary is:%d",netsalary);
      return 0;
 }