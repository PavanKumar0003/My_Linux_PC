extern int netsalary;
int calculateNetSalary(int TotalSalary, int lops, int m, int y ){
    netsalary = TotalSalary - ((float)(lops * TotalSalary)) / NoOfDaysinMonth(m,y);
}