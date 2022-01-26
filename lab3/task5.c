#include <stdio.h>
#include <stdio.h>
#include <string.h>

int CmpString(const void* p1, const void* p2) {
    return strcmp(*(char**) p1, *(char**) p2);
}

int main() {
    char *arrStr[] = {"daa", "cbab", "bbbb", "bababa", "ccccc", "aaaa"};
    int arrStrLen = sizeof(arrStr) / sizeof(char *);
    qsort(arrStr, arrStrLen, sizeof(char *), CmpString);
    for (int i = 0; i < arrStrLen; i++) {
        printf("%s \n", arrStr[i]);
    }
}