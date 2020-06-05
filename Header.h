#ifndef LL_STACK
#define LL_STACK

#include <list>

using namespace std;

template <class T>

class LLStack
{
private:
    list<T> lst;

public:
    LLStack()
    {
        cout << "INIT" << endl;
    }

    void clear()
    {
        lst.clear();
    }

    bool isEmpty()
    {
        return lst.empty();
    }

    // Returns the first element(node) in the list
    T &topEL()
    {
        lst.back();
    }

    T pop()
    {
        T el = lst.back();
        lst.pop_back(); // remove the last element
        return el;
    }

    void push(const T &el)
    {
        lst.push_back(el);
    }
};

#endif