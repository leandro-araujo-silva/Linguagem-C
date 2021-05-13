#include <stdio.h>

void loop(int x, int y, int z, int i) {
    if (i > y) {
        return;
    }

    if (i == x) {
        printf("%d\n", i);
    } else {
        printf("%d ", i);
    }

    return loop(x, y, z, i+z); 
}

int main() {
    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);

    loop(x, y, z, 1);

    return 0;
}