# include <stdio.h>

int main () {
    // only use for single condition
    int age;
    printf("enter number : ");
    scanf("%d", &age);

    age >= 18 ? printf("adult\n") : printf("not adult\n");
}