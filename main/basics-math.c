#include <stdio.h>

int mode, a, b, c, back;
char add[] = "Addition";
char sub[] = "Subtraction";
char quit[] = "Exit";
char enter = 0;

void myPause(void)
{
  printf("\n");
  fflush(stdin);
  fflush(stdout);
  getchar();
}

int main() {
  do
  {
    printf("Select a mode:\n1: %s\n2: %s\n0: %s\n", add, sub, quit);
    printf("------------------------------\n");
    scanf("%d", &mode);

    if (mode == 0)
    {
      printf("Exiting now...\n");
      
      return 0;
    }

    if (mode < 0 || mode > 2)
    {
      printf("Entered wrong number, mode not available.\nPlease select either 1 or 2!\n");
      return 0;
    }

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("Hello, World!\nWelcome to basic math!\n");
    printf("------------------------------\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);
    printf("\n");

    if (mode == 1)
    {
      c = a + b;
    }
    else if (mode == 2)
    {
      c = a - b;
    }

    printf("The sum of %d and %d is equal to %d \n", a, b, c);
    myPause();
  } while (mode != 3);
}