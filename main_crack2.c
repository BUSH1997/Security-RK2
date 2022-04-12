#include <stdio.h>
#include <stdlib.h>
int main() {
   char* name;
   scanf("%s", name);
   int v3 = 0;
   int v4;
   int v5 = 0;
   int v6;
   unsigned int v2 = 0;

   while(*name) {
     v4 = 8 * v2 + v3;
     v6 = (v4 - *name) ^ 0x28;
     v3 = v4 + 202;
     v5 = v6 + 101;
     v2 = *name++;
   }
   printf("%u-%u", abs(v5), abs(v3));
   return 0;
}
