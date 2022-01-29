#include  "hash_tables.h"

/**
 * key_index - Write a function that gives you the index of a key.
 * @key: unsigned char
 * @size: unsigned long int
 * Return: index at which the key/value pair be stored in the array in a ht
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index = 0;

index = hash_djb2((unsigned char *)key);
return (index % size);
}
