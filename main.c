/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="asitha pradeep";
    int count,len;
    //gets(str);
    char *ptr=str;
    len=strlen(str);
    printf("%d\n",len);
  for(count=0;count<len;count++){
      if(*(ptr+count)!=' '){
     *(ptr+count)=*(ptr+count)-32;
     printf("%c",*(ptr+count));}
     else
     printf(" ");
  }
  return 0;
}
