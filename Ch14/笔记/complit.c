// copmlit.c -- 复合字面量

#include <stdio.h>

#define MAXTITL 41
#define MAXAUTL 31

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book readfirst;
    int score;

    printf("Enter test score:\n");
    scanf("%d", &score);
    if(score >= 84)
        readfirst = (struct book) {"Crime and Punishment",
                                   "Fyodor Dostoyevsky",
                                   11.25};
    else    
        readfirst = (struct book) {"Mr. Bouncy's Nice Hat",
                                   "Fred winsome",
                                   5.99};

    printf("Your assigned reading:\n");
    printf("%s by %s: $%.2f\n", readfirst.title, readfirst.author, readfirst.value);

    return 0;
}
