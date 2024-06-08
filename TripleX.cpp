#include <iostream>

void PrintIntroduction(int Difficulty)
{
    // Prints some messages to the terminal
    std::cout << "\n\nHello. You are a secret agent working for H.Watson.\n";
    std::cout << "Your task is simple, crack the hardrive owning to B.Joosse.\n";
    std::cout << "This hard drive has a difficulty rating of " << Difficulty << "\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 5;
    const int CodeC = 6;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Prints sum and product to the terminal
    std::cout << "There are three numbers in the code.\n";
    std::cout << "The codes add-up to: " << CodeSum << "\n";
    std::cout << "The product of the codes result in: " << CodeProduct << "\n";

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win!!!";
        return true;
    }
    else
    {
        std::cout << "You lose!!!";
        return false;
    }
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
            ++LevelDifficulty;
        }
        
    }

    return 0;
}