#include <stdio.h>
#include <Windows.h>
#define MAX_SIZE 100   // Maximum array size

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr[MAX_SIZE];
    int i, max, min, size;

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf_s("%d", &size);

    // Input array elements 

    for (i = 0; i < size; i++) {
        printf("¬вед≥ть %d елемент масиву : ", i + 1);
        scanf_s("%d", &arr[i]);
    }

    // ѕрипустимо, що перший елемент Ї максимальним ≥ м≥н≥мальним 
    max = arr[0];
    min = arr[0];



    for (i = 1; i < size; i++)
    {
        /* якщо поточний елемент перевищуЇ max */
        if (arr[i] > max)
        {
            max = arr[i];
        }

        /* якщо поточний елемент менше min */
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    int distance = abs(max - min);
    // Print maximum and minimum element and distance
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    printf("¬≥дстань м≥ж позиц≥€ми = %d", distance);

    return 96;
}