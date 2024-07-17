#include <stdio.h>

int check_winner(char ar[]);

int main() {
    char ar[] = {'_', '_', '_', '_', '_', '_', '_', '_', '_'};
    int turn = 1;
    int winner = 0;

    while (turn <= 9) {
        int pos;
        if (turn % 2 != 0) {
            printf("\nPlayer 1, enter a position : ");
            scanf("%d", &pos);
            if (ar[pos-1] == '_') {
                ar[pos-1] = 'O';
            } else {
                printf("Position already taken. Try again.\n");
                continue;
            }
        } else {
            printf("\nPlayer 2, enter a position : ");
            scanf("%d", &pos);
            if (ar[pos-1] == '_') {
                ar[pos-1] = 'X';
            } else {
                printf("Position already taken. Try again.\n");
                continue;
            }
        }

        winner = check_winner(ar);

        printf("\nAfter turn %d:\n", turn);
        printf("%c\t|%c\t|%c\n", ar[0], ar[1], ar[2]);
        printf("%c\t|%c\t|%c\n", ar[3], ar[4], ar[5]);
        printf("%c\t|%c\t|%c\n", ar[6], ar[7], ar[8]);

        if (winner != 0) {
            if (winner == 1) {
                printf("Player 1 (O) wins!\n");
            } else if (winner == 2) {
                printf("Player 2 (X) wins!\n");
            }
            break;
        }

        turn++;
    }

    if (winner == 0) {
        printf("It's a draw!\n");
    }

    return 0;
}

int check_winner(char ar[]) {

    for (int i = 0; i < 9; i += 3) {
        if (ar[i] == ar[i + 1] && ar[i + 1] == ar[i + 2]) {
            if (ar[i] == 'O') return 1;
            if (ar[i] == 'X') return 2;
        }
    }


    for (int i = 0; i < 3; ++i) {
        if (ar[i] == ar[i + 3] && ar[i + 3] == ar[i + 6]) {
            if (ar[i] == 'O') return 1;
            if (ar[i] == 'X') return 2;
        }
    }

    
    if ((ar[0] == ar[4] && ar[4] == ar[8]) || (ar[2] == ar[4] && ar[4] == ar[6])) {
        if (ar[4] == 'O') return 1;
        if (ar[4] == 'X') return 2;
    }

    return 0;
}