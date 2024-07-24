#include <iostream>
#include <string>
#include <algorithm> // لاستخدام دالة reverse

int main() {
    std::string str = "Hello, World!";

    // عكس السلسلة النصية باستخدام دالة reverse من مكتبة algorithm
    std::reverse(str.begin(), str.end());

    std::cout << "Reversed String: " << str << std::endl;

    return 0;
}
