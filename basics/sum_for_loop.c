# include <stdio.h>

int main() {
   int sum=0; // factorial=1;
   for(int i=5; i<=50; i++) {
       if(i % 2 != 0) { 
           continue; // skip the statement;
       }
       sum = sum + i; // sum += i; fact *= i;
     printf("%d\n",i);
   }
   printf("sum is : %d\n",sum);
}