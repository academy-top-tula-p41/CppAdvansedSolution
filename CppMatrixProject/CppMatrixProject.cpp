#include <iostream>
#include <iomanip>

int main()
{
    srand(time(nullptr));

    const int length{ 10 };
    int array[length];

    for (int i{}; i < length; i++)
        array[i] = rand() % 100;

    for (int i{}; i < length; i++)
        std::cout << array[i] << " ";
    std::cout << "\n\n";




    const int height{ 5 };
    const int width{ 8 };

    int matrix[height][width]{};

    
    /*for (int i{}; i < height; i++)
        for (int j{}; j < width; j++)
            matrix[i][j] = count++;*/

    /*for (int i{}; i < height; i++)
    {
        if (i % 2 == 0)
            for (int j{}; j < width; j++)
                matrix[i][j] = count++;
        else
            for(int j{ width - 1 }; j >= 0; j--)
                matrix[i][j] = count++;
    }*/

    /*for (int i{}; i < height; i++)
        for (int j{}; j < i + 1; j++)
            matrix[i][j] = i + 1;*/

    
    for (int i{}; i < height; i++)
    {
        int count{ 1 };
        for (int j{}; j < width; j++)
            matrix[i][j] = count++;
    }

    for (int i{}; i < height; i++)
    {
        for (int j{}; j < width; j++)
            std::cout << std::setw(4) << matrix[i][j];
        std::cout << "\n";
    }
        
    /*for (int i{}; i < height; i++)
        for (int j{}; j < width; j++)
            matrix[i][j] = rand() % 100;

    for (int i{}; i < height; i++)
    {
        int summa{};
        for (int j{}; j < width; j++)
        {
            std::cout << std::setw(4) << matrix[i][j];
            if(matrix[i][j] % 2 == 0)
                summa += matrix[i][j];
        } 
        std::cout << " | " << std::setw(4) << summa << "\n";
    }*/
}
