/**
 * @file Dieses Modul realisiert einen binären Heap durch Arrays
 */

#ifndef _BINARY_HEAP_H
#define _BINARY_HEAP_N

#include <stdio.h>

/**
 * Boolscher Datentyp
 */
typedef enum
{
    FALSE,
    TRUE
}
BOOL;


/**
 * Struktur die einen Heap als Array repräsentiert.
 */
typedef struct
{
    void *root;
    int size;
}
binary_heap;


/**
 * Initialisiert den binären Heap. Das oberste Element ist immer das kleinste.
 *
 * @return Referenz zum Heap.
 */
extern binary_heap *heap_init (void);

/**
 * Löscht den binären Heap und gibt den Speicher frei.
 *
 * @param Referenz zum binären Heap.
 */
extern void heap_destroy (binary_heap *heap);

/**
 * Fügt ein Element in den Heap ein und hält die Heap Eigenschaften aufrecht.
 *
 * @param heap Referenz zum binären Heap.
 * @param element einzufügendes Element.
 */
extern void heap_insert (binary_heap *heap, char element);

/**
 * Gibt das kleinste Element zurück und hält die Heap Eigenschaft aufrecht.
 *
 * @param heap Referenz zum binären Heap.
 * @param min_element Adresse an der das Element geschrieben werden soll
 *
 * @return FALSE, genau dann wenn der Heap leer ist, sonst TRUE.
 */
extern BOOL heap_extract_min (binary_heap *heap, char *min_element);

/**
 * Gibt den Heap auf stdout in PreOrder aus.
 */
extern void heap_print (binary_heap *heap, FILE *out);

#endif
