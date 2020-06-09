#include <stdio.h>

int main(void) {

    double temperaturaCel;

    scanf("%lf",&temperaturaCel);
    printf("%.1lf",temperaturaCel * 9.0 / 5.0 + 32.0);

    return 0;
}
