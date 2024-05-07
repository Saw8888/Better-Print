#include<betterprint.h>

int main() {
    int integerVar = 42;
    float floatVar = 3.14;
    double doubleVar = 2.71828;
    char charVar = 'A';
    char *str = "Hello";
    int arr[] = {1, 2, 3, 4, 5};

    print(integerVar);
    print(floatVar);
    print(doubleVar);
    print(charVar);
    print(str);
    print(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}
