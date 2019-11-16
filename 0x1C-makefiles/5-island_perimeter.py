#!/usr/bin/python3
"""
Contains island_perimeter function
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid

    grid is a list of list of integers:
    0 represents a water

    1 represents a land zone

    One cell is a square with side length 1

    Grid cells are connected horizontally/vertically (not diagonally).

    Grid is rectangular, width and height don’t exceed 100

    Grid is completely surrounded by water,
    and there is one island (or nothing)

    The island doesn’t have “lakes”


    Args:
        grid(list): multidimensional list that defines a
                    grid

    Returns:
        (int): perimeter of island inside grid
    """
    terrain = []
    for array in grid:
        if 1 in array:
            terrain.append([cell for cell in array if cell == 1])

    if len(terrain) > 0:
        max_width = 0
        for land_zone in terrain:
            if len(land_zone) > max_width:
                max_width = len(land_zone)
        perimeter = (max_width*2) + (len(terrain)*2)
        return perimeter
