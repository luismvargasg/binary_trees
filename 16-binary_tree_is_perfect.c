#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_is_perfect - function that checks if a
 * binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 *
 * Return: 1 if is perfect or 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, power = 1, i;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	for (i = 0; i <= height; i++)
		power *= 2;
	if (size == (power - 1))
		return (1);
	return (0);
}

/**
 * binary_tree_height -  function that measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse.
 *
 * Return: height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right += 1 + binary_tree_height(tree->right);
	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_size - function that measures the size of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 *
 * Return: size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 1;

	if (tree == NULL)
		return (0);
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}

