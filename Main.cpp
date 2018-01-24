#include <iostream>
#include <type_traits>

int main() {
    
    std::cout << "Hello, CI!" << std::endl;
    
    // C++14
    auto func = [count = 0]() mutable { std::cout << ++count << std::endl; };
    func(), func(), func();
    std::cout << std::make_unsigned_t<int>(-1) << std::endl;
    
    return 0;
    
}
