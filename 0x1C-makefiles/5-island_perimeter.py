#!/usr/bin/python3
"""Defines a perimeter calculating function."""


def island_perimeter(grid):
    """Return the perimeter of an island"""
    perimeter = 0
    totalrows = len(grid)
    totalcols = len(grid[0])
    intersections = 0

    if totalrows <= 100 and totalcols <= 100:
        for i in range(totalrows):
            for j in range(totalcols):
                if grid[i][j] == 1:
                    perimeter += 4
                    # check top for intersection
                    if (i > 0 and grid[i - 1][j] == 1):
                        perimeter -= 2
                    # check left for intersection
                    if (j > 0 and grid[i][j - 1] == 1):
                        perimeter -= 2
    return perimeter
