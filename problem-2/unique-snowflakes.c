// DMOJ problem cco07p2
#include <stdio.h>

#define MAX_SNOWFLAKES 100000


void read_input(unsigned *n, unsigned s[][6]) {
    scanf("%u", n);

    for (unsigned i = 0; i < *n; i++) {
        for (unsigned j = 0; j < 6; j++) {
            scanf("%u", &s[i][j]);
        }
    }
}


void print_input(unsigned *n, unsigned s[][6]) {

    printf("# snowflakes: %d\n", *n);

    for (unsigned i = 0; i < *n; i++) {
        for (unsigned j = 0; j < 6; j++) {
            printf("%u ", s[i][j]);
        }
        printf("\n");
    }
}


int main() {
    unsigned num_snowflakes;
    unsigned snowflakes[MAX_SNOWFLAKES][6];

    read_input(&num_snowflakes, snowflakes);

    print_input(&num_snowflakes, snowflakes);
    
    return 0;
}
