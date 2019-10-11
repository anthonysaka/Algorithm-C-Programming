#include <stdio.h>
#include <stdlib.h>

int n1,numeroAumento,numeroDismi,factorial=1;
int main() {

  printf("%s\n","Digite el numero: " );
  scanf("%d", &n1);

  /* for (numeroAumento=1;numeroAumento<=n1;numeroAumento++) {

        factorial=factorial*numeroAumento;
  }
system("cls");
  printf("\n%s %d\n","El factorial es:",factorial );*/

for (numeroDismi=n1;numeroDismi>=1;numeroDismi--) {

    factorial=factorial*numeroDismi;
}
system("cls");
  printf("\n%s %d\n","El factorial es:",factorial );


  return 0;
}
