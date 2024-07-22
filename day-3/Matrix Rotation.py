def rotate_matrix(matrix):
    rows, cols = len(matrix), len(matrix[0])
    rotated = [[0] * rows for _ in range(cols)]
    for r in range(rows):
        for c in range(cols):
            rotated[c][rows - 1 - r] = matrix[r][c]
    return rotated
