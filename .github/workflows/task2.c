#include <stdio.h>
int main(){
    double temp;
    double tempC;
    char scale;
    char convert;
    double converted;
    printf("Enter the temperature value: ");
    scanf("%lf", &temp);
    printf("Enter the original scale (C, F, or K): ");
    scanf(" %c", &scale);
    printf("Enter the scale to convert to (C, F, or K): ");
    scanf(" %c", &convert);
    if (scale == 'C' || scale == 'c'){
        tempC = temp;
    }
    else if (scale == 'F' || scale == 'f'){
        tempC = (temp - 32) * 5.0 / 9.0;
    }
    else if (scale == 'K' || scale == 'k'){
        tempC = temp - 273.15;
    }
    else {
        printf("Invalid Scale\n");
        return 0;
    }
    if (convert == 'C' || convert == 'c'){
        converted = tempC;
    }
    else if (convert == 'F' || convert == 'f'){
        converted = tempC * 9.0 / 5.0 + 32;
    }
    else if (convert == 'K' || convert == 'k'){
        converted = tempC + 273.15;
    }
    else {
        printf("Invalid scale\n");
        return 0;
    }
    printf("Converted temperature: %.2f %c\n", converted, convert);
    printf("Temperature category: ");
    if (tempC < 0){
        printf("Freezing\nWeather advisory: Wear a coat!\n");
    }
    else if (tempC < 10){
        printf("Cold\nWeather advisory: Wear a jacket.\n");
    }
    else if (tempC < 25){
        printf("Comfortable\nWeather advisory: Nice weather.\n");
    }
    else if (tempC < 35){
        printf("Hot\nWeather advisory: Drink lots of water!\n");
    }
    else{
        printf("Extreme Heat\nWeather advisory: Stay indoors.\n");
    }
    return 0;
}