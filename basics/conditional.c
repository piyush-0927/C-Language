# include <stdio.h>

int main () {
    int age;
    printf("enter number : ");
    scanf("%d",&age);
    // if, else if, if, else 
    if(age < 13) {
        printf("child\n");
    } else if(age >= 13 && age < 18) {
        printf("Teenager\n");
    } else {
        printf("adult\n");
    }
    return 0;
}