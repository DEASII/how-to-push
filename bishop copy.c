#include <stdio.h>
#include <stdlib.h>
#define BOARD_SIZE 8

int main(){
    int x = 3, y = 4;
    int n = 7;
    int board[BOARD_SIZE][BOARD_SIZE];

     for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            if (i == 4 && j == 3)
                board[i][j] = 'B';
            else if (i+j == n || i-j == 8-n)
                board[i][j] = 'x';
            else board[i][j] = ' ';
        }}
    //print
    for(int i = 0; i < BOARD_SIZE; i++) {
        printf("%d|",i);
        for(int j = 0; j < BOARD_SIZE; j++) {
            printf("%c|",board[i][j]);
        }puts("\n------------------");}
}
