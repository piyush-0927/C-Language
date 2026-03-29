# include <stdio.h>

int main () {
    int age;
    printf("enter number : ");
    scanf("%d",&age);
// use if else , if,if,if , else if, else if, else 
    if(age < 13) {
        printf("child\n")
    } else if(age >= 13 && age < 18) {
        printf("Teenager\n");
    } else {
        printf("adult\n");
    }

    // ternary operators
    age >= 18 ? printf("adult\n") : printf("not adult");
}