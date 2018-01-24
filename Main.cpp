#include <iostream>

int main() {
    
    std::cout << "Hello, CI!" << std::endl;
    
    // C++14
    auto func = [count = 0]() mutable { std::cout << ++count << std::endl; };
    func(), func(), func();
    
    return 0;
    
}
