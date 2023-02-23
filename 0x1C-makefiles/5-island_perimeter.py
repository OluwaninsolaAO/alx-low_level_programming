#!/usr/bin/python3
"""
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
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    for i in range(1, rows - 1):
        for j in range(1, cols - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
