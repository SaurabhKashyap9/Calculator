#include <stdio.h>
#include <windows.h>

// Function Declarations
void display(void);
int TakeKey(void);
void addition(void);
void subtraction(void);
void multiplication(void);
void division(void);
void exit(int code);

//Global Variables
float value1,value2;

int main(void)
{

    display();  //To display menu and other options
    TakeKey();  //Take input and perform certain arithmetic operations

    // After displaying results ask user to whether continue or quit

    puts("\n\nPress 1 to continue or 0 to quit...\n");
    int command;
    scanf("%d", &command);

    switch(command)
    {
        case 0:
                exit(0);
                break;
        case 1:
                system("cls"); //Clears the screen
                main();
                break;
        default:
                puts("Error: Enter a suitable command...");
    }
}

void display(void) // To display the Title and other Menu options
{
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n                                            WELCOME TO ENIGMA : The Calculator\n");
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");

    printf("\nChoose from the following options-\n\n");
    printf(" * ADDITION        -   1\n * SUBTRACTION     -   2\n * MULTIPLICATION  -   3\n * DIVISION        -   4\n");
    printf("\nEnter the suitable key...\n\n");
}

int TakeKey(void)
{
    int key;
    scanf("%d", &key);

    switch (key)
    {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;

        default:
            printf("\nError: Please enter the key from the options above\n");
            TakeKey();
    }
}

void addition(void)
{
    puts("\nEnter first number: \n");
    scanf("%f", &value1);

    puts("\nEnter Second number: \n");
    scanf("%f", &value2);

    float add = value1 + value2;
    printf("\n%.2f", add);
}

void subtraction(void)
{
    puts("\nEnter first number: \n");
    scanf("%f", &value1);

    puts("\nEnter Second number: \n");
    scanf("%f", &value2);

    float subtract = value1 - value2;
    printf("\n%.2f", subtract);
}

void multiplication(void)
{
    puts("\nEnter first number: \n");
    scanf("%f", &value1);

    puts("\nEnter Second number: \n");
    scanf("%f", &value2);

    float multiply = value1 * value2;
    printf("\n%.2f", multiply);
}

void division(void)
{
    puts("\nEnter the first number: \n");
    scanf("%f", &value1);

    puts("\nEnter the second number: \n");
    scanf("%f", &value2);

    float divide = value1/value2;
    printf("\n%.2f", divide);
}
