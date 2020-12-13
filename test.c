#include <stdio.h>
#include <stdlib.h>

int main() {
  const char* message = "Привет, κόσμος!\n";
  if ((unsigned char)message[0] != 0xD0 && (unsigned char)message[1] != 0x9F)
    abort();
  printf(message);
}
