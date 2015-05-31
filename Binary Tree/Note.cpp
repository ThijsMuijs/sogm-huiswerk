#include "Note.h"

Note::Note(string note, int timeStamp)
{
    this->note = note;
    this->timeStamp = timeStamp;
}

int Note::get_timeStamp()
{
    return timeStamp;
}

void Note::output()
{
    cout << "Note: " << note;
    cout << " TimeStamp: " << timeStamp;
}

bool Note::operator> (Note event)
{
    return this->get_timeStamp() > event.get_timeStamp();
}

bool Note::operator< (Note event)
{
    return this->get_timeStamp() < event.get_timeStamp();
}



