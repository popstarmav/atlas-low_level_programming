#ifndef MAIN_H
#define MAIN_H

int addNumbers(int a, int b);

void greetUser();

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

extern int globalVariable;

#define PI 3.14159

#endif /* MAIN_H */
