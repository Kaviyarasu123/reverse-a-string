#include <stdio.h>
char * Reverse( char *string )
{
  char *x = string, *y = string, c;

  while(*y) 
  y++;
  

   if ( x < y )
     {
      for ( ;x < y--; x++)
        {

          c = *x;
          *x = *y;
          *y  = c;

        }
     }
return string;
}
int main( void ) 
 {

  char string[20];
  printf("enter a string :");

  scanf("%s",string);
  puts(Reverse( string ) );

 }
