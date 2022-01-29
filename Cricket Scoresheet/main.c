#include"declaration.h"
#include"welcome.h"
#include"newscoresheet.h"
#include"filing.h"
#include"final.h"
int main()
{
    
    system("color f1");
    int a,key;
    char b,ch;
    FILE *fnew;

    char lastinput;
    while (TRUE)
    {
        initializeconsolehandles();
        welcome();
        system("cls");
        menu();
        locate(32,9);
        ch=getch();
        switch(ch)
        {
            case '1':
            fileopen(ch);
            case '2':
            fileopen(ch);
            getch();
            case '3':
            system ("cls");
            exit(0);
        }
    }
}
void menu()
{
    printf("\n\n\t\t\t\t\tMENU:\n");
    printf("\n\n\n\t\t\t\t1.New scoresheet:\n");
    printf("\t\t\t\t2.View scoresheet:\n");
    printf("\t\t\t\t3.Exit:\n\t\t");
}
