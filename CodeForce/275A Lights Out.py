from typing import List

class Solution:
    def toggleLights(self, pressGrid: List[List[int]]) -> List[List[int]]:
        # Initialize the light grid where all lights start as ON (1)
        lightGrid = [[1 for _ in range(3)] for _ in range(3)]
        
        # Directions for adjacent cells (up, down, left, right)
        adjacentDirections = [(0, 0), (1, 0), (-1, 0), (0, 1), (0, -1)]
        
        # Iterate through each cell in the pressGrid
        for row in range(3):
            for col in range(3):
                if pressGrid[row][col] % 2 != 0:
                    # Toggle the light and its adjacent neighbors
                    for rowChange, colChange in adjacentDirections:
                        newRow = row + rowChange
                        newCol = col + colChange
                        if 0 <= newRow < 3 and 0 <= newCol < 3:
                            # Toggle the light state: if ON (1), turn it OFF (0), and vice versa
                            lightGrid[newRow][newCol] = 1 - lightGrid[newRow][newCol]  # Toggle light
        
        return lightGrid

# Input from the user
pressGrid = []
print("Enter the 3x3 grid of press counts (each row on a new line):")
for _ in range(3):
    rowPressCounts = list(map(int, input().split()))  # Read each row and convert to a list of integers
    pressGrid.append(rowPressCounts)

solution = Solution()
finalLightGrid = solution.toggleLights(pressGrid)

for row in lightGrid:
    print(*row)  

