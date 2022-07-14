#!/usr/bin/python3
'''This is a module'''


def island_perimeter(grid):
    '''This is a function'''
    p = 0
    if len(grid) > 1:
        for i in range(1, len(grid) - 1):
            for j in range(1, len(grid[i]) - 1):
                if grid[i][j] == 1 and grid[i][j - 1] == 0:
                    p += 1
                if grid[i][j] == 1 and grid[i - 1][j] == 0:
                    p += 1
                if grid[i][j] == 1 and grid[i][j + 1] == 0:
                    p += 1
                if grid[i][j] == 1 and grid[i + 1][j] == 0:
                    p += 1
    else:
        for i in grid:
            for j in range(1, len(grid[0] - 1)):
                    if grid[0][j] == 1 and grid[0][j - 1] == 0:
                        p += 1
                    if grid[0][j] == 1 and grid[0][j + 1] == 0:
                        p += 1
    return p
