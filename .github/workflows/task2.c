#include <stdio.h>
int main(){
    double temp;
    double tempC;
    char scale;
    char convert;
    printf("Enter the temperature vlaue: ");
    scanf("%lf", &temp);
    printf("Enter the original scale (C, F, or K): ");
    scanf(" %c", &scale);
    printf("Enter the scale to convert to (C, F, or K): ");
    scanf(" %c", &convert);
    if (scale == 'C' || scale == 'c')
        tempC = temp;
    else if (scale == 'F' || scale == 'f')
        tempC = (temp - 32) * 5.0 / 9.0;
    else if (scale == 'K' || scale == 'k')
        tempC = temp - 273.15;
    else {
        printf("Invalid Scale\n");
        return 0;
    }
    return 0;
}