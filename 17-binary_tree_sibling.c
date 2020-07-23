#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node.
 *
 * @node: Pointer to the root node of the tree to traverse.
 *
 * Return: n from sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != NULL && node->parent->left->n != node->n)
		return (node->parent->left);
	else
		return (node->parent->right);
}
