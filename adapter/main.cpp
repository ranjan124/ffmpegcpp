#include <iostream>

extern "C" {
#include <libavdevice/avdevice.h>
#include <libavformat/avformat.h>
}

int main(int, char**) {
    std::cout << avdevice_version();
    std::cout << "Hello, world!\n";
}
