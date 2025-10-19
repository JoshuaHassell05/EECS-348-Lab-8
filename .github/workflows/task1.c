#include <stdio.h>
int main(){
    int score;
    while (1){
        printf("Enter the score to see all possible combinations of NFL scoring plays: ");
        scanf("%d", &score);
        if (score == 1){
            printf("Exiting...\n");
            break;
        }
        if (score < 0){
            printf("Invalid Score\n");
            continue;
        }
        for (int td2 = 0; td2 <= score / 8; td2++) {
            for (int td1 = 0; td1 <= score / 7; td1++) {
                for (int td = 0; td <= score / 6; td++) {
                    for (int fg = 0; fg <= score / 3; fg++) {
                        for (int safety = 0; safety <= score / 2; safety++) {
                            int total = td2 * 8 + td1 * 7 + td * 6 + fg * 3 + safety * 2;
                            if (total == score) {
                                printf("%d TD+2pt, %d TD+FG, %d TD, %d 3pt FG, %d Safety\n",
                                    td2, td1, td, fg, safety);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;

}