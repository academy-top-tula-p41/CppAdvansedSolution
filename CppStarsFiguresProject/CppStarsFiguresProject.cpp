#include <iostream>

void FigureOne(int size)
{
    for (int i{}; i < size; i++)
    {
        for (int j{}; j < size; j++)
        {
            if (i >= j)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void FigureTwo(int size)
{
    for (int i{}; i < size; i++)
    {
        for (int j{}; j < size; j++)
        {
            if (i >= size - 1 - j)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void FigureThree(int size)
{
    for (int i{}; i < size; i++)
    {
        for (int j{}; j < size; j++)
        {
            if (i <= size - 1 - j)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void FigureFour(int size)
{
    for (int i{}; i < size; i++)
    {
        for (int j{}; j < size; j++)
        {
            if (i <= j)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void FigureFive(int size)
{
    for (int i{}; i < size; i++)
    {
        for (int j{}; j < size; j++)
        {
            if (i >= j && i <= size - 1 - j)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void FigureSix(int size)
{
    for (int i{}; i < size; i++)
    {
        for (int j{}; j < size; j++)
        {
            if (i <= j && i >= size - 1 - j)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void FigureNine(int size)
{
    for (int i{}; i < size; i++)
    {
        for (int j{}; j < size; j++)
        {
            if ((i >= j && i <= size - 1 - j) || (i <= j && i >= size - 1 - j))
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << "\n";
    }
}

int main()
{
    int choise;
    int size{ 11 };

    do
    {
        std::cout << "1: Figure One\n";
        std::cout << "2: Figure Two\n";
        std::cout << "3: Figure Three\n";
        std::cout << "4: Figure Four\n";
        std::cout << "5: Figure Five\n";
        std::cout << "6: Figure Six\n";
        std::cout << "9: Figure Nine\n";
        std::cout << "0: Exit\n";
        
        std::cin >> choise;

        switch (choise)
        {
        case 1: FigureOne(size);
            break;
        case 2: FigureTwo(size);
            break;
        case 3: FigureThree(size);
            break;
        case 4: FigureFour(size);
            break;
        case 5: FigureFive(size);
            break;
        case 6: FigureSix(size);
            break;
        case 9: FigureNine(size);
            break;
        default:
            break;
        }

    } while (choise);
}
