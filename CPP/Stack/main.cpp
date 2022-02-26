#include <iostream>
#include "./Stack.h"

int main() {
    std::cout << "initializing stack of capacity 5\n";
    Stack stk(5);

    std::cout << "pushing five elements...";
    stk.push(32);
    stk.push(33);
    stk.push(34);
    stk.push(35);
    stk.push(36);

    std::cout << "exceeding five element limit...\n";
    stk.push(69);

    std::cout << "Popping last element = " << stk.peek() << std::endl;

    std::cout << "Exceeding popping limit...\n";
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();

    return 0;
}
