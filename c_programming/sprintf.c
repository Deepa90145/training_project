#include<stdio.h>
#include<string.h>


int main () {
  char mdy[12];
  char day [10];
  char datee [150];
  char log[150];
  int date,month,year;
  printf("Enter current  month (1-12) : ");
  scanf("%d",&month);
  printf("Enter date(1-31) : ");
  scanf("%d",&date);
  printf("Enter year: ");
  scanf("%d",&year);
  
  
  sprintf(mdy,"%d/%d/%d",month,date,year);
  printf("Date-month-year: %s\n", mdy);

  strcpy(log,"2018-01-08T13:01:41.423957-08:00Z abc50 hostapd: [ABCDEF] Client f8:2f:a8:d6:c8:91 Association");
  sscanf(log,"%s",datee);
  printf("Date is: %s\n",datee);


  sprintf(datee,"%s %d/%d/%d",log,date,month,year);
  printf("Date is :%s\n",datee);
  return(0);
}
