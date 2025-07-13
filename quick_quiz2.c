#include <stdio.h>

// Function declarations (optional if defined before main)
void good_morning();
void good_evening();
void good_night();

// Function definitions
void good_morning() {
    printf("Good morning\n");
}

void good_evening() {
    printf("Good evening\n");
}

void good_night() {
    printf("Good night\n");
}

int main() {
    good_morning();  // ✅ function call
    good_evening();  // ✅ function call
    good_night();    // ✅ function call

    return 0;
}
