#include <stdio.h>
int main() {
    int num1 = 5;
    int num2 = 10;
    int *ptr = &num1; // Pointer initially points to num1's address
    
    ptr = &num2; // Now the pointer points to num2's address
    
    printf("Value pointed to by ptr: %d\n", *ptr); // This will print 10
    printf("value of address of num1: %p\n", &num1);
    printf("value  of num1: %d\n", num1);
    printf("value of address of num2: %p\n", &num2);
    return 0;
}
