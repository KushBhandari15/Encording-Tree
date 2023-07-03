#pragma once

class tree
{
private:
	// These two objects were overed in class:
	// 
	// The tree_array object is our dynamic array (looks a lot like a pointer doesnt it?)
	int* tree_array;
	// curr_array_size keeps track of the current size of the array (not the size of the tree)
	int curr_array_size=0;


	// This index will be used to track our current position within the tree
	// The code:  tree_array[index]  corresponds to the element of the tree indicated by the index
	int index=0;

	// resize is used to resize the array.  This was defined in class.
	// Note:  you do not need this if you chose to implement the tree using a vector instead
	void resize();


	// these private functions will need to be implemented by you for the assignment:
	//
	// get left/right index functions return the index in the tree_array of the left/right
	// child of the current node respecfully (current node being the one indicated by index variable)
	int get_left_index();
	int get_right_index();

	// get_parent returns the index of the parent of the node indicated by the current index
	// If the root is selected this should return -1
	int get_parent();

public:
	// these functions were covered in class (except get_size but thats just a basic getter)
	void print();
	int get_size();
	int depth();


	// These are the public functions you need to implement:
	// Hint:  make good use of the private class functions when implementing these
	//
	// get_value returns the value of the current index we are looking at
	int get_value();

	// left_null and right_null are used to check if the left (or right) child of the current
	// node (ie the one index is refering to) is null or not.  
	bool left_null();
	bool right_null();

	// go left/right are used to change the current node (pointed at by index) to be
	// either the left / right child of the current node. 
	void go_left();
	void go_right();

	// This function resets the current index value to point to the head of the tree
	void reset_to_head();

	// Insert function inserts elements into the binary search tree. Make sure to keep
	// the property that elements to the left are <= the parent and that nodes to the 
	// right are > than the parent node for all nodes in the tree (except nulls)
	void insert(int val);


	// Bonus:  The following function is for bonus points
	// remove is to remove the current index...  Note all of the children of the current index
	// need to be reinserted into the tree in order to maintain the desired properties 
	// of our BST
	void remove();


};