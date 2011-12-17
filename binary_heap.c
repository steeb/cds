#include <stdio.h>
#include <string.h>
#include <errno.h>
#include "binary_heap.h"


/* Größe des Speichers die auf einmal allociert wird */
#define ALLOCSIZE 5


/**
 * gibt den Baum rekursiv aus
 *
 * @param pos startposition von dem an der Baum ausgegeben werden soll
 * @param depth tiefe auf der man sich gerade befindet
 */
static void heap_print_reku (unsigned int pos, unsigned char depth, FILE *out);


extern binary_heap *heap_init (void)
{
    return malloc (sizeof (binary_heap));
}

extern void heap_destroy (binary_heap *heap)
{
    free (heap.root);
    free (heap);
    heap = NULL;
}

