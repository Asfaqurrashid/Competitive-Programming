#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int chars;
    printf("non-terminals: ");
    cin >> chars;
    printf("non-terminals sets: ");
    char lines[chars+5];
    scanf("%s",lines);

    int ter;
    printf("terminals : ");
    cin >> ter;
    printf("terminals sets: ");
    char strter[ter+5];
    scanf("%s",strter);

    char strprod[chars+5][25];
    printf("productions:\n");
    for(int i = 0;i < chars;i++){
        printf("productions for %c : ",lines[i]);
        scanf("%s",strprod[i]);
    }

    char last[chars][1];
    for(int i = 0;i < chars;i++){
        printf("Productions for %c : ",lines[i]);
        for(int j = 0;j < strlen(strprod[i]);j++){
            bool ck = 0;
            for(int k = 0;k < ter;k++){
                if(strprod[i][j] == strter[k]){
                    ck = 1;
                    break;
                }
            }
            if(ck){
                printf("%c",strprod[i][j]);
                last[i][0] = strprod[i][j];
            }
        }
        printf("\n");
    }

    for(int i = 0;i < chars;i++){
        printf("Last character of %c : %c\n",lines[i],last[i][0]);
    }
    return 0;
}

