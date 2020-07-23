#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the sibling of a node.
 *
 * @node: Pointer to the root node of the tree to traverse.
 *
 * Return: n from uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left != NULL &&
		node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
