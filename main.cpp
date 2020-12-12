
#include <iostream>
#include "strack.hpp"

int main(int argc, const char * argv[]) {
    Stack<int> s;
    
    
    
    s.push(1);
    s.push(2);
    s.push(11);
    s.push(114);
    s.push(1);
    s.push(2);
    s.push(11);
    s.push(114);
    s.push(1);
    s.push(2);
    s.push(2);

    s.show();
    s.pop();
    s.show();
    return 0;
}
