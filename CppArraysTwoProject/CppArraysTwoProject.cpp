#include <iostream>

void ArrayInit(int array[], int size)
{
    for (int i{}; i < size; i++)
        array[i] = rand() % 100;
}

void ArrayPrint(int array[], int size)
{
    for (int i{}; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}

int ArrayMinIndex(int array[], int size)
{
    int minIndex{};
    for (int i{ 1 }; i < size; i++)
        if (array[minIndex] > array[i])
            minIndex = i;
    return minIndex;
}

int ArrayMaxIndex(int array[], int size)
{
    int maxIndex{};
    for (int i{ 1 }; i < size; i++)
        if (array[maxIndex] < array[i])
            maxIndex = i;
    return maxIndex;
}

void ArrayReverse(int array[], int size)
{
    for (int i{}; i < size / 2; i++)
    {
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

void ArrayShiftLeft(int array[], int size, int steps)
{
    //steps = steps % size;
    steps %= size;

    for (int s{}; s < steps; s++)
    {
        int temp{ array[0] };
        for (int i{}; i < size - 1; i++)
            array[i] = array[i + 1];
        array[size - 1] = temp;
    }
}

void ArrayShiftRight(int array[], int size, int steps)
{
    steps %= size;
    for (int s{}; s < steps; s++)
    {
        int temp{ array[size - 1] };
        for (int i{ size - 1 }; i > 0; i--)
            array[i] = array[i - 1];
        array[0] = temp;
    }
}


int main()
{
    srand(time(nullptr));

    const int size{ 10 };
    int array[size]{};

    ArrayPrint(array, size);
    ArrayInit(array, size);
    ArrayPrint(array, size);

    /*int minIndex = ArrayMinIndex(array, size);
    std::cout << "Min index = " << minIndex
        << " value = " << array[minIndex] << "\n";

    int maxIndex = ArrayMaxIndex(array, size);
    std::cout << "Max index = " << maxIndex
        << " value = " << array[maxIndex] << "\n";*/

    //ArrayReverse(array, size);
    //ArrayShiftLeft(array, size, 3);
    ArrayShiftRight(array, size, 3);
    ArrayPrint(array, size);
}
