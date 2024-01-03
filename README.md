# 0x1D. C - Binary Trees

## Table of Contents
- [What is a binary tree](#what-is-a-binary-tree)
- [What is the difference between a binary tree and a Binary Search Tree](#difference-between-binary-tree-and-binary-search-tree)
- [What is the possible gain in terms of time complexity compared to linked lists](#time-complexity-compared-to-linked-lists)
- [What are the depth, the height, the size of a binary tree](#depth-height-and-size-of-binary-tree)
- [What are the different traversal methods to go through a binary tree](#binary-tree-traversal-methods)
- [What is a complete, a full, a perfect, a balanced binary tree](#types-of-binary-trees)

---

## What is a binary tree

A binary tree is a hierarchical data structure composed of nodes, where each node has at most two children, referred to as the left child and the right child. It is a fundamental concept in computer science and forms the basis for various tree-based data structures and algorithms.

---

## What is the difference between a binary tree and a Binary Search Tree

A Binary Tree is a general tree structure where each node can have two children. In contrast, a Binary Search Tree (BST) is a specific type of binary tree with the additional property that the value of nodes in the left subtree is less than the node's value, and the value of nodes in the right subtree is greater. This property makes BSTs suitable for efficient searching and sorting operations.

---

## What is the possible gain in terms of time complexity compared to linked lists

Compared to linked lists, binary trees can offer significant time complexity advantages for specific operations. Searching, insertion, and deletion in a balanced Binary Search Tree (BST) have an average time complexity of O(log n), where n is the number of nodes. In contrast, linked lists have O(n) time complexity for these operations. The logarithmic time complexity of BSTs can result in faster operations for large datasets.

---

## What are the depth, the height, the size of a binary tree

- **Depth:** The depth of a node in a binary tree is the number of edges in the path from the root to that node.

- **Height:** The height of a binary tree is the maximum depth among all nodes. It represents the length of the longest path from the root to a leaf node.

- **Size:** The size of a binary tree is the total number of nodes in the tree.

---

## What are the different traversal methods to go through a binary tree

There are several common traversal methods for binary trees:
- **In-order:** Traverse the left subtree, visit the current node, and then traverse the right subtree. It yields nodes in ascending order in a Binary Search Tree.
- **Pre-order:** Visit the current node, traverse the left subtree, and then the right subtree.
- **Post-order:** Traverse the left subtree, the right subtree, and then visit the current node.
- **Level-order:** Visit nodes level by level, from the root to leaves, using a queue data structure.

---

## What is a complete, a full, a perfect, a balanced binary tree

- **Complete Binary Tree:** A binary tree in which all levels are completely filled, except possibly for the last level, which is filled from left to right.

- **Full Binary Tree:** A binary tree in which every node has either 0 or 2 children, but not 1.

- **Perfect Binary Tree:** A binary tree in which all internal nodes have exactly two children, and all leaf nodes are at the same level.

- **Balanced Binary Tree:** A binary tree in which the depth of the left and right subtrees of every node differ by at most one. Balancing ensures that tree operations remain efficient.

These different types of binary trees have specific characteristics and are used for various applications based on their properties.

## Author 🖊️:
* **AZZA MOHAMED** [AZZA](https://github.com/medazza)- ALX-Africa SE Student cohort 17
