#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

unsigned int binary_to_uint(const char *b) {
if (b == NULL) {
return 0;
}

size_t len = strlen(b);
if (len > (sizeof(unsigned int) * CHAR_BIT)) {
return 0;
}

unsigned int result = 0;
for (size_t i = 0; i < len; i++) {
if (b[i] != '0' && b[i] != '1') {
return 0;
result <<= 1;
result |= b[i] - '0';
}
return result;
}

int main() {
const char *binary = "1011";
unsigned int number = binary_to_uint(binary);
printf("The converted number is: %u\n", number);

return 0;
}
