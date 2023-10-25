#!/usr/bin/python3
"""This script contains the definition of island_perimeter function"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid
    Args:
        grid: a list of list of integers
    """
    if len(grid) == 0 or len(grid) > 100:
        return 0
    perimeter = 0
    start = 0
    init = 0
    for side in grid:
        if len(side) > 100:
            return 0
        peri = 0
        for cell in side:
            if cell == 1 and perimeter == 0:
                init = 1
                peri += 4
            elif cell == 1 and perimeter != 0:
                peri += 2
        if init == 1 and peri == 0:
            break
        else:
            perimeter += peri
    return perimeter
