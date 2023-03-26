#include <stdio.h>

#define NUM_TABLES 5

int sizetable();
int sizepeople();
char *name();
char *surname();
void kidding();
void thankyou();
void onetable();
void manytable();

int main()
{
    int tables[NUM_TABLES] = {1, 2, 3, 4, 5};
    int reserved_tables[NUM_TABLES] = {0};
    int reserved = 0;
    int unreserve = 5;
    int reserved_count = 0;
    char *Name;
    char *Surname;
    int choose;
    char exit;
    int row, column;

    printf("\nWelcome to reserve table service\n");
    Name = name();
    Surname = surname();
    do
    {

        printf("\nWelcome %s %s, What can i do for you?", Name, Surname);
        printf("\n( Available Table : %d )\n", unreserve);
        printf("\n1.Reserve by quantity of table");
        printf("\n2.Reserve by quantity of customer");
        printf("\n3.Check table status");
        printf("\n");
        printf("\n// Press others for end the services");
        printf("\n");
        printf("\nChoose number >>>");
        scanf("\n%d", &choose);
        switch (choose)
        {
        case 1:
            reserved = sizetable(tables[NUM_TABLES], unreserve, reserved);
            unreserve = NUM_TABLES - reserved;
            for (int i = reserved_count; i < reserved; i++)
            {
                reserved_tables[i] = tables[i];
                printf(" %d", reserved_tables[i]);
            }
            reserved_count = reserved;

            break;
        case 2:
            reserved = sizepeople(tables[NUM_TABLES], unreserve, reserved);
            unreserve = NUM_TABLES - reserved;
            for (int i = reserved_count; i < reserved; i++)
            {
                reserved_tables[i] = tables[i];
                printf(" %d", reserved_tables[i]);
            }
            reserved_count = reserved;
            break;
        case 3:
            for (row = 0; row < 2; row++)
            {
                if (row == 0)
                {
                    printf("\nTable Number");
                }
                else if (row == 1)
                {
                    printf("\tStatus");
                }
            }
            printf("\n___________________________\n");
            for (row = 0; row < NUM_TABLES; row++)
            {
                for (column = 0; column < 1; column++)
                {
                    if (reserved_tables[row] != 0)
                        printf("\t%d\tReserved", row + 1);
                    else
                    {
                        printf("\t%d\tAvaliable", row + 1);
                    }
                }
                printf("\n");
            }

            break;
        default:
            thankyou();
        }

    } while (choose == 1 || choose == 2 || choose == 3);
}

int sizetable(int tables[], int unreserve, int reserved)
{
    int stable;
    char exit;
    int i;

    do
    {
        printf("How many tables do you want : ");
        scanf("%d", &stable);
        printf("\n");

        if (stable > NUM_TABLES)
        {
            printf("We have just %d tables\n", NUM_TABLES);
        }
        else if (stable <= NUM_TABLES)
        {

            if (stable <= 0)
            {
                kidding();
            }
            else if (stable > unreserve)
            {
                printf("Sorry, We have %d tables left now\n", unreserve);
            }
            else if (stable == unreserve)
            {
                printf("You reserved the last %d tables already, Thank you\n", unreserve);
                unreserve = unreserve - stable;
                reserved = reserved + stable;
            }
            else if (stable < unreserve)
            {
                printf("You completely reserved %d tables \n", stable);
                unreserve = unreserve - stable;
                reserved = reserved + stable;
            }
        }
        fflush(stdin);
        printf("\nDo you want to reserve more tables? (Press Anything) or exit (Press N)\n >>>>");
        scanf("%c", &exit);
    } while (exit != 'N' && exit != 'n');
    return reserved;
}

int sizepeople(int tables[], int unreserve, int reserved)
{

    int people;
    int speople;
    int choose;

    printf("How many customers do you want reserve : ");
    printf("\n1.less than or equal to 4 people");
    printf("\n2.more than 4 people ");
    printf("\n//press others for end the services");
    printf("\n");
    printf("\nChoose number >>>");
    scanf("%d", &choose);
    printf("\n");

    switch (choose)
    {
    case 1:
        people = 1;
        onetable(people, unreserve);
        if (unreserve >= 1)
        {
            unreserve -= 1;
            reserved += 1;
        }

        break;
    case 2:

        printf("How many people ? >>>");
        scanf("%d", &speople);
        printf("\n");
        int freespace = unreserve * 4;
        manytable(speople, freespace);
        while (speople >= 5)
        {
            if (speople <= freespace)
            {
                int lock = speople / 4;
                if (speople % 4 == 0)
                {
                    if (unreserve >= lock)
                    {
                        {

                            unreserve = unreserve - lock;
                            reserved = reserved + lock;
                            printf("You completely reserved %d tables \n", lock);
                            speople = 0;
                        }
                    }
                    else
                    {
                        printf("Sorry, We don't have enough tables for you now.\n");
                        speople = 0;
                    }
                }
                else
                {
                    if (unreserve >= lock + 1)
                    {
                        unreserve = unreserve - lock - 1;
                        reserved = reserved + lock + 1;
                        printf("You completely reserved %d tables \n", lock + 1);
                        speople = 0;
                    }
                    else
                    {
                        printf("Sorry, We don't have enough tables for you now.\n");
                        speople = 0;
                    }
                }
            }
            else
            {
                printf("Sorry, We don't have enough tables for you now.\n");
                speople = 0;
            }
        }

        break;

    default:
        thankyou();
    }
    return reserved;
}

void kidding()
{
    printf("Are you kidding me?\n");
}

void thankyou()
{
    printf("\nThank you !!");
}

void onetable(int people, int unreserve)
{
    if (unreserve >= 1)
    {
        printf("You completely reserved %d Tables \n", people);
    }
    else
    {
        printf("Sorry, We don't have any available tables now.\n");
    }
}

void manytable(int speople, int freespace)
{
    int a = speople;
    while (a == speople)
    {
        if (speople < 5)
        {
            printf("You choose wrong choice\n");
        }
        else if (speople > freespace)
        {
        }
        else
        {
            printf("One table can serve 4 peoples\n");
        }
        a--;
    }
}

char *name()
{
    static char name[50];
    printf("\nEnter your name >>>");
    scanf("%s", name);
    return name;
}

char *surname()
{
    static char surname[50];
    printf("\nEnter your surname >>>");
    scanf("%s", surname);
    return surname;
}
