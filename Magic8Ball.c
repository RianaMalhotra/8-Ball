#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ans;
    char name[20];
    char quest[10000];
    printf("Enter Your Name: \n");
    scanf("%s", name);
    printf("%s, The Magic 8 Ball is Reading your Future...\n", name);
    printf("Ask Your Yes/No Question\n");
    scanf("%s", quest);
    srand(time(NULL));
    ans = rand() % 20;
    
    if(ans == 0){
        printf("Yes, Definitely.\n");
    }else{
        printf("No, Very Doubtful.\n");
    }
    return 0;
}
