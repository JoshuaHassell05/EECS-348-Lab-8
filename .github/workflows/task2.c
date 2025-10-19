#include <stdio.h>
int main(){
    int temp;
    char scale;
    char convert;
    printf("Enter the temperature vlaue: ");
    scanf("%d", &temp);
    printf("Enter the original scale (C, F, or K): ");
    scanf("%c", &scale);
    printf("Enter the scale to convert to (C, F, or K): ");
    scanf("%c", &convert);
    if (scale == "C" || scale == "F" || scale == "K" || convert == "C" || convert == "F" || convert == "K"){
        printf("Invalid Scale");
    }
    return 0;
}