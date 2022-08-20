#include <cstdio>
#include <cstring>
#include <ctype.h>

double mass(char c){

    if(c == 'C')    return 12.01;
    if(c == 'H')    return 1.008;
    if(c == 'O')    return 16;
    if(c == 'N')    return 14.01;

    return 0;
}

int main(){

    int t = 0;
    scanf("%d", &t);

    while(t--){

        double tmass = 0, n = 0, c = 1;

        char s[128];
        scanf("%s", s);

        n = mass(s[0]);
        for(int i = 1; i < (int)strlen(s); i++){

            if(isdigit(s[i])){

                if(isdigit(s[i - 1])){

                    c *= 10;
                    c += (s[i] - '0');

                    continue;
                }

                c *= (s[i] - '0');
                continue;
            }

            tmass += (c * n);

            c = 1;
            n = mass(s[i]);
        }
        
        tmass += (c * n);

        printf("%.03lf\n", tmass);
    }
}
