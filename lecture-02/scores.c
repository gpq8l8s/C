#include <cs50.h>
#include <stdio.h>

//take the avarage of three variables
int main(void)
{
  int score1 = 72;
  int score2 = 73;
  int score3 = 33;
  printf("Average: %f\n", (score1 + score2 + score3)/3.0);
}

//We can refer to multiple variables with one name with another type called an array
int main(void)
{
  int scores[3];

  scores[0] = get_int("score: ");
  scores[1] = get_int("score: ");
  scores[2] = get_int("score: ");

  printf("Average: %f\n", (scores[0] + scores[1] + scores[2])/3.0);
}

//Let's say we want to print three characters
int main(void)
{
  char c1 = 'H';
  char c2 = 'I';
  char c3 = '!';
  printf("%c%c%c\n", c1, c2, c3);

  //what if we change it to print as an integer?
  printf("%i%i%i\n", c1, c2, c3);

  //we can convert chars to ints as well
  //byt when we conver a float to an int, we'll lose some information like
  //the value after the decimal point
  printf("%i %i %i\n", (int)c1, (int)c2, (int)c3); 
}