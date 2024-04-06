#include "countOccurrences.h"

int main(void)
{
    std::string path;
    char letter;

    std::cout << "Enter the path to the file and a letter" <<std::endl;
    std::cin >> path >> letter;

    std::cout << countOccurrences(path,letter) << std::endl;

    return EXIT_SUCCESS;
}