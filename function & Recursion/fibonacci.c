# include <stdio.h>

int fib(int n); 
int main () {
    // fib is sum of before two no. and fib start from 0;
    printf("fib is : %d\n",fib(6)); 
 
}


int fib(int n) {
    if(n == 0) {
        return 0;   // base case in recusion / similar infinite loop
    } 
    if(n == 1) {
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}