#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l1, l2, number;
    char cor;

    scanf("%d%d", &l1, &l2);

    for(int i = 0; i <= 3; i++) {
        scanf("%d%c", &number, &cor);

        cor = getchar();

        if (number == 1 && cor == 'R') {
            printf("1\n""6\n""11\n""16\n""21\n\n");
        } else if (number == 1 && cor == 'G') {
            printf("6\n""16\n\n");
        } else if (number == 1 && cor == 'B') {
            printf("1\n""11\n""21\n\n");
        }

        // 2
        else if (number == 2 && cor == 'G') {
            printf("2\n""12\n""22\n\n");
        } else if (number == 2 && cor == 'B') {
            printf("7\n""17\n\n");
        } else if (number == 2 && cor == 'R') {
            printf("2\n""7\n""12\n""17\n""22\n\n");
        }

        // 3
        else if (number == 3 && cor == 'G') {
            printf("8\n""18\n\n");
        } else if (number == 3 && cor == 'B') {
            printf("3\n""13\n""23\n\n");
        } else if (number == 3 && cor == 'R') {
            printf("3\n""8\n""13\n""18\n""23\n\n");
        }

        // 4 
        else if (number == 4 && cor == 'G') {
            printf("4\n""14\n""24\n\n");
        } else if (number == 4 && cor == 'B') {
            printf("9\n""19\n\n");
        } else if (number == 4 && cor == 'R') {
            printf("4\n""9\n""14\n""19\n""24\n\n");
        }

        // 5
        else if (number == 5 && cor == 'G') {
            printf("10\n""20\n\n");
        } else if (number == 5 && cor == 'B') {
            printf("5\n""15\n""25\n\n");
        } else if (number == 5 && cor == 'R') {
            printf("5\n""10\n""15\n""20\n""25\n\n");
        }

    }
    
    return 0;
    
}