
#ifndef __NODECLASS
#define __NODECLASS

#include "Note.h"

class Node
{
private:
    Note* myNote;
    Node* left;
    Node* right;
    long counter;
    
public:
    //give note object to node
    Node(Note* note);
    //insert a note to make a binary tree
    void insert(Note* newNote);
    //out the contents of the nodes (filled with notes!)
    void output();
};

#endif