#!/usr/bin/python3
"""
Defines Island  Perimeter function.
Defines Island  Perimeter function.
Defines Island  Perimeter function.
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island
    decribed in grid:
    + grid is a list of list of integers:
      - 0 represents a water zone
      - 1 represents a land zone
      - One cell is a square with side length 1
      - Grid cells are connected horizontally/vertically (not diagonally).
      - Grid is rectangular, width and height don’t exceed 100

    Approach:
    Using this simple model that iterate over all items in the grid,
    e.g. grid = [
                  [0, 0, 0, 0],
                  [0, 1, 1, 0],
                  [0, 1, 0, 0],
                  [0, 1, 0, 0],
                  [0, 0, 0, 0]
                ]
    Given a return variable `perimeter` set to `0`:
    Logic: for each items in the grid,for top, bottom, right, or left
    sides that is not `1` increase the perimeter by `1` unit.

    Starting with the assumption that width is going to be equal
    accross all row in the grid.
    """

    y = len(grid)  # height starting from `0`: y_axis
    x = len(grid[0])  # width starting from `0`: x_axis
    perimeter = 0

    for dy in range(y):
        for dx in range(x):
            if grid[dy][dx] == 1:  # land ooo!
                if grid[dy][dx - 1] == 0:  # check to left
                    perimeter += 1
                if grid[dy][dx + 1] == 0:  # check to right
                    perimeter += 1
                if grid[dy - 1][dx] == 0:  # check up
                    perimeter += 1
                if grid[dy + 1][dx] == 0:  # check down
                    perimeter += 1

    return perimeter
