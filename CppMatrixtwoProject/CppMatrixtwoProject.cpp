#include <iostream>
#include <iomanip>

int main()
{
    srand(time(nullptr));

    const int length{ 10 };
    int array[length]{};

    for (int i{}; i < length; i++)
        array[i] = rand() % 100;

    for (int i{}; i < length; i++)
        std::cout << std::setw(4) << array[i];
    std::cout << "\n";

    for (int i{}; i < length / 2; i++)
    {
        int temp = array[i];
        array[i] = array[length - 1 - i];
        array[length - 1 - i] = temp;
    }

    for (int i{}; i < length; i++)
        std::cout << std::setw(4) << array[i];
    std::cout << "\n\n";


    const int height{ 5 };
    const int width{ 8 };

    int matrix[height][width]{};

    // инициализация случайными
    for (int i{}; i < height; i++)
        for (int j{}; j < width; j++)
            matrix[i][j] = rand() % 100;

    // печать
    for (int i{}; i < height; i++)
    {
        for (int j{}; j < width; j++)
            std::cout << std::setw(4) << matrix[i][j];
        std::cout << "\n";
    }
    std::cout << "\n";

    // отзеркаливание

    /*for (int i{}; i < height; i++)
    {
        for (int j{}; j < width / 2; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][width - 1 - j];
            matrix[i][width - 1 - j] = temp;
        }
    }*/

    
    int steps{ 3 };
    steps %= width;

    // сдвиг влево
    /*
    for (int s{}; s < steps; s++)
    {
        for (int i{}; i < height; i++)
        {
            int temp{ matrix[i][0] };
            for (int j{}; j < width - 1; j++)
                matrix[i][j] = matrix[i][j + 1];
            matrix[i][width - 1] = temp;
        }
    }*/
    // сдвиг вправо
    for (int s{}; s < steps; s++)
    {
        for (int i{}; i < height; i++)
        {
            int temp{ matrix[i][width - 1] };
            for (int j{ width - 1 }; j > 0; j--)
                matrix[i][j] = matrix[i][j - 1];
            matrix[i][0] = temp;
        }
    }


    // печать
    for (int i{}; i < height; i++)
    {
        for (int j{}; j < width; j++)
            std::cout << std::setw(4) << matrix[i][j];
        std::cout << "\n";
    }
    std::cout << "\n";
}
