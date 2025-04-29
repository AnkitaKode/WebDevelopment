#include <stdio.h>

int hammingDist(char* str1, char* str2) {
    int i = 0, count = 0;
    while (str1[i] != '\0') {
        if (str1[i] != str2[i]) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char str1[] = "geekspractice";
    char str2[] = "nerdspractice";

    printf("The Hamming Distance is %d\n", hammingDist(str1, str2));
    return 0;
}
 