#include "Node.h"

int main()
{
    Note note_1("c", 1);
    Note note_2("g", 4);
    Note note_3("e", 9);
    Note note_4("c", 9);
    Note note_5("a", 17);
    Note note_6("f", 32);
    Note note_7("c", 8);
    Note note_8("b", 9041);
    Note note_9("f", 2);
    Note note_10("c", 30);
    Note note_11("g", 31);
    Note note_12("e", 30);
    
    //first note in node's constructor
    Node node(&note_1);
    //rest as insert for binary tree
    node.insert(&note_2);
    node.insert(&note_3);
    node.insert(&note_4);
    node.insert(&note_5);
    node.insert(&note_6);
    node.insert(&note_7);
    node.insert(&note_8);
    node.insert(&note_9);
    node.insert(&note_10);
    node.insert(&note_11);
    node.insert(&note_12);
    
    node.output();

  return 0;
} // main()

