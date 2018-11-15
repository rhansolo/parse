#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "func.h"

int main() {
    char ** args = parse("ls -l -a");
    execvp(args[0], args);

    return 0;
}