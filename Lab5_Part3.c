#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main()
{
  char input[256];
  int letterCount[26] = {0}; 

  printf("Enter text strings (press Enter on an empty line to exit):\n");

  while (1)
{
    fgets(input, sizeof(input), stdin); 

    if (strlen(input) == 1 && input[0] == '\n')
{
      break;
}

    for (int i = 0; input[i]; i++)
{
      if (isalpha(input[i]))
{
        char lowercaseChar = tolower(input[i]);
        letterCount[lowercaseChar - 'a']++;
}
}
}

  printf("Letter counts:\n");
  for (int i = 0; i < 26; i++)
{
    printf("%c: %d\n", 'a' + i, letterCount[i]);
}
  printf("yes");
  return 0;
}
