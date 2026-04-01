# include <stdio.h>

int main() {
    int n;
    do{
      printf("enter number : ");
      scanf("%d",&n);
      printf("%d\n",n);

      if(n % 2 != 0) {
          break;  // use for out block of code in any statement/nested loop
      }

    }while(1);

    printf("Thanks you!\n");
}