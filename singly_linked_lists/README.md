# C - Singly linked lists

![img](https://media.geeksforgeeks.org/wp-content/uploads/20220816144425/LLdrawio.png)

## Description
Like arrays, Linked List is a linear data structure. Unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers. They include a series of connected nodes. Here, each node stores the data and the address of the next node.

## Header
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
```

## Requirements
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden

## More Info
### Data Structures
```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```

-------------------------
## Tasks

### 0. Print list
Write a function that prints all the elements of a `list_t` list.

- Prototype: `size_t print_list(const list_t *h);`
- Return: the number of nodes
- Format: see example
- If `str` is `NULL`, print `[0] (nil)`
- You are allowed to use `printf`
- File: `0-print_list.c`

-----------------------------
### 1. List length
Write a function that returns the number of elements in a linked `list_t` list.

- Prototype: `size_t list_len(const list_t *h);`
- File: `1-list_len.c`

-----------------------------
### 2. Add node
Write a function that adds a new node at the beginning of a `list_t` list.

- Prototype: `list_t *add_node(list_t **head, const char *str);`
- Return: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`
- File: `2-add_node.c`

-----------------------------
### 3. Add node at the end
Write a function that adds a new node at the end of a `list_t` list.

- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
- Return: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`
- File: `3-add_node_end.c`

-----------------------------
### 4. Free list
Write a function that frees a `list_t` list.

- Prototype: `void free_list(list_t *head);`
- File: `4-free_list.c`

-----------------------------
### 5. The Hare and the Tortoise
Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.

- You are allowed to use the `printf` function
- File: `100-first.c`