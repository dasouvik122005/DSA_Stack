#include <stdio.h>

void towerOfHanoi(int n, char beg, char aux, char end) {
    if (n == 1) {
        printf("Move peg 1 from tower %c to tower %c\n", beg, end);
        return;  
    }

    towerOfHanoi(n - 1, beg, end, aux);  
    printf("Move peg %d from tower %c to tower %c\n", n, beg, end); 
    towerOfHanoi(n - 1, aux, beg, end);  
}

int main() {
    int n;
    printf("Enter the number of pegs: ");
    scanf("%d", &n);
    towerOfHanoi(n, 'D', 'B', 'C');  
    return 0;
}
