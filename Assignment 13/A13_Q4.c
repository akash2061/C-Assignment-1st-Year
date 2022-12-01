#include<stdio.h>
void day();

int main()
{
    day();
    return 0;
}

void day()
{
    int d;
    printf("Enter a day number (1-7): ");
    scanf("%d",&d);
    printf("\n");
    switch (d)
    {
    case 1: {printf("I have crossed oceans of Time to find You. <3"); break;}
    case 2: {printf("Only a Vampire can Love You Forever. <3"); break;}
    case 3: {printf("Roses are dead,\nViolets are Dying,\nOutside you are Smiling,\nInside you are Crying. </3"); break;}
    case 4: {printf("You are so Fortunate today, Since I'm in Love with You <3"); break;}
    case 5: {printf("Sacrifice what You are, for what You can Become."); break;}
    case 6: {printf("Destroy What Destroys You."); break;}
    case 7: {printf("You have to be ODD, to be number ONE."); break;}
    default:{printf("Enter a valid number."); day();}
    }
}