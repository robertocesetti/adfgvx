//
// Created by Roberto Cesetti on 22/09/2021.
//

#ifndef ROBERTOCESETTI105114_LIST_H
#define ROBERTOCESETTI105114_LIST_H

typedef struct list_struct list_st;

typedef unsigned char byte;

/**
 * Data structure representing a list.
 */
struct list_struct {
    byte value;
    list_st *next;
};

/**
 * Creates an empty list.
 *
 * @return an empty list.
 */
list_st *empty_list();

/**
 * Creates a list containing a given number of values.
 *
 * @param nElements Number of elements.
 * @param list The list that had to be created.
 * @return The created list.
*/
list_st *create_list(list_st *list, int nelements);

/**
 * Calcolate the size of the list.
 *
 * @param list The pointer at the head of the list.
 * @return The size of the list.
 */
int sizeof_list(list_st *list);

/**
 * Checks if the list is empty.
 *
 * @param lst The pointer at the head of the list.
 * @return 1 if it's empty, 0 otherwise.
 */
int is_empty(list_st *lst);

/**
 * Adds a value on the list.
 *
 * @param lst The pointer at the head of the list.
 * @param value The value.
 * @return The list updated.
 */
list_st *add(list_st *lst, byte value);

/**
 * Remove a value from the list.
 *
 * @param list The pointer at the head of the list
 * @param index Index of the value to be removed.
 * @return The pointer at the head of the list.
 */
list_st *remove_value(list_st *list, int index);

/**
 * Remove the first value of the list.
 *
 * @param list The pointer at the head of the list.
 * @return The list updated.
 */
list_st *remove_head(list_st *list);

/**
 * Returns the value of the list referred to the given index.
 *
 * @param list The pointer at the head of the list.
 * @param index Index of the value.
 * @return The value of the list referred to the given index.
 */
byte get_value(list_st *list, int index);

/**
 * Get the index of given value of the list.
 *
 * @param list The pointer at the head of the list.
 * @param value The given value.
 * @return The index of the given value.
 */
int get_index(list_st *list, byte value);

/**
 * Checks if the list contains the given value.
 *
 * @param list  The pointer at the head of the list.
 * @param value The given value.
 * @return 1 if the list contains the value, 0 otherwise.
 */
int contains(list_st *list, byte value);

/**
 * Add the value of the second list at the first list.
 *
 * @param first_list  The pointer at the head of the first list.
 * @param second_list The pointer at the head of the second list.
 * @return The pointer at the head of the first list concatenated with the second.
 */
list_st *concat_list(list_st *first_list, list_st *second_list);

/**
 * Deallocate the list struct from memory.
 *
 * @param list the list struct to be deallocated.
 */
void dealloc_list_struct(list_st *list);

#endif //ROBERTOCESETTI105114_LIST_H
