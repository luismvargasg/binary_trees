# Binary trees

> This directory contains all the tasks of the project "0x1D. C - Binary trees" at [Holberton School](https://www.holbertonschool.com "Holberton School.")

![GitHub repo size](https://img.shields.io/github/repo-size/luismvargasg/binary_trees?style=for-the-badge) ![GitHub last commit](https://img.shields.io/github/last-commit/luismvargasg/binary_trees?style=for-the-badge) ![GitHub contributors](https://img.shields.io/github/contributors/luismvargasg/binary_trees?style=for-the-badge) [![Luis Miguel Vargas](https://img.shields.io/twitter/url?style=social&url=https%3A%2F%2Ftwitter.com%2Fluismvargasg1)](https://twitter.com/luismvargasg1) [![Carlos Murcia](https://img.shields.io/twitter/url?url=https%3A%2F%2Ftwitter.com%2Fcharliesoka)](https://twitter.com/charliesoka)

## Table of Contents

- [Binary trees](#binary-trees)
  - [Table of Contents](#table-of-contents)
  - [Project General Objectives](#project-general-objectives)
  - [Basic Project Description](#basic-project-description)
    - [Important Terms](#important-terms)
  - [Directory Files Description](#directory-files-description)
  - [Prerequisites](#prerequisites)
  - [Built With](#built-with)
  - [AUTHORS](#authors)
  - [License](#license)
  - [Acknowledgments](#acknowledgments)

## Project General Objectives

* What is a binary tree.
* What is the difference between a binary tree and a Binary Search Tree.
* What is the possible gain in terms of time complexity compared to linked lists.
* What are the depth, the height, the size of a binary tree.
* What are the different traversal methods to go through a binary tree.
* What is a complete, a full, a perfect, a balanced binary tree.

## Basic Project Description

In computer science, a binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child. A recursive definition using just set theory notions is that a (non-empty) binary tree is a tuple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set containing the root.

### Important Terms

Following are the important terms with respect to tree.

- **Path** − Path refers to the sequence of nodes along the edges of a tree.
- **Root** − The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.
- **Parent** − Any node except the root node has one edge upward to a node called parent.
- **Child** − The node below a given node connected by its edge downward is called its child node.
- **Leaf** − The node which does not have any child node is called the leaf node.
- **Subtree** − Subtree represents the descendants of a node.
- **Visiting** − Visiting refers to checking the value of a node when control is on the node.
- **Traversing** − Traversing means passing through nodes in a specific order.
- **Levels** − Level of a node represents the generation of a node. If the root node is at level 0, then its next child node is at level 1, its grandchild is at level 2, and so on.
- **keys** − Key represents a value of a node based on which a search operation is to be carried out for a node.

## Directory Files Description

| **File** | **Description** |
|----------|-----------------|
| [0. New node](./0-binary_tree_node.c) | Function that creates a binary tree node. |
| [1. Insert left](./1-binary_tree_insert_left.c) | Function that inserts a node as the left-child of another node. |
| [2. Insert right](./2-binary_tree_insert_right.c) | Function that inserts a node as the right-child of another node. |
| [3. Delete](./3-binary_tree_delete.c) | Function that deletes an entire binary tree. |
| [4. Is leaf](./4-binary_tree_is_leaf.c) | Function that checks if a node is a leaf. |
| [5. Is root](./5-binary_tree_is_root.c) | Function that checks if a given node is a root. |
| [6. Pre-order traversal](./6-binary_tree_preorder.c) | Function that goes through a binary tree using pre-order traversal. |
| [7. In-order traversal](./7-binary_tree_inorder.c) | Function that goes through a binary tree using in-order traversal. |
| [8. Post-order traversal](./8-binary_tree_postorder.c) | Function that goes through a binary tree using post-order traversal. |
| [9. Height](./9-binary_tree_height.c) | Function that measures the height of a binary tree. |
| [10. Depth](./10-binary_tree_depth.c) | Function that measures the depth of a node in a binary tree. |
| [11. Size](./11-binary_tree_size.c) | Function that measures the size of a binary tree. |
| [12. Leaves](./12-binary_tree_leaves.c) | Function that counts the leaves in a binary tree. |
| [13. Nodes](./13-binary_tree_nodes.c) | Function that counts the nodes with at least 1 child in a binary tree. |
| [14. Balance factor](./14-binary_tree_balance.c) | Function that measures the balance factor of a binary tree |
| [15. Is full](./15-binary_tree_is_full.c) | Function that checks if a binary tree is full.
| [16. Is perfect](./16-binary_tree_is_perfect.c) | Function that checks if a binary tree is perfect. |
| [17. Sibling](./17-binary_tree_sibling.c) | Function that finds the sibling of a node. |
| [18. Uncle](./18-binary_tree_uncle.c) | Function that finds the uncle of a node. |

## Prerequisites

This functions were made and tested using Ubuntu 14.04.3 LTS so we recommend you to test this functions under this condition.

## Built With

* Ubuntu 14.04.3 LTS Running on a Virtual Machine "Vagrant"
* GNU Emacs 24.3.1
* gcc 4.8.4 Compiled with the flags: `-Wall -Werror -Wextra -pedantic`

## AUTHORS

**Luis Miguel Vargas**

* [Github @luismvargasg](https://github.com/luismvargasg)
* [LinkedIn - Luis Miguel Vargas](https://www.linkedin.com/in/luismvargasg/)

**Carlos Andrés Murcia**

* [Github @Charliemur2](https://github.com/charliemur2)
* [LinkedIn - Carlos Andrés Murcia](https://www.linkedin.com/in/charlie-murcia-a6684536) 

## License

Opensource project.

## Acknowledgments

* Project made at Holberton School - Colombia.