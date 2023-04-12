#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: Width of the array.
 * @height: Height of the array.
 *
 * Return: A pointer to an array of integers
 */
int **alloc_grid(int width, int height)
{
        int **gridout;
        int i;

        if (width < 1 || height < 1)
                return (NULL);

        gridout = malloc(height * sizeof(int *));
        if (gridout == NULL)
                return (NULL);

        for (i = 0; i < height; i++)
        {
                gridout[i] = malloc(width * sizeof(int));
                if (gridout[i] == NULL)
                {
                        while (--i >= 0)
                                free(gridout[i]);
                        free(gridout);
                        return (NULL);
                }
        }

        return (gridout);
}
