#include<bits/stdc++.h>

const int SIZE = 4;

void generateMagicSquare(int magicSquare[SIZE][SIZE]) {
    // Initialize all elements to 0
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            magicSquare[i][j] = 0;
        }
    }

    int num = 1;
    int row = 0;
    int col = SIZE / 2;
    int nextRow;
    int nextCol;

    while (num <= SIZE * SIZE) {
        magicSquare[row][col] = num;

        // Calculate the position for the next number
        nextRow = (row - 1 + SIZE) % SIZE;
        nextCol = (col + 1) % SIZE;

        // If the calculated position is already occupied, move down one row
        if (magicSquare[nextRow][nextCol] != 0) {
            row = (row + 1) % SIZE;
        }
        else {
            row = nextRow;
            col = nextCol;
        }

        num++;
    }
}

void displayMagicSquare(const int magicSquare[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cout << std::setw(4) << magicSquare[i][j];
        }
        std::cout << std::endl;
    }
}

int main() {
    int magicSquare[SIZE][SIZE];

    generateMagicSquare(magicSquare);

    std::cout << "Magic Square:" << std::endl;
    displayMagicSquare(magicSquare);

    return 0;
}
