int NoOfDaysinMonth(int m,int y){
    switch (m){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: return days = 31; break;
    case 4:
    case 11:
    case 6:
    case 9: return days = 30; break;
    case 2: return isLeapYear(y); break;
    }return 0;
}

int isLeapYear(int y){
    if(y%100 !=0 && y%4==0 || y%400==0) return days = 29;
    else return days = 28; 
    return 0;
}