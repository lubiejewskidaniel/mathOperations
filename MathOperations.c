/* 

*/

#include <stdio.h>

int main(void) {
  char opt;

  
  do { // Beginning of do/while loop. All code below will be executed until while statement below
    
//Below is printed off menu for user and and reading of user's selection  
 printf("\n\n-------------------------------------------------------------------\nPlease enter the letter which corresponds with your choice: \n\na - Calculate the area of a square\nb - Convert centimetres to inches\nc - Display multiplication table for range of numbers between 3-8\nd - Find the maximum of 2 numbers\ny - Exit Program\n-------------------------------------------------------------------\n");
  scanf(" %c", &opt);
    
    if (opt == 'A' || opt == 'a'){ //Process of option 'a' from menu
      float a;
      //Information for user what this part of program will do 
      printf("\n\n\t\t\tThis program will help you to calculate area of your square!\n");

      //Asking user and awaiting answer about length of square in cm to convert to inches
      printf("\nEnter the length of the side in cm: ");
      scanf("%f", &a);

      printf("\n\t\t\tArea of you square is %.2f square centimetres", a*a);//Printing off answer with conversion
    }else if (opt == 'B' || opt == 'b'){//Process of option 'b' from menu
      const float inch = 0.3937007874;
      float num;
      //Information for user what this part of program will do 
      printf("\n\n\t\t\tThis program will help you to covert centimetres to inches!");
      
      printf("\n\n\nEnter in cm the length to convert into inches: ");
      scanf("%f", &num);
  
      printf("\n\n\t\t\t%.2f centimetres are equal to %.2f inches", num, num*inch);
    } else if (opt == 'C' || opt == 'c'){//Process of option 'c' from menu
      int a, i, j, l;
        //Information for user what this part of program will do 
        printf("\n\n\tThis program will show you Times Table for selected number from 3 to 8 on your wish\n\n");
        //Asking user and awaiting answer about number to show specify times Table on user's wish
        printf("\n\nEnter number in between 3 and 8 to see its Times Table up to 10: ");
        scanf("%d", &a);
      
        for (i=a; i<=a; i++) //1st for loop based on user selection incremented until reach selcted value
        {
          printf("\n\n\t\t\t\t\t Table for number %d \n", a);//Printing off for what selected number Times Table will be executed
          for(j=1;j<=10;j++) //2nd for loop will increment from 1 up to 10 to show all 10 results of multiplying
          {
            l=i*j;
            printf("\n\t\t\t\t\t\t%d x %d = %d", i, j, l); //Printing off each line of multiplying of selected number 
          }
        }
  
    } else if (opt == 'D' || opt == 'd'){//Process of option 'd' from menu
      int number1,number2;
      //Information for user what this part of program will do   
      printf("\t\tThis program will find maximum of two selected integer numbers.\n\n");
      //Asking user and awaiting answer for to integers to compare its maximum
      printf("Enter first number:\n");
      scanf("%d", &number1);
  
      printf("Enter first number:\n");
      scanf("%d", &number2);
  
      if (number1 > number2){//if statement to compare 1st number to 2nd
        printf("\n\n\t\t\t%d is maximum", number1); //printing result
       } else if (number2 > number1){//comparing 2nd number to 1st
        printf("\n\n\t\t\t%d is maximum", number2);//printing result
       } else if (number1 == number2){//comparing  both numbers if are equal
        printf("\n\n\t\t\tBoth numbers are equal");//printing result
       }
    } else if (opt == 'Y' || opt == 'y'){//Process of option 'y' from menu
      break;//Program ends
    } else if (opt != 'Y' || opt !='y' || opt != 'A' || opt != 'a' || opt != 'B' || opt != 'b' || opt != 'C' || opt != 'c' || opt != 'D' || opt != 'd'){// statements to follow - If chosen letter from menu is not a, b, c, d or y code below will be executed
      printf("Sorry, your input is invalid. Please enter either a, b, c or d");
    }
  } 
  //End of loop with conditions to meet. This is the end of the menu do/while loop and looping until 'y' from menu is selcted
  while (opt != 'Y' || opt !='y' || opt != 'A' || opt != 'a' || opt != 'B' || opt != 'b' || opt != 'C' || opt != 'c' || opt != 'D' || opt != 'd');
  

}