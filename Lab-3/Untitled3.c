#include <stdio.h>

int main() {
 int gb;
 printf("Enter your computer storage: ");
 scanf("%d",&gb);
 printf("%d GB is euqalto %d MB.\n",gb,gb*1024);
 printf("%d GB is euqalto %d KB.",gb,gb*1024*1024);
  return 0;
}

