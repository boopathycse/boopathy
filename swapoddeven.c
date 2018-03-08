#include <stdio.h>
#include <string.h>
int main(){
     char s1[20],s2;
     int i,j;
     printf("\nEnter a string");
     scanf("%s",s1);
     printf("\n\nenter Strin%s",s1);
     for(i=0;i<strlen(s1);i=i+2){
     s2= s1[i];
     s1[i] = s1[i+1];
     s1[i+1] = s2;
     }
     printf("\nAfter Swap String%s",s1);
     return 0;
}
