'''

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.

Answer: First I found the location of all the zeros in the matrix and then I multiplied that rows with 0  and the columns wiht 0 repsectively

'''
matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
dirty_row = []
dirty_column = []
zero_location =[]
for i in range(0,len(matrix)):
    for j in range (0, len(matrix[0])):
        if matrix[i][j] == 0:
            zero_location.append([i,j])
            dirty_row.append(i)
            dirty_column.append(j)
for i in dirty_row:
    matrix[i] = [0]*len(matrix[0])
for j in dirty_column:
    for i in range(0,len(matrix)):
        matrix[i][j] = 0