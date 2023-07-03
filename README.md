# Encording-Tree
Explore the differences between these two methods of encoding trees. 

This assignment will explore the differences between these two methods of encoding trees. 

1. using pointers to node objects.  This implementation can be found here in these files:  Source-3.cpp Download Source-3.cpp 

2. using an array.  The beginning of the implementation can be found here tree.h Download tree.h tree.cpp Download tree.cpp 

A quick note about encoding trees using arrays for those who might not be coming to class.  We will be indexing our tree nodes in a Bredth-First pattern and we will be using -1 to denote unoccupied nodes.  See the following depiction of a tree as an example.  

The first task is as follows....

Finish the "tree.cpp" file I have provided.  See the "Tree.h" file and complete all the function I have defined.  Each function has comments in the .h file explaining what to do.  I will be testing your code with a predetermined set of test cases known only to me.  Note that you can add things to the .h file to help you do the work.  Just make sure to NOT delete anything or rename or change public/private permissions for anything I have placed in the .h file or it might not work.   If your code does not compile you will receive no credit for this portion.

The second task is as follows...

Create a program that randomly generates numbers to insert into your trees.   Write a report comparing the two methods of tree-encoding based on their ability to insert large amounts of data into the tree.  We will be comparing both time and space.

For N in the set { 1000, 10000, 100000, 1000000  } do the following...

Insert N random numbers into a tree for each encoding (one array tree and one pointer tree).  

Compare the time taken by each and discuss which might be a better choice for time constraints.  

Compare the space (in bytes) used be each encoding  (ie... the pointer encoded tree will use  (4+ pointer_size) * N bytes if our tree is storing integers).  To check the spaced used by the array you will need to look at ALL allocated memory (which we are keeping track of in the curr_array_size class variable)
