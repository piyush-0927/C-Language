# include <stdio.h>

 int sum(int n);
int main() {
    // sum of number and factorial
    int n;
    printf("enter number : ");
    scanf("%d",&n);

printf("sum is : %d\n",sum(n));

}

int sum(int n) {
    if(n == 1) {
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n; // fact * n;
    return sumN;
}

