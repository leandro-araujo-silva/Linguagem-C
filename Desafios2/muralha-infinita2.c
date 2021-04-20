#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x=0, y=0, n=0, sa=-1, moeda=0, sn=0;
    int num;
    char movimento;

    scanf("%d", &num);

    while (n < num) {
        scanf("%c", &movimento);

        movimento = getchar();

        n++;

        if (movimento == 'D') {

            x++;

            if (x > y) {

            sn = -1;

            } else if (x < y) {

                sn = 1;

            }

            if (sn != sa) {

                moeda++;

                sa = sn;

            }

        } else if (movimento == 'C') {

            y++;

            if (y > x) {

                sn = -1;

            } else if(y < x) {
                sn = 1;
            }

            if (sn != sa) {
                moeda++;
                sa = sn;
            }
        }
    }

    printf("%d", moeda);

    return 0;
}