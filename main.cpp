#include <iostream>
#include <thread>

void hello() {
    std::cout << "Hello from thread! 2" << std::endl;
}

int main() {
    std::thread t(hello);
    t.join();
    return 0;
}