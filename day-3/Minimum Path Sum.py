def minPathSum(grid):
    for r in range(len(grid)):
        for c in range(len(grid[0])):
            if r == 0 and c == 0:
                continue
            elif r == 0:
                grid[r][c] += grid[r][c-1]
            elif c == 0:
                grid[r][c] += grid[r-1][c]
            else:
                grid[r][c] += min(grid[r-1][c], grid[r][c-1])
    return grid[-1][-1]
