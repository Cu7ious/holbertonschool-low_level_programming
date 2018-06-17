#!/usr/bin/python3
""" Module that contains island_perimeter function
"""


def check_borders(x, y, grid):
    count = 4

    if grid[x - 1][y] == 1:
        count -= 1

    if grid[x + 1][y] == 1:
        count -= 1

    if grid[x][y - 1] == 1:
        count -= 1

    if grid[x][y + 1] == 1:
        count -= 1

    return count

def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid

        Args:
            grid: list of list of integers (matrix)
                0 represents a water zone
                1 represents a land zone
                One cell is a square with side length 1
                Grid cells are connected hor/vert (not diagonally)
                Grid is rectangular, width and height don’t exceed 100
                Grid is surrounded by water, and there is one island (or zero)
                The island doesn’t have 'lakes' (water inside that isn't
                    connected to the water around the island)
    """
    len_X = len(grid) - 1
    len_Y = len(grid[0]) - 1
    perimeter = 0

    for x in range(1, len_X):
        for y in range(1, len_Y):
            if grid[x][y] == 1:
                perimeter += check_borders(x, y, grid)

    return perimeter
