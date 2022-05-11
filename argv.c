#include <cs50.h>
#include <stdio.h>

// int main(int argc, string argv[])
// {
//   // printf("hello, %s\n", argv[0]);
//   //if you print ./argv david, program returns
//   //hello, david
//   printf("hello, %s\n", argv[1]);
// }

//check that we have the right number of argument
// int main(int argc, string argv[])
// {
//   if (argc == 2)
//   {
//     printf("hello, %s\n", argv[1]);
//   }
//   else
//   {
//     printf("hello, world\n");
//   }
// }

//main function can also returns an integer value(EXIT status)
int main(int argc, string argv[])
{
  if (argc != 2)
  {
    printf("missing command-line argument\n");
    return 1;
  }
  printf("hello, %s\n", argv[1]);
  return 0;
}