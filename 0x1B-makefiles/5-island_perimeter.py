#!/usr/bin/python3
""" Module that contains island_perimeter function
"""


def check_borders(x, y, grid):
    """ Checks borders of the island cell

        Args:
            x: the x coordinate of the grid
            y: the y coordinate of the grid
            grid: the coordinates grid
    """
    count = 4

    if x > 0:
        if grid[x - 1][y] == 1:
            count -= 2

    if y > 0:
        if grid[x][y - 1] == 1:
            count -= 2

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
    len_X = len(grid)
    len_Y = len(grid[0])
    perimeter = 0

    for x in range(len_X):
        for y in range(len_Y):
            if grid[x][y] == 1:
                perimeter += check_borders(x, y, grid)

    return perimeter
