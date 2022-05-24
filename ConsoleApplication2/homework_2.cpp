
#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    int a = 150;
    float b = 15.933;
    char c = '250';
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";
    int d = 15;
    std::string m = "Июля";
    int y = 2004;
    std::cout << "Моя дата рождения: " << d << " " << m << " " << y << " года" << "\n";
    const float f = 2.3;
    const std::string s = "WINDOWS";
    std::cout << f << " " << s << "\n";
}

