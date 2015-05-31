#include "Node.h"

Node::Node(Note* note)
{
    myNote = note;
    left = nullptr;
    right = nullptr;
    counter = 1;
} // Node()


void Node::insert(Note* newNote)
{
  if(*newNote > *myNote){ // operator overloading
    if(right) right->insert(newNote);
    else {
        //nieuwe tak R
      right = new Node(newNote);
    } // else
  }
  else
  if(*newNote < *myNote){
    if(left) left->insert(newNote);
    else {
        //nieuwe tak L
      left = new Node(newNote);
    } // else
  }
  else counter++;
} // insert()


void Node::output()
{
    if(left) left->output();
    myNote->output();
    cout << " counter: " << counter << endl;
    if(right) right->output();
} // print()

