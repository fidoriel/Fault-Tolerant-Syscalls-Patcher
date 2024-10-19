#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd = open("testfile.txt", O_CREAT | O_WRONLY, 0644);
    if (fd < 0) {
        return 1;
    }
    close(fd);  // This will trigger the my_close wrapper
    return 0;
}