#include <iostream>
#include <string>
int clubEntry(std::string word)
{
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == word[i + 1])
        {
            std::cout << word[i] << std::endl;
            std::cout << word[i] - 96 << std::endl;
            return (word[i] - 96) * 4;
        }
    }
    return 0;
}

int main()
{
    std::string word;
    std::cin >> word;
    std::cout << clubEntry(word) << std::endl;
}