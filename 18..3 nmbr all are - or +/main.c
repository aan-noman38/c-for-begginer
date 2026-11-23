
#include <stdio.h>

int main() {
    int x, y, z;


    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);


    if (x > 0 && y > 0 && z > 0) {
        printf("All numbers are positive.\n");
    }

    else if (x < 0 || y < 0 || z < 0) {
        printf("At least one number is negative.\n");
    }

    else {
        printf("None of the numbers are negative.\n");
    }

    return 0;
}
