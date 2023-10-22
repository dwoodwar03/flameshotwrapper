#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int i;
    char cmdline[1000];

    strcpy(cmdline, "flameshot");

    for (i=1; i < argc; i++) {
        strcat(cmdline, " ");
        strcat(cmdline, argv[i]);
    }

    system(cmdline);
}
