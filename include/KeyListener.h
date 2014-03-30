#ifndef KEYLISTENER_H
#define KEYLISTENER_H

#include <string>

using namespace std;

class KeyListener
{
    public:
        KeyListener() {}
        virtual ~KeyListener() {}

        virtual void keyDown(string code) = 0;
        virtual void keyUp(string code) = 0;
};

#endif
