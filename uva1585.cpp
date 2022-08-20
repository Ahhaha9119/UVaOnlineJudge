#include <stdio.h>
#include <string.h>


int main(){
    int T = 0;
    char str[128];

    scanf("%d", &T);

    while(T--){
        int sum = 0, count = 0;
        scanf("%s", str);
        
        for(int i = 0; i < (int)strlen(str); i++){
            if(str[i] == 'O')   sum += ++count;
            if(str[i] == 'X')   count = 0;
        }

        printf("%d\n", sum);
    }

}
