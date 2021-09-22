//
// Created by Roberto Cesetti  on 20/09/2021.
//

#ifndef ROBERTOCESETTI105114_UTILS_H
#define ROBERTOCESETTI105114_UTILS_H

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
 * @return an empty list.
 */
list_st *empty_list();

/**
 * Creates a list containing a given number of values.
 * @param nElements number of elements.
 * @return the list.
*/
list_st *create_list(int nelements);

/**
 * Calcolate the size of the list.
 *
 * @return the size of the list.
 */
int sizeof_list(list_st *list);

/**
 * Checks if the list is empty.
 * @param lst the pointer at the head of the list.
 * @return 1 if it's empty, 0 otherwise.
 */
int is_empty(list_st *lst);

/**
 * Adds a value on the list.
 *
 * @param lst the pointer at the head of the list.
 * @param value the value.
 * @return the list updated.
 */
list_st *add(list_st *lst, byte value);

/**
 * Remove a value on the list.
 *
 * @param lst the pointer at the head of the list
 * @param index index of the value to be removed.
 * @return the pointer at the head of the list.
 */
list_st *remove_value(list_st *lst, int index);

/**
 * Remove the first value of the list.
 *
 * @param lst the pointer at the head of the list.
 * @return the list updated.
 */
list_st *remove_head(list_st *lst);

/**
 * Returns the value of the list referred to the given index.
 *
 * @param lst tthe pointer at the head of the list.
 * @param index index of the value.
 * @return the value of the list referred to the given index.
 */
byte get(list_st *lst, int index);

/**
 * Checks if the list contains the given value.
 *
 * @param lst  the list.
 * @param value the value.
 * @return 1 if the list contains the value, 0 otherwise.
 */
int contains(list_st *lst, byte value);

/**
 * Add the value of the second list at the first list.
 *
 * @param first_list  the pointer at the head of the first list.
 * @param second_list the pointer at the head of the second list.
 * @return
 */
list_st *concat_list ( list_st *first_list,  list_st *second_list);

//TODO.CHECK

/**
 * Write to a file.
 *
 * @param data data to write to the file
 * @param file_name file to write to
 */
void file_write( list_st *data, const char *file_name);

//TODO.CHECK

/**
 * Calculate the module.
 *
 * @param val1 first value.
 * @param val2  second value.
 * @return the module between the first and the second value.
 */
int module(int val1, int val2);

/**
 * Calculate the absolute value.
 *
 * @param val
 * @return
 */
int absolute_value(int val);

//TODO.ELIMINARE
void list_print(list_st *l);

void array_print(byte *array, int size);

void matrix_print(byte **matrix, int size);

#endif //ROBERTOCESETTI105114_UTILS_H
