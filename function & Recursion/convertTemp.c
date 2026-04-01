# include <stdio.h>

float convertTemp(float calsius);
int main() {
float far = convertTemp(37); // far into calsius conversion
printf("far is %f\n",far);

}


float convertTemp(float calsius) {
    float far = calsius * (9.0/5.0) + 32;
    return far;
}