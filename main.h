#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>

int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
void _env(void);
int execute(char **args);
char *s_env(char *var);
char *search_path(char *command);
int main (int argc, char **argv);
void exit_shell (char *user_input);
void *_calloc(size_t nmemb, size_t size);
char **_token(char *str, char *sep);


extern char **environ;

#endif
