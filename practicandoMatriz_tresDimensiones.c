#include "stdio.h"

int m[2][3][4];
int A,B,C;
int limitador=1;

int main() {

    for ( A= 0; A<2; A++) {
      for ( B= 0; B<3 ; B++) {
        for ( C= 0; C<4 ; C++) {
          m[A][B][C]=limitador;
          limitador++;
       }
     }
   }

   for ( A= 0; A<2; A++) {
     for ( B= 0; B<3 ; B++) {
       for ( C= 0; C<4 ; C++) {
         printf("%6d", m[A][B][C] );
      }
  printf("\n");
    }
  printf("\n");
  }
  return 0;
}
