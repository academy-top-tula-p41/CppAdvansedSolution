#include <iostream>

void PrintStars(int length = 10)
{
    for (int i{}; i < length; i++)
        std::cout << "*";

    std::cout << "\n";
}

int Fibonachi(int n)
{
    int f0{ 0 };
    int f1{ 1 };

    for (int i{ 1 }; i < n; i++)
    {
        int s = f0 + f1;
        f0 = f1;
        f1 = s;
    }

    return f1;
}

void Snowflake(int size)
{
    if (!(size & 1)) 
        size++;

    for (int i{}; i < size; i++)
    {
        for (int j{}; j < size; j++)
        {
            if (i == j
                || i == size - j - 1
                || i == size / 2
                || j == size / 2)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << "\n";
    }
}

int main()
{
    /*char str[] = "Hello world!";
    int length = std::strlen(str);

    PrintStars();
    std::cout << str << "\n";
    PrintStars();*/

    //std::cout << Fibonachi(10) << "\n";

    Snowflake(14);
}
