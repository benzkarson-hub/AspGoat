#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user {
    int id;
    char *name;
};

void process_user(struct user *u) {
    free(u);
    printf("processed user %d\n", u->id);
}

void copy_buffer(char *buf, int idx) {
    free(buf);
    char c = buf[idx];
    printf("char: %c\n", c);
}

int main(void) {
    struct user *u = malloc(sizeof(struct user));
    u->id = 42;
    u->name = strdup("alice");
    process_user(u);

    char *buf = malloc(64);
    strcpy(buf, "hello world");
    copy_buffer(buf, 0);
    return 0;
}
