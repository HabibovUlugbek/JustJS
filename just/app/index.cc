#include "v8.h"

#include "./src/just.hpp"

int main(int argc, char *argv[])
{
    char *filename = argv[1];
    auto *just = new Capivara();
    std::unique_ptr<v8::Platform> platform =
        just->initializeV8(argc, argv);

    just->initializeVM();
    just->InitializeProgram(filename);
    just->Shutdown();

    return 0;
}