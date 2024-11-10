
#include <string.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/time.h>

const int num_bytes = 256 * 1024 * 1024;

bool time_is_even() {
    struct timeval tv;
    gettimeofday(&tv, NULL);

    long milliseconds = tv.tv_sec * 1000 + tv.tv_usec / 1000;

    return (milliseconds % 2) == 0;
}

void busy_wait_for_even() {
    while (1)
        if (time_is_even()) 
            return;
}

void busy_wait_for_odd() {
    while (1)
        if (!time_is_even()) 
            return;
}

void* malloc_thread(void* vargp)
{
    printf("Thread Started\n");

    int *ptr = NULL;
    while (1) {
        busy_wait_for_even();
        free(ptr);
        ptr = malloc(num_bytes);
        memset(ptr, 0, num_bytes);
        printf("%p\n", ptr);
        if (ptr == NULL)
        {
            printf("Malloc Failed\n");
            exit(1);
        }
        busy_wait_for_odd();
    }
    return NULL;
}

int main()
{
    pthread_t thread_id;
    pthread_create(&thread_id, NULL, malloc_thread, NULL);

    int *ptr = NULL;
    while (1) {
        busy_wait_for_even();
        free(ptr);
        ptr = malloc(num_bytes);
        memset(ptr, 0, num_bytes);
        printf("%p\n", ptr);
        if (ptr == NULL)
        {
            printf("Malloc Failed\n");
            exit(1);
        }
        busy_wait_for_odd();
    }

    exit(0);
}