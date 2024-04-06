#include "task.h"

int main(int argc, char ** argv)
{
    if (argc > 1)
    {
        std::string words ="";

        for (int i = 1; i < argc; i++)
        {
            words += words_to_save(argv[i]);
        }

        save("compilator.txt",words);

    }

    return EXIT_SUCCESS;
}