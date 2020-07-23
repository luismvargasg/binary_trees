#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 *
 * Return: leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 0;

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			leaves += 1;
		else
		{
			if (tree->left)
				leaves += binary_tree_leaves(tree->left);
			if (tree->right)
				leaves += binary_tree_leaves(tree->right);
		}
	}
	return (leaves);
}
