#!/usr/bin/python3
"""This function does something special"""

def island_perimeter(grid):
    """This is the perimeter of an island"""
    height = len(grid)
    width = len(grid[0])
    edge = 0
    sizes = 0
    
    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                sizes += 1
                if (j > 0 and grid[a][b - 1] == 1):
                    edge += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edge += 1
    return ((sizes * 4) - (edge * 2))
