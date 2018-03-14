#include<stdio.h>
int main(){
 
    char s[100],t[100];
    int i=0,j=0;
    printf("Enter a string");
    gets(s);
	while(s[i]!='\0')
		i++;
	while(i>0){
 
		t[j]=s[--i];
		++j;
 
	}
	t[j]='\0';
	printf("the Reverse of a string is");
    for(i=0;t[i]!='\0';i++){
 
       if(t[i+1]==' ' || t[i+1]==NULL){
 
           for(j=i;j>=0 && t[j]!=' ';j--)
           		printf("%c",t[j]);
 
       		printf(" ");
	}
 
 
    }
    return 0;
}
