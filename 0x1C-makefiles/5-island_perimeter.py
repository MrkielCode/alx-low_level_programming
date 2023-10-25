#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (list of list of int): The grid representing the island.

    Returns:
        int: The perimeter of the island
    """
    perimeter = 0

    directions = [(0, -1), (0, 1), (-1, 0), (1, 0)]

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                for dr, dc in directions:
                    r, c = row + dr, col + dc
                    if (
                            r < 0 or r >= len(grid)
                            or c < 0 or c >= len(grid[0])
                            or grid[r][c] == 0
                            ):
                        perimeter += 1
    return perimeter
