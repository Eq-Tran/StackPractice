#include <iostream>
#include <string>
#include "Header.h"

using namespace std;
class Weapon
{
public:
    int damage;
    string name;
};

int main()
{

    // Example One) Dot notation
    LLStack<int> intStack;
    intStack.push(3); // pushes 3 into the stack
    intStack.push(7); // 7 is now at the top of the stack

    int temp = intStack.pop(); // Pops 3 out of the stack
    cout << temp << endl;

    intStack.topEL();

    // Example 3) Arrow Notation
    // LLStack<int> *intStack = new LLStack<int>();
    // intStack->push(3);
    // intStack->push(7);
    // int temp = intStack->pop();
    // cout << temp << endl;

    // intStack->push(10);
    // intStack->push(30);

    // temp = intStack->pop();

    // cout << temp << endl;

    //Example Three) Using a Class
    //     LLStack<Weapon> *weaponStack;
    //     Weapon w1;
    //     w1.damage = 10;
    //     w1.name = "Sword";
    //     weaponStack->push(w1); // pushes our weapon object onto the stackl

    //     Weapon w2;
    //     w2.damage = 100;
    //     w2.name = "Shotgun";
    //     weaponStack->push(w2);

    //     cout << weaponStack->pop() << endl;

    return 0;
}