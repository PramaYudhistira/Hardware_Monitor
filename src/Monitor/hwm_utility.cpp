#include <iostream>


int detect_os() {
    #ifdef _WIN32
        return 1;
    #elif __linux__
        return 0;
    #endif
}


int main() {
    std::cout<<"OS: "<<detect_os()<<std::endl;
}