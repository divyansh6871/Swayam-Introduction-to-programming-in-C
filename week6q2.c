#include <stdio.h>

void findp(int ar[100][100], int n, int x, int y, char* p, int pIndex) {
    
    // If the destination is reached, print the p and return
    if (x == n - 1 && y == n - 1) {
        p[pIndex] = '\0'; // Null terminate the string
        printf("%s\n", p);
        return;
    }

    
    for(x=0;x<n;x++){
        for(y=0;y<n;y++){
            if (ar[x][y]==1&&ar[x][y+1]==1)
            {
                p[pIndex]='R';
                pIndex++;
            }
            else if ((ar[x][y]==1)&&(ar[x+1][y]==1))
            {
                p[pIndex]='D';
                pIndex++;
            }
        }
    }
    p[pIndex]='\0';
    printf("%s",p);   
}

int main() {
    int n;
    scanf("%d", &n);
    
    int ar[100][100];
    char p[200]; // Assuming the p will not be longer than 2n-1 steps

    // Read the ar
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &ar[i][j]);
        }
    }
    
    findp(ar, n, 0, 0, p, 0);

    return 0;
}
