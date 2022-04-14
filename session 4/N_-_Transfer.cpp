#include<iostream>

int main(int argc, const char** argv) {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::max((c-(a - b)), 0) << std::endl;
    return 0;
}