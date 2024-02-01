#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int p[6][6] = {0};
int c[6][6] = {0};
int b[6][6] = {0};

void display(int n) {

    int i, j, k = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
        if(k<=9)
            printf("0%d|  ", k);
        else
            printf("%d|  ", k);
            k++;
        }
        printf("\n");
    }
}

void hinput(int n) {
    int x, y, c = 5, temp;
    printf("Enter a number between 1 and %d \n", n * n);
    while (c--) {
        scanf("%d", &temp);
        if (temp > n * n) {
            printf("Invalid number \n");
            c++;
        } else {
            x = (temp - 1) / n;
            y = (temp - 1) % n;
            if (p[x][y] != 8)
                p[x][y] = 8;
            else
                printf("Invalid location");
        }
    }
    for (x = 0; x < n; x++) {
        for (y = 0; y < n; y++) {
            printf("%c|  ", p[x][y] == 8 ? 'X' : '_');
        }
        printf("\n");
    }
}

void cinput(int n) {
     srand(time(NULL));
    int x, y, ct = 5, temp;
    while (ct--) {
        x = rand() % n;
        y = rand() % n;
        if (c[x][y] != 8)
            c[x][y] = 8;
        else
            ct++;
    }
   /* for (x = 0; x < n; x++) {
        for (y = 0; y < n; y++) {
            printf("%c|  ", c[x][y] == 8 ? 'O' : '_');
        }
        printf("\n");
    }*/
}

void win(int n) {
      srand(time(NULL));
    int player = 5, computer = 5, time = 5, x, y, temp;
    while (time--) {
        display(n);
        printf("Player turn \n\n");
        printf("enter the number \n\n");
        scanf("%d", &temp);
        x = (temp - 1) / n;
        y = (temp - 1) % n;
        if (c[x][y] == 8)
            computer--;
          hi: 
        printf(" \nComputer ships remaining is %d\n \n",computer);
        printf("Computer turn \n\n");
        x = rand() % n;
        y = rand() % n;
        printf("%d %d",x,y);
        if(b[x][y]==8)
            goto hi;   
        if (p[x][y] == 8)
        {
            b[x][y]=8;
            player--;
        }   
        printf("\nPlayer ships remaining is %d \n \n",player);
    }
    if (player > computer)
        printf("Player wins");
    else if (computer > player)
        printf("Computer wins");
    else
        printf("It's a tie");
}

int main() {
    int n;
    printf("Enter the board size: ");
    scanf("%d", &n);
    display(n);
    hinput(n);
    cinput(n);
    win(n);
    return 0;
}