#include <stdio.h>
#include <stdlib.h>
int main() {
   char* name;
   scanf("%s", name);
   char a;
   char b;
   int c;
   c = 5433333;
   while(*name) {
     a = *name;
     if (*name <= 109)
        b = (a ^ 0x61) - 32;
     else
        b = (a ^ 0x66) - 16;
     c += b;
     ++name;
   }
   printf("%d\n", c ^ 0x5E5EF);
   return 0;
}
