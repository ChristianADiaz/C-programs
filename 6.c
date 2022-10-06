#include <stdio.h>
#include <string.h>
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



int find_user(char *key, user_s users[], int num_users) {
    for (int i = 0; i < num_users; i++) {
        if (!strcmp(user_s[i]->name, key) {
            return i;
        }
    }
    return -1;
}
int main() {
    user_s users[] = {
        { 0, "Naomi" },
        { 1, "James" },
        { 2, "Alex" },
        { 3, "Amos" },
        { 4, "Bobbie" }
    };
    char key[MAX_LEN] = { 0 };
    fgets(key, MAX_LEN, stdin);
    trim(key);
    int found_idx = find_user(key, users, 5);
    if (found_idx == -1) {
        printf("User not found.\n");
    } else {
        printf("Found user at index %d\n", found_idx);
    }
    return 0;
}
