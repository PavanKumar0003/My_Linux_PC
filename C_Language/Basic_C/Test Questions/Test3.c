#include<stdio.h>
int main(){
  int d,m,y;
  printf("Enter D-M-Y:");
  scanf("%d-%d-%d",&d,&m,&y);
  if(y>=1900 && y<=2200)
  {
      switch (m)
      {
      case 1: 
      case 3:
      case 5:
      case 8:
      case 12:if(d>=1 && d<=31) printf("Valid");
              else printf("Not valid");
              break;

      case 2: if(y%4==0 && y%100==0 && y%400==0){
                   if(d>=1 && d<=29) printf("Valid");
                   else printf("Not valid");
              }
              else {
                if(d>=1 && d<=28) printf("valid");
                else printf("Not valid");
              }
              break;
      case 4:
      case 6:
      case 7:
      case 9:
      case 10:
      case 11: if(d>=1 && d<=30) printf("Valid");
              else printf("Not valid"); 
              break;

      default: printf("Not valid");
               break;
      }
    else printf("Not valid");
  }
  else printf("Not valid");
  return 0;
}