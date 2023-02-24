#!/usr/bin/python3
"""perimeter of the island"""

def island_perimeter(grid):
	"""returns the perimeter of the island described
	width: the width
	height: the height
	Return: the perimeter
	"""
	y = len(grid)
	x = len(grid[0])
	width = 0
	height = 0
	for i in range(y):
		for j in range(x):
			if grid[i][j] == 1:
				width += 1
				if (j > 0 and grid[i][j - 1] == 1):
					height += 1
				if (i > 0 and grid[i- 1][j] == 1):
					height += 1

	return (4 * width) - (2 * height)