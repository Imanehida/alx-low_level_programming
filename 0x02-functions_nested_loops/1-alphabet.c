#include <stdio.h>
void print_alphabet(void);
int main() {
print_alphabet();
return 0;
}
void print_alphabet(void) {
char c;
for (c = 'a'; c <= 'z'; c++) {
printf(c);
}
printf('\n');
}

