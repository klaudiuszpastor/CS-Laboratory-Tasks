#include "countOccurrences.h"

int countOccurrences(const std::string filename, char letter)
{
    std::ifstream file;
    // Otwarcie pliku
    file.open(filename, std::ios_base::in);

    if (!file.is_open())
    {
        std::cout << "Failed to open the file\n" << std::endl;
        exit(EXIT_FAILURE);
    }

    unsigned int count = 0;
    char l;

    //Wykonaj dopoki odczyt danych sie powiodl i nie napotkano EOF
    while (file >> l)
    {
        if (l == letter)
            count++;
    }

    // Sprawdzenie błędu odczytu
    if (!file.eof() && file.fail())
        std::cout << "Error occurred during reading the file" << std::endl;

    //
    
    // Zamkniecie pliku
    file.close();
    return count;
}