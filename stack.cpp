#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Top element: " << s.top() << std::endl; // Output: Top element: 30



    std::cout << "Stack size: " << s.size() << std::endl; // Output: Stack size: 2

    if (s.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl; // Output: Stack is not empty.
    }

    return 0;
}
