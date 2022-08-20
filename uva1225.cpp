#include<cstdio>

int main(){

    int t = 0;
    int c[10001][10] = {0};

    for(int i = 1; i <= 10000; i++){

        for(int j = 0; j < 10; j++){
            int cnt = i, x = 0;

            while(cnt > 0){
                if((cnt % 10) == j) x++;
                cnt /= 10;
            }

            c[i][j] = c[i - 1][j] + x;
        }
    }

    scanf("%d", &t);
    while(t--){

        int n = 0;

        scanf("%d", &n);

        for(int i = 0; i < 9; i++)  printf("%d ", c[n][i]);
        printf("%d\n", c[n][9]);
    }
}
