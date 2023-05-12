#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Binary Tree structure */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree structure */
typedef struct binary_tree_s bst_t;

/* AVL Tree structure */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap structure */
typedef struct binary_tree_s heap_t;

/* Prototypes */
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

#endif /* _BINARY_TREES_H_ */
