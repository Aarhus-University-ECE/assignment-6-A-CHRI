#include <stdio.h>
#include <assert.h>

int max(int *numbers, int size)
{
    // Pre : size > 0
    assert(size > 0);
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > numbers[max])
            max = i;
    }

    return numbers[max];
}
