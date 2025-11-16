#include <stdio.h>

int main() {
    int x, y;

    scanf("%d%d", &x, &y);
    
    int m, n, r, up, down, denominator, nominator,temp;
    temp = (x > y) ? 7 - x : 7 - y;

    up = temp;
    m = temp;
    n = 6;
    down = 6;

    while (n != 0) {
        r = n;
        n = m % n;
        m = r;
    }

    nominator = up / m;
    denominator = down / m;

    printf("%d/%d", nominator, denominator);

    return 0;
}
