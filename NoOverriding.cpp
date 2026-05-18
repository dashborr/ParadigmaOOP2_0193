#include <iostream>

using namespace std;

class baseclass{
    public:
     virtual void perkenalan(){
        cout << "hallo Saya function dari base class";

        }
};

class derivedclass : public baseclass{
    public:
     void perkenalan(){
        cout << "hallo Saya function dari derived class";

        }
};
