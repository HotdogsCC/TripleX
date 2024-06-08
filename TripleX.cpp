#include <iostream>

int main()
{
    // Prints some messages to the terminal
    std::cout << "Hello. You are a secret agent working for H.W.";
    std::cout << std::endl;
    std::cout << "Your task is simple, crack the hardrive into BJ Solutions.";
    std::cout << std::endl;
    std::cout << std::endl;

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 5;
    const int CodeC = 6;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Prints sum and product to the terminal
    std::cout << "There are three numbers in the code" << std::endl;
    std::cout << "The codes add-up to: " << CodeSum << std::endl;
    std::cout << "The product of the codes result in: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win!!!";
    }
    else
    {
        std::cout << "You lose!!!";
    }

    return 0;
}