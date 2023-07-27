#!/usr/bin/python3

"""
module witg function -island_perimeter
"""


def island_perimeter(grid):
    """
    calculates the permeter of an island

    Args:
        grid: list of list

    """

    perimeter = 0
    for i in grid:
        for j in i:
            if j == 1:
                perimeter += 2
    if perimeter > 0:
        perimeter += 2
    return perimeter
