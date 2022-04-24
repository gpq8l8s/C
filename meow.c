#include <stdio.h>

// 1.
// How to give a message or certain sounds three times in a row
int main(void)
{
  printf("meow\n");
  printf("meow\n");
  printf("meow\n");
}

// Or use WHILE loop
int maint(void)
{
  //since it's true, this loop will repeat forever
  while(true)
  {
  printf("meow\n");
  }
}

// To not make a loop repeats forever, give a certain command
int main(void)
{
int i = 0;
  while (i < 3)
  {
    printf("meow\n");
    i++;
  }
}

// Use FOR loop
// create variable within the loop will only be accessible within the loop
int main(void)
{
  for (int i = 0; i < 3; i++)
  {
    printf("meow\n");
  }
}

// Create function
void meow(void); //decalared the function
int main(void)
{
  for (int i = 0; i < 3; i++)
  {
    meow();
  }
}
//if meow function locates under the code,
//must declare the function with a propotype upper of the main function
void meow(void)
{
  printf("meow\n");
}

// Add arguments
void meow(int n); //to take in some input 'n' which will be integar
int main(void)
{
  meow(3);
}
void meow(int n)
{for (int i = 0; i < n; i++)
  {
    printf("meow\n");
  }
}