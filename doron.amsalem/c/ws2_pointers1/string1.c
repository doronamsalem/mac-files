#include <stddef.h>  /*include size_t , sizeof*/
size_t StrLen (const char *s)
{
 size_t bytes = 0;
 int i;
 for ( i = 0; *(s + i) != '\0'; i++  )
 {
     bytes += sizeof(*(s + i));
 }
 return bytes;
}


int StrCmp(const char *s1, const char *s2)
{
 int diff = 0, i = 0;
 while ( !diff )
 {
   diff = (int)*(s1 + i) - (int)*(s2 + i);
   if ( *(s1 + i) == '\0' || *(s2 + i) == '\0' )
   {
     break;
   }
   ++i;
 }
 return diff;
}
