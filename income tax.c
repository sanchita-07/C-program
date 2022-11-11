#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 void main()
  {
      int income;
      float tax;
      char p;
      system("cls");
      printf("Enter the income :");
      scanf("%d",&income);
      if (income<=150000)
      p = 'A';
      if(income>=150001 && income<=300000)
      p = 'B';
      if(income>=300000 && income<=500000)
      p = 'C';

      switch(p)
      {
      case 'A':
      printf("No tax");
      break;
      case 'B':
      tax = 0.1 * income;
      printf("Tax = %0.2f",tax);
      break;
      case 'C':
      tax = 0.2 * income;
      printf("Tax = %0.2f",tax);
      break;
      default :
      printf("Invalid Input!");
      break;
      }
    getch();
  }
