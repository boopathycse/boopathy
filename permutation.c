#include<stdio.h>
#include<string.h> 
 
void string_permutation(char *s, int j, int l)
{
      int i;
      if(j == l)
      {
            printf("%s\n", s);
      }
      else 
      {
            for(i = j; i <= l; i++)
            {
                  swapping((s + j), (s + i));
                  string_permutation(s, j + 1, l);
                  swapping((s+ j), (s + i));
            }
      }
}
 
void swapping(char *a, char *b)
{
      char temp;
      temp = *a;
      *a = *b;
      *b = temp;
}
 
int main()
{
      char s[20];
      int l;
      printf("\nEnter a String:\t");
      scanf("%s", s);
      l= strlen(s);
      printf("Permutations of String %s:\n", s); 
      string_permutation(s, 0, l - 1);
      getchar();
      return 0;
}
