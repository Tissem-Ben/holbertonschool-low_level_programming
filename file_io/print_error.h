#ifndef PRINT_ERROR_H
#define PRINT_ERROR_H

#include <stdio.h>
#include <unistd.h>

/* Function prototypes */
void print_error(int exit_code, const char *msg, const char *arg);

#endif /* PRINT_ERROR_H */
