# include <stdio.h>

int main () {
    int n;
    printf("enter number : ");
    scanf("%d",&n);

    int i=1; // initialisation 
    while(i<=10) { // condition
        printf("%d\n",n*i); // print table
        i++; // update
    }
}