#include <stdio.h>

void loop(int x, int y, int i) {
    if (i > y) {
        return;
    }

    if (y < x) {
        if (i==y) {
            printf("%d", i);
        } else {
            printf("%d ", i);
        }

        return loop(x, y, i+1);
    }

    if(i == x) {
        printf("%d\n", i);
        
    } else {
        printf("%d ", i);
    }

    return loop(x, y, i+1);
}

int main() {
    int x, y;

    scanf("%d%d", &x, &y);

    loop(x, y, 1);

    return 0;
}