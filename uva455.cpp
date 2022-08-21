#include <cstdio>
#include <cstring>

int main(){

    int t = 0;
    
    scanf("%d", &t);
    while(t--){
        
        char line[128];

        scanf("%s", line);

        for(int i = 1; i <= (int)strlen(line); i++){

            if((int)strlen(line) % i == 0){

                int ans = 1;

                for(int j = 0; j < (int)strlen(line); j++)  if(line[j] != line[j % i])  ans = 0;

                if(ans){
                    
                    printf("%d\n", i);
                    if(t)   printf("\n");

                    break;
                }
            }
        }
    }
}
