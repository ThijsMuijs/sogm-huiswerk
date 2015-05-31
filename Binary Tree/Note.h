
#ifndef __NOTE_
#define __NOTE_

#include <iostream>

using namespace std;

class Note
{
private:
    string note;
    int timeStamp;
    
public:
    //set note value and timestamp
    Note(string note, int timeStamp);
    //get timestamp
    int get_timeStamp();
    //print the note and timestamp
    void output();
    
    //make note objects work with operators < and >
    bool operator> (Note event);
    bool operator< (Note event);

};

#endif