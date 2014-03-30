#include "KeyManager.h"

KeyManager::KeyManager()
{

}

KeyManager::~KeyManager()
{

}

void KeyManager::addListener(string code, KeyListener *l)
{
    kl[code] = l;
}

bool KeyManager::addCode(int chCode, string name)
{
    keyCode[chCode] = name;
}

void KeyManager::keyDown(int key)
{
    if(keyCode.find(key) != keyCode.end())
        kl[keyCode[key]]->keyDown(keyCode[key]);
}

void KeyManager::keyUp(int key)
{
    if(keyCode.find(key) != keyCode.end())
        kl[keyCode[key]]->keyUp(keyCode[key]);
}
