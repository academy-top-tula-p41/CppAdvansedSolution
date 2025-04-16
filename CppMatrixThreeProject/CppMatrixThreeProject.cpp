#include <iostream>
#include <iomanip>

int main()
{
    const int height{ 5 };
    const int width{ 8 };

    int matrix[height][width]{};

    int count{ 1 };

    // horizontal init
   /* 
    for (int i{}; i < height; i++)
        for (int j{}; j < width; j++)
            matrix[i][j] = count++;*/

    // horizontal zigzag 1
    /*for (int i{}; i < height; i++)
        if (i % 2 == 0)
        {
            for (int j{}; j < width; j++)
                matrix[i][j] = count++;
        }
        else
        {
            for(int j{ width - 1}; j >= 0; j--)
                matrix[i][j] = count++;
        }*/

    // horizontal zigzag 2
    /*for (int i{}; i < height; i++)
    {
        for (int j{}; j < width; j++)
        {
            if (i % 2 == 0)
                matrix[i][j] = count++;
            else
                matrix[i][width - j - 1] = count++;
        }
    }*/

    // vertical inits
    /*for (int j{}; j < width; j++)
        for (int i{}; i < height; i++)
            matrix[i][j] = count++;*/

    // vertical zigzag
    for (int j{}; j < width; j++)
    {
        if (j % 2 == 0)
            for (int i{}; i < height; i++)
                matrix[i][j] = count++;
        else
            for(int i{ height - 1 }; i >= 0; i--)
                matrix[i][j] = count++;
    }
        



    // print
    for (int i{}; i < height; i++)
    {
        for (int j{}; j < width; j++)
            std::cout << std::setw(4) << matrix[i][j];
        std::cout << "\n";
    }
    std::cout << "\n";
}
