# C - Doubly linked lists

![img](https://static.javatpoint.com/ds/images/doubly-linked-list2.png)

## Description
Doubly linked list is a complex type of linked list in which a node contains a pointer to the previous as well as the next node in the sequence. Therefore, in a doubly linked list, a node consists of three parts: node data, pointer to the next node in sequence (next pointer) , pointer to the previous node (previous pointer). A sample node in a doubly linked list is shown in the figure.

## Resources
### Read or Watch:
- [What is a Doubly Linked List](https://www.youtube.com/watch?v=k0pjD12bzP0)
- [Langage C #20 - listes doublement chaînées](https://www.youtube.com/watch?v=589GpRJ6VFo)

## Headers
```c
#include<stdio.h>  
#include<stdlib.h> 
```

## Requirements
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`

-------------------------
## Tasks

### 0. Print list
Write a function that prints all the elements of a `dlistint_t` list.

- Prototype: `size_t print_dlistint(const dlistint_t *h);`
- Return: the number of nodes
- Format: see example
- File: `0-print_dlistint.c`

-------------------------
### 1. List length
Write a function that returns the number of elements in a linked `dlistint_t` list.

- Prototype: `size_t dlistint_len(const dlistint_t *h);`
- File: `1-dlistint_len.c`

-------------------------
### 2. Add node
Write a function that adds a new node at the beginning of a `dlistint_t` list.

- Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed
- File: `2-add_dnodeint.c`

-------------------------
### 3. Add node at the end
Write a function that adds a new node at the end of a `dlistint_t` list.

- Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed
- File: `3-add_dnodeint_end.c`

-------------------------
### 4. Free list
Write a function that frees a `dlistint_t` list.

- Prototype: `void free_dlistint(dlistint_t *head);`
- File: `4-free_dlistint.c`

-------------------------
### 5. Get node at index
Write a function that returns the nth node of a `dlistint_t` linked list.

- Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- where `index` is the index of the node, starting from `0`
- if the node does not exist, return `NULL`
- File: `5-get_dnodeint.c`

-------------------------
### 6. Sum list
Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

- Prototype: `int sum_dlistint(dlistint_t *head);`
- if the list is empty, return `0`
- File: `6-sum_dlistint.c`

-------------------------
### 7. Insert at index
Write a function that inserts a new node at a given position.

- Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
- where idx is the index of the list where the new node should be added. Index starts at `0`
- Returns: the address of the new node, or `NULL` if it failed
- if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`
Your files `2-add_dnodeint.c` and `3-add_dnodeint_end.c` will be compiled during the correction
- File: `7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c`

-------------------------
### 8. Delete at index
Write a function that deletes the node at index `index` of a `dlistint_t` linked list.

- Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- where index is the index of the node that should be deleted. Index starts at `0`
- Returns: `1` if it succeeded, `-1` if it failed
- File: `8-delete_dnodeint.c`