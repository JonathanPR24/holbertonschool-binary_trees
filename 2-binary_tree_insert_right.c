#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the
 *                            right-child of another node.
 *
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node,
 *         or NULL on failure or if parent is NULL.
 *         If parent already has a right-child, the
 *         new node must take its place,
 *         and the old right-child must be set as
 *         the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (!parent->right)
		parent->right = new_node;

	else
	{
		temp_node = parent->right;
		parent->right = new_node;
		new_node->right = temp_node;
		temp_node->parent = new_node;
	}

	return (new_node);
}
