#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  string s = "HI!";
  // printf("%s\n", s);

//   //turns out that strings are arrays of characters
  printf("%i %i %i\n", s[0], s[1], s[2]);
}


//In c, we have null character or Null '\0' : a byte with all
//eight bits set to 0 to have a way of knowing where the string ends
int main(void)
{
  //string s takes 4 bytes
  string s = "HI!";
  //string t takes 5 bytes
  string t = "BYE!";
  printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}

//Determine the length of a string
int main(void)
{
  string name = get_string("Name: ");
  int i = O;
  while (name[i] != '\0')
  {
    i++;
  }
  printf("%i\n", i);
}


int string_length(string s);

int main(void)
{
  string name = get_string("Name: ");
  int length = string_length(name);
  printf("%i\n", length);
}

int string_length(string s)
{
  int i = 0;
  while(s[i] != '\0')
  {
    i++;
  }
  return i;
}


int main(void)
{
  string s = get_string("Input: ");
  printf("Output: ");
  for (int i = 0; i < strlen(s); i++)
  {
    printf("%c", s[i]);
  }
  printf("\n");
}

int main(void)
{
  string s = get_string("Before: ");
  printf("After: ");
  for (int i = 0, n = strlen(s); i < n; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      printf("%c", s[i] - 32);
    }
    else
    {
      printf("%c", s[i]);
    }
  }
  printf("\n");
}