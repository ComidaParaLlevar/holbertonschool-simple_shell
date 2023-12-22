#ifndef _SIMPLE_SHELL_H
#define _SIMPLE_SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

int main (int argc, char **argv);
void exit_shell (char *user_input);
void tokenize_input(char* user_input, char** tokens, int* num_tokens);
#endif
