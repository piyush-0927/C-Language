# include <stdio.h>

int main () {
    int age;
    printf("enter number : ");
    scanf("%d",&age);

    // ternary operator only use single statement;
   age >= 18 ? printf("adult\n") : printf("not adult\n");
}