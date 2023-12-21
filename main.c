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
        printf("������ %d ������� ������ : ", i + 1);
        scanf_s("%d", &arr[i]);
    }

    // ����������, �� ������ ������� � ������������ � ��������� 
    max = arr[0];
    min = arr[0];



    for (i = 1; i < size; i++)
    {
        /* ���� �������� ������� �������� max */
        if (arr[i] > max)
        {
            max = arr[i];
        }

        /* ���� �������� ������� ����� min */
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    int distance = abs(max - min);
    // Print maximum and minimum element and distance
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    printf("³������ �� ��������� = %d", distance);

    return 96;
}