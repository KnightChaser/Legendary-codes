// Multiplying by using threads?!

#include <iostream>
#include <chrono>
#include <thread>

// Multiply two numbers, but inefficiently and funnily
int multiply(int a, int b) {
    int result = 0;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            std::this_thread::sleep_for(std::chrono::milliseconds(10)); // ?!?!
            result++;
        }
    }
    return result;
}

int main() {
    int num1 = 5;
    int num2 = 6;
    int result = multiply(num1, num2);
    std::cout << "Multiplying " << num1 << " and " << num2 << " yields " << result << std::endl;
    return 0;
}
