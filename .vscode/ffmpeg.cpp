#include <stdio.h>
#include <stdlib.h>

int main() {
    // Run FFmpeg command to check functionality
    int result = system("ffmpeg -version");

    if (result == 0) {
        printf("FFmpeg is working properly.\n");
    } else {
        printf("FFmpeg is not installed or not accessible.\n");
    }

    return 0;
}
