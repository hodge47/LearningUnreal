#include <iostream>

void PrintIntroduction(int Difficulty)
{
    // Print welcome messages to the terminal
    std::cout << "You are a secret agent breaking into a level " << Difficulty << " secure server room..." << std::endl;
    std::cout << "Enter the correct code to continue..." << std::endl;
}

bool PlayGame(int Difficulty)
{
    // Print the introduction for the start of the game
    PrintIntroduction(Difficulty);
    // Declare three number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print the CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "+There are three numbers in the code" << std::endl;
    std::cout << "+The sum is: " << CodeSum << std::endl;
    std::cout << "+The product is: " << CodeProduct << std::endl;

    // Get the player's three guesses
    int GuessA = 0;
    int GuessB = 0;
    int GuessC = 0;
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "You entered: " << GuessA << "-" << GuessB << "-" << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You Win!" << std::endl;
        std::cout << std::endl;
    }
    else
    {
        std::cout << "That is wrong!" << std::endl;
        std::cout << std::endl;
    }

    return;
}

int main()
{
    int LevelDifficulty = 1;

    while (true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            LevelDifficulty++;
        }
    }

    return 0;
}