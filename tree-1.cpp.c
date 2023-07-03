#include"tree.h"
#include<iostream>
#include<cmath>

using namespace std;

void tree::change()
{
	int new = 2 * current + 1;

	if (current == 0)
		new = 1;
	
	int* ntree = new int[new];
	for (int i = 0; i < new; i++)
		ntree[i] = -1;

	for (int i = 0; i < current; i++)
		ntree[i] = tree_array[i];


	delete tree_array;
	tree_array = ntree;
	curr_array_size = new;
	
}

void tree::print()
{
	for (int n = 0; n < current; n++)
		cout << tree_array[n] << endl;
}

int tree::depth()
{
	return log2(current) + 1;
}

int tree::get_size()
{
	return current;
}
 
int tree::get_left_index() 
{
	return (2 * index) + 1;
}
int tree::get_right_index()
{
	return(2 * index) + 2;
	
}
int tree::get_parent() 
{
	if (index == 0) 
    {
		return -1;
	}
	else if (index % 2 == 0) 
    {
		return (index - 2) / 2;

	}
	else 
    {
		return (index - 1) / 2;

	}
}
int tree::get_value() 
{
	return tree_array[index];
}
bool tree::left_null() 
{
	if (tree_array[get_left_index()] == -1) 
    {
		return true;
	}
	else 
    {
		return false;
			
	}
}
bool tree::right_null() 
{
	if (tree_array[get_right_index()] == -1) 
    {
		return true;
	}
	else 
    {
		return false;

	}
}
void tree::go_left() 
{
	index = get_left_index();
}
void tree::go_right() 
{
	index = get_right_index();
}
void tree::reset_to_head() 
{
	index = 0;
}
void tree::insert(int val) 
{
	int tmp = index;
	index = 0;
	if (index >= current) 	
    {
		change()}
	while (tree_array[index] != -1) 
    {
		if (tree_array[index] <= val) 
        {
			go_left();
		}
		else if (tree_array[index] >= val) 
        {
			go_right();
		}
		tree_array[index] = val;
		if (index >=current ) 
        {
			change();
		}

	}
	tree_array[index] = val;
	index = tmp;

}
