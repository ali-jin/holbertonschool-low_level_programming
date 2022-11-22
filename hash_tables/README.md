# C - Hash tables

![img](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d0/Hash_table_5_0_1_1_1_1_1_LL.svg/450px-Hash_table_5_0_1_1_1_1_1_LL.svg.png)

## Description
A Hash Table in C/C++ (Associative array) is a data structure that maps keys to values. This uses a hash function to compute indexes for a key.
Based on the Hash Table index, we can store the value at the appropriate location.
If two different keys get the same index, we need to use other data structures (buckets) to account for these collisions.

## Resources
### Read or Watch:
- [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
- [Hash function](https://en.wikipedia.org/wiki/Hash_function)
- [Hash table](https://en.wikipedia.org/wiki/Hash_table)

## Headers
```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
```

## Requirements
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- You are allowed to use the C standard library

## More Info
### Data Structures
```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;
```

-------------------------
## Tasks

### 0. >>> ht = {}
Write a function that creates a hash table.

- Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
 - where `size` is the size of the array
- Returns a pointer to the newly created hash table
- If something went wrong, your function should return `NULL`
- File: `0-hash_table_create.c`

-------------------------
### 1. djb2
Write a hash function implementing the djb2 algorithm.

- Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
- You are allowed to copy and paste the function from [this page](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)
- File: `1-djb2.c`

-------------------------
### 2. key -> index
Write a function that gives you the index of a key.

- Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
 - where `key` is the key
 - and `size` is the size of the array of the hash table
- This function should use the `hash_djb2` function that you wrote earlier
- Returns the index at which the key/value pair should be stored in the array of the hash table
- You will have to use this hash function for all the next tasks
- File: `2-key_index.c`

-------------------------
### 3. >>> ht['betty'] = 'cool'
Write a function that adds an element to the hash table.

- Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
 - Where `ht` is the hash table you want to add or update the key/value to
 - `key` is the key. `key` can not be an empty string
 - and `value` is the value associated with the key. `value` must be duplicated. `value` can be an empty string
- Returns: `1` if it succeeded, `0` otherwise
- In case of collision, add the new node at the beginning of the list
- File: `3-hash_table_set.c`

-------------------------
### 4. >>> ht['betty']
Write a function that retrieves a value associated with a key.

- Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
 - where `ht` is the hash table you want to look into
 - and `key` is the key you are looking for
- Returns the value associated with the element, or `NULL` if `key` couldn’t be found
- File: `4-hash_table_get.c`

-------------------------
### 5. >>> print(ht)
Write a function that prints a hash table.

- Prototype: `void hash_table_print(const hash_table_t *ht);`
 - where `ht` is the hash table
- You should print the key/value in the order that they appear in the array of hash table
 - Order: array, list
- Format: see example
- If `ht` is NULL, don’t print anything
- File: `5-hash_table_print.c`

-------------------------
### 6. >>> del ht
Write a function that deletes a hash table.

- Prototype: `void hash_table_delete(hash_table_t *ht);`
 - where `ht` is the hash table
- File: `6-hash_table_delete.c`