#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "func.h"

char **parse(char *cmd) {
    char *copy = calloc(strlen(cmd), sizeof(char));
    strcpy(copy, cmd);
    char **arr = calloc(10, sizeof(char *));
    for (int i = 0; copy; i++){
    	arr[i] = strsep(&copy, " ");
    }
    return arr;
}
