#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    // Prints some messages to the terminal
    std::cout << "\n\nHello. You are a secret agent working for H.Watson.\n";
    std::cout << "Your task is simple, crack the hardrive owning to B.Joosse.\n";
    std::cout << "\n This hard drive has a difficulty rating of " << Difficulty << "\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Declare 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Prints sum and product to the terminal
    std::cout << "\nThere are three numbers in the code.\n";
    std::cout << "The codes add-up to: " << CodeSum << "\n";
    std::cout << "The product of the codes result in: " << CodeProduct << "\n";

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nGood stuff, that seemed to have cracked that drive.";
        return true;
    }
    else
    {
        std::cout << "\nFuck, that wasn't it. Let's try again.";
        return false;
    }
}

int main()
{
    srand(time(NULL));
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
    while (LevelDifficulty <= MaxDifficulty) // Loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }

    std::cout << "GG you win.";

    return 0;
}