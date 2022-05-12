#include <cs50.h>
#include <stdio.h>

// 1.
int main(void)
{
  int x = get_int("x: ");
  int y = get_int("y: ");
  printf("%i\n", x+y);
}

// Use third variable
int main(void) 
{
  int x = get_int("x: ");
  int y = get_int("y: ");
  int z = x+y;
  printf("%i\n", z);
}

//Answer is '-294967296' if x is 2000000000, y is 2000000000
//Use long to get the result approximate to 4000000000 but technically it's not possible to get exact number
//but by using LONG we would get a results with more bits
long x = get_long("x: ");
long y = get_long("y: ");
printf("%li\n", x+y);

// 2.
// Conditionals, boolean espressions
int main(void)
{
  int x = get_int("x: ");
  int y = get_int("y: ");

  if (x < y)
  {
    printf("x is less than y\n");
  }
  else if (x > y)
  {
    printf("x is greater than y\n");
  }
  else
  {
    printf("x is equal to y\n");
  }
}

// Use magical number
int main(void)
{
  const int MINE = 2;
  int points = get_int("How many points did you lose? ");

  if (points < MINE)
  {
    printf("You lost fewer points than me.\n");
  }
  else if (points > MINE)
  {
    printf("You lost more points than me.\n");
  }
  else 
  {
    printf("You lost the same number of points as me.\n");
  }
}

// Give a message by user answer
int main(void)
{
  //Prompt user to agree
  char c = get_char("Do you agree? ");
  //check whether agreed
  if( c == 'Y' || c == 'y')
  {
    printf("Agreed.\n");
  }
  else if ( c == 'N' || c == 'n')
  {
    printf("Not agreed.\n");
  }
}