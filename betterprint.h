#include <stdio.h>

void print_int(const void *ptr) {
    const int *x = ptr;
    printf("%d\n", *x);
}

void print_float(const void *ptr) {
    const float *x = ptr;
    printf("%f\n", *x);
}

void print_double(const void *ptr) {
    const double *x = ptr;
    printf("%lf\n", *x);
}

void print_char(const void *ptr) {
    const char *x = ptr;
    printf("%c\n", *x);
}

void print_string(const void *ptr) {
    const char *x = *(const char **)ptr;
    puts(x);
}

void print_int_array(const void *ptr, int size) {
    const int *x = ptr;
    printf("{");
    for (int i = 0; i < size-1; i++) {
        printf("%d,", x[i]);
    }
    printf("%d",x[size-1]);
    printf("}\n");
}

#define print(x, ...) _Generic((x), \
    int: print_int, \
    float: print_float, \
    double: print_double, \
    char: print_char, \
    char *: print_string, \
    int *: print_int_array \
)(&(x), ##__VA_ARGS__)
