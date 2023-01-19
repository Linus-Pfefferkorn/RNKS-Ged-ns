#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main() {
    char line[255];
    FILE* fp = fopen("data.txt", "r");
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
