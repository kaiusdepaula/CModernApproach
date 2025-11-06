/*
(a) Each square of a chessboard can hold one piece—a pawn, knight, bishop, rook, queen,
or king—or it may be empty. Each piece is either black or white. Define two enumerated
types: Piece, which has seven possible values (one of which is “empty"), and Color,
which has two.
(b) Using the types from part (a), define a structure type named Square that can store both
the type of a piece and its color.
(c) Using the Square type from part (b), declare an 8 x 8 array named board that can
store the entire contents of a chessboard.
(d) Add an initializer to the declaration in part (c) so that board's initial value corresponds
to the usual arrangement of pieces at the start of a chess game. A square that's not occupied
by a piece should have an “empty" piece value and the color black.
*/

#include <stdio.h>

typedef enum {
    empty, pawn, knight, bishop, rook, queen, king
} Piece;
typedef enum {
    black, white
} Color;

struct Square{
    Piece type;
    Color color;
};


int main(void) {
    struct Square board[8][8] = {
        // Row 0 – Black major pieces
        {{rook, black}, {knight, black}, {bishop, black}, {queen, black}, {king, black}, {bishop, black}, {knight, black}, {rook, black}},
        // Row 1 – Black pawns
        {{pawn, black}, {pawn, black}, {pawn, black}, {pawn, black}, {pawn, black}, {pawn, black}, {pawn, black}, {pawn, black}},
        // Rows 2–5 – Empty squares
        {{empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}},
        {{empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}},
        {{empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}},
        {{empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}, {empty, black}},
        // Row 6 – White pawns
        {{pawn, white}, {pawn, white}, {pawn, white}, {pawn, white}, {pawn, white}, {pawn, white}, {pawn, white}, {pawn, white}},
        // Row 7 – White major pieces
        {{rook, white}, {knight, white}, {bishop, white}, {queen, white}, {king, white}, {bishop, white}, {knight, white}, {rook, white}}
    };

    // Print piece types
    printf("Piece types:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", board[i][j].type);
        }
        printf("\n");
    }

    // Print colors
    printf("\nColors:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", board[i][j].color);
        }
        printf("\n");
    }

    return 0;
}