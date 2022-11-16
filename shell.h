#ifndef SHELL_H
#define SHELL_H

/* Header Files */
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

/* Function Prototypes */
int _strlen(char *s);
char *_strdup(char *str);
void print_env(char **ptr, int *ptr_err);
char **get_cmd(char *cmd_ptr);
int no_arg(char *str, char *delim);
void _execute(char **arr_cmd, char *ptr, char **env, int *ptr_num);
void free_arrcmd(char **arrCmd);
void arr_cmd_size(char ***ptrCmd, int argNum, char *str);
void parse_exec_free(char *cmd, char *ptr, char **env, int *ptr_num);
int _strcmp(char *s1, char *s2);
int _strcmp1(char *s1, char *s2);
char **get_path(char *cmd_ptr);
void arr_path_size(char ***ptrCmd, int argNum, char *str);
int no_arg_path(char *str, char *delim);
char *env_check(char **envPtr, char *cmd);
void path_arr(char **ptr_env, char ***arr);
void _execute_path(char *path, char **ar_cmd, char *ptr,
		char **env, int *ptr_num);
int check_newline(char *cmd, int *ptr);
int check_file_exe(char *str, char **ptr_array);
int check_file_exe1(char *str);
int _atoi(char *s);
int _isdigit(char c);
int exit_shell(char *cmd);
char *rmv_newline(char *s);
void exit_err(char *name, char *cmd, int *ptr_err);
void cmd_error(char *name, char *cmd, int *ptr_err);
void access_err(char *ptr, char *cmd);
int _putchar(char c);
void print_number(int num);
char *_memcpy(char *dest, char *src, unsigned int n);
int _setenv(char *cmd, int *ptr_err);
int _unsetenv(char *cmd, int *ptr_err);
char *_strcat(char *s1, char *s2);
char *_strcpy(char *s1, char *s2);
char **_get_env(char *s);
char **_copyenv(void);
void copy_env(char **ptr_env);
void print_arr(char **arr);
int builtin_check(char *cmd, char *str);
void arrange_env(char **ptr);
int builtin_func(char *cmd, int *ptr_err, char *prg);
void all_err(char *cmd, int status);

#endif /* SHELL_H */
