#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

int main (int argc, char **argv);
void exit_shell (char *user_input, size_t *input_size);
#endif
