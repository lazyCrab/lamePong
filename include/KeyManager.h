#ifndef KEYMANAGER_H
#define KEYMANAGER_H

#include <map>
#include <string>
#include "KeyListener.h"

using namespace std;

class KeyManager
{
    public:
        KeyManager();
        virtual ~KeyManager();

        void addListener(string code, KeyListener *l);
        bool addCode(int chCode, string name);

        void keyDown(int key);
        void keyUp(int key);
    protected:
    private:
        map<string, KeyListener*> kl;
        map<int, string> keyCode;
};

#endif
