# include <stdio.h>

void printHW(int count);
int main() {
 printHW(5);

}


void printHW(int count) {
    if(count == 0) {
        return;
    }
    printf("Hello!\n");
    printHW(count-1);
}