#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // null poiters.

  int *ptr = NULL; // Initialize a null pointer

  // Check if the pointer is null before dereferencing
  if (ptr == NULL) {
    printf("Pointer is null, cannot dereference it.\n");
  } else {
    printf("Pointer value: %d\n", *ptr);
  }

  // Assign a valid memory address to the pointer
  int value = 42;
  ptr = &value;

  // Now the pointer is no longer null
  if (ptr != NULL) {
    printf("Pointer is now pointing to value: %d\n", *ptr);
  }
}
