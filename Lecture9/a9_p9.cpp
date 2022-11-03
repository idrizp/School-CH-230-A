/*
    CH-230-A
    a9_p9.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <iostream>

// Function to hide the vowels of a word.
std::string hide_vowels(std::string input)
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};
    for (unsigned int i = 0; i < input.length(); i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (input[i] == vowels[j])
            {
                input[i] = '_';
            }
        }
    }
    return input;
}

int main(int argc, char **argv)
{
    std::string words[] = {
        "computer", "keyboard", "laptop", "television", "mouse", "apple",
        "orange",   "cat",      "egg",    "pineapple",  "round", "train",
        "car",      "stop",     "block",  "jump",       "stamp"};

    // Initiate the random number generator's seed value.
    srand(static_cast<unsigned int>(time(0)));

    int tries = 1;

    // Get the random index.
    int element = rand() % 17;
    std::string word = words[element];
    std::string hidden = hide_vowels(word);

    while (true)
    {
        std::cout << hidden << std::endl;
        std::string input;

        std::cin >> input;
        // Check for when we want to quit.
        if (input == "quit")
        {
            std::cout << "Goodbye!" << std::endl;
            break;
        }

        // Check if the input matches.
        if (input == word)
        {
            std::cout << "Congratulations. You tried " << tries
                      << " times!" << std::endl;
            break;
        }

        // If not, alert, and increment the number of tries.
        std::cout << "That was wrong, unfortunately. Try again or type "
                     "\"quit\" to quit!"
                  << std::endl;
        tries++;
    }
    return 0;
}