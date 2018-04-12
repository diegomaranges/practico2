// singleton.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <mutex>

using namespace std;

class Singleton
{
public:
    static Singleton *getInstance(); //get operator

private:
    Singleton() {}
    static Singleton* instance;
    Singleton(const Singleton&) = delete;
    const Singleton& operator=(const Singleton&);
};

Singleton* Singleton::instance = 0;
Singleton* Singleton::getInstance()
{
    mutex mutex;
    mutex.lock();
    if (!instance) {
        instance = new Singleton();
        cout << "getInstance(): First instance\n";
    }
    else {
        cout << "getInstance(): previous instance\n";
    }
    mutex.unlock();
    return instance;
}

int main()
{
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();
    s1 = s2;
    s1->getInstance();
    system("pause");
    return 0;
}
