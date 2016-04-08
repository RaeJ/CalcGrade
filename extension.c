# CalcGrade
A short program in C that works out a persons grade based on their mark.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int grade(int mark, int total)
//Turns mark into a percentage
{
  float a=((float)mark/(float)total)*100;

//Converts percentage into grade
  if ((a>=90) && (a<=100))
  {
      printf("A*\n");
  }
  else if (a>=80)
  {
      printf("A\n");
  }
  else if (a>=70)
  {
      printf("B\n");
  }
  else if (a>=60)
  {
      printf("C\n");
  }
  else if (a>=50)
  {
      printf("D\n");
  }
  else if (a>=40)
  {
      printf("E\n");
  }
  else if (a<40)
  {
      printf("U\n");
  }
  else
  {
      printf("Unknown error\n");
  }
 return 0;
}

int main(int argc, char **argv)
//Checks that the mark has been inputted as an integer
{
    if (argc == 3) {
      char *value = argv[1];
      int x = atoi (value);
      char value1[20];
      sprintf(value1, "%d", x);

      if (strcmp(value1, argv[1])!=0)
      {
        printf("Input has been formatted incorrectly, please try again\n");
        return 0;
      }
//Checks that the total has been inputted as an integer
      value = argv[2];
      x = atoi (value);
      sprintf(value1, "%d", x);

      if (strcmp(value1, argv[2])!=0)
      {
        printf("Input has been formatted incorrectly, please try again\n");
        return 0;
      }

      int mark = atoi(argv[1]);
      int total = atoi(argv[2]);
//Prevents percentage from being over 100%
      if (total<mark)
      {
          printf("Numbers inputted incorrectly\n");
          return 0;
      }
      grade(mark, total);
    }
}
