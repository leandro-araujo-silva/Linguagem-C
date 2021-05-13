#include <stdio.h>

void loop(int x, int y, int i) {
    if (i > y) {
        return;
    }

    if (i % x == 0) {
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