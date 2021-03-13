#ifndef SET_H
#define SET_H
#include "node1.h"
class Set
{
public:
    node *linked_list = NULL;
    node *Head_ptr=NULL;
    node *prev_pointer= NULL;

    int Length=0;
	Set();
	~Set();
Set Union(Set set_one, Set set_two);
//intersection
Set Intersection(Set set_one, Set set_two);
//relative complement
Set Relative_Complement(Set set_one, Set set_two);
//insertion - if element is already in the set nothing happens
void Insertion(node::value_type insert);
//deletion- if its not in the set, nothing happens
void Deletion(node::value_type insert);
//querty to check wheather an element is in a set
//querty to find the number of elements in a set
void Querty(node::value_type insert);
//display the set
void Display();
//copy constructor
//Set();

};

#endif // SET_H
