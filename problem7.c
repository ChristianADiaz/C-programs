#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 64

typedef struct {
    int id;
    char name[MAX_LEN];
} user_s;

void trim(char *str) {
    int l = strlen(str);
    if (str[l-1] == '\n') {
        str[l-1] = 0;
    }
}

user_s parse_user(char *csv_line) {
    char *token = strtok(csv_line, ",");
    int attr_num = 0;
    user_s user = { 0 };

    while (token) {

        // Grab next token
        token = strtok(NULL, ",");
    }

    return user;
}

int main() {
    char csv_line[] = "0,naomi";
    user_s u = parse_user(csv_line);

    printf("ID: %d\nName: %s\n", u.id, u.name);

    return 0;
}
