#include <stdio.h>
#include <float.h>

int main() {
    float epsilon_float = 1.0f;

    while ((float)(1.0f + epsilon_float / 2.0f) > 1.0f) {
        epsilon_float /= 2.0f;
    }

    double epsilon_double = 1.0;

    while (1.0 + epsilon_double / 2.0 > 1.0) {
        epsilon_double /= 2.0;
    }

    long double epsilon_long_double = 1.0L;

    while (1.0L + epsilon_long_double / 2.0L > 1.0L) {
        epsilon_long_double /= 2.0L;
    }

    printf("Epsilon maszynowy dla float: %e\n", epsilon_float);
    printf("Epsilon maszynowy dla double: %e\n", epsilon_double);
    printf("Epsilon maszynowy dla long double: %Le\n", epsilon_long_double);

    printf("\nWartości zdefiniowane w pliku float.h:\n");
    printf("FLT_EPSILON: %e\n", FLT_EPSILON);
    printf("DBL_EPSILON: %e\n", DBL_EPSILON);
    printf("LDBL_EPSILON: %Le\n", LDBL_EPSILON);

    return 0;
}
