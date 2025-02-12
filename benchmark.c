#include <stdio.h>
#include <stdlib.h>
#include <x86intrin.h> // for __rdtsc()

#define NUM_ALLOCS 8092
#define ALLOC_SIZE (1024 * 1024 * 128) // 128 MB

int main() {
    unsigned long long start, end, total_cycles;
    
    for (size_t i = 0; i < NUM_ALLOCS; i++)
    {
        start = __rdtsc();

        void *mem = malloc(ALLOC_SIZE);
        if (mem == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
        }
        end = __rdtsc();
        free(mem);
        
        total_cycles += (end - start);
    }

    printf("%llu\n", total_cycles / NUM_ALLOCS);

    return 0;
}