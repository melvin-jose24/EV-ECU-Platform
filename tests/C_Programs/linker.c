#include <stdint.h>

int initialized = 10;
int zero_initialized;
static int saved = 20;
const int limit = 100;

int main(void)
{
    int local = 5;
    static int calls = 0;

    calls++;
    return local + initialized + zero_initialized
           + saved + limit + calls;
}