#include <cstring>
#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (size_t c = 0; c < strlen(argv[i]); c++)
            {
                std::cout << static_cast<unsigned char>(std::toupper(argv[i][c]));
            }
        }
        std::cout << std::endl;
    }
    return 0;
}