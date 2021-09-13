#include<stdio.h> 
int main(){ 
    int board[10][10]={0,}; 
    int x=1, y=1; int i, j;
    for (i = 0; i < 10; i++) { 
        for (j = 0; j < 10; j++)
        { 
            scanf("%d", &board[i][j]); 
            
        } 
        
    } 
    while (board[y][x] != 2 && !(x == 8 && y == 8)) {
        board[y][x] = 9; if (board[y][x+1] == 1) 
        { 
            y++; } 
            else { 
                x++; 
            } 
        
    } 
    board[y][x] = 9; 
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", board[i][j]); 
            
        } 
        printf("\n"); 
        
    } 
    return 0;
}
