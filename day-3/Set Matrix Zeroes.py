def setZeroes(matrix):
    rows, cols = len(matrix), len(matrix[0])
    row_zero, col_zero = False, False
    for r in range(rows):
        for c in range(cols):
            if matrix[r][c] == 0:
                if r == 0:
                    row_zero = True
                if c == 0:
                    col_zero = True
                matrix[0][c] = matrix[r][0] = 0
    for r in range(1, rows):
        for c in range(1, cols):
            if matrix[r][0] == 0 or matrix[0][c] == 0:
                matrix[r][c] = 0
    if row_zero:
        for c in range(cols):
            matrix[0][c] = 0
    if col_zero:
        for r in range(rows):
            matrix[r][0] = 0
