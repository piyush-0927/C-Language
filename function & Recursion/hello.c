# include <stdio.h>

float convertTemp(float calsius);
int main() {
    float far = convertTemp(37);
    printf("%f\n",far);
   
    return 0;
}

float convertTemp(float calsius) {
     float far = calsius * (9.0/5.0) + 32;
     return far;
}