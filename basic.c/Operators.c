# include <stdio.h>

int main () {
    // 1.print Two digit number;
    // 2.print 1-> even, 0->odd;
    int x;
    printf("enter number : ");
    scanf("%d",&x);
    printf("%d\n", x > 9 && x < 100);  // relational and logic.. operator;
    printf("%d\n", x % 2 == 0); // arithmetic and rela.. operator
}