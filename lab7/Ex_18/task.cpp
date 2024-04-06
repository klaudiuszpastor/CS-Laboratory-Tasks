#include "task.h"

std::string words_to_save(std::string path)
{
    std::ifstream file;
    //Otwarcie pliku
    file.open(path);
    if(!file.is_open())
    {
        std::cout << "Failed to open the file" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::string words_20 = "";
    char k;
    while ((words_20.length() < 20) && (file>>k))
    {
        words_20.push_back(k);
    }

    //Sprawdzenie bledu odczytu
    if(!file.eof() && file.fail())
        std::cout << "Error occurred during reading the file" << std::endl;
    
    file.close();
    return words_20;
}

void save(std::string path, std::string words)
{
    std::ofstream file;
    file.open(path, std::ios_base::out | std::ios_base::trunc);
    if(!file.is_open())
    {
        std::cout << "Failed to open the file" << std::endl;
        exit(EXIT_FAILURE);
    }
    file << words;

    if(!file.eof() && file.fail())
        std::cout << "Error occurred during reading the file" << std::endl;
    
    file.close();
}

