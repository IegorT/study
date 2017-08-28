/**
* File main.c
* Test program for queue
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>


#include "queue.h"

// help menu
static void printHelp();

int main(){
    int size; // size of the queue
    char command[25]; // command line
    system("clear");    // 
    printf("Please enter a size of Queue:  ");
    scanf("%u", &size);
    q_init(size);
    printHelp();
    while(true){
        scanf("%s", command);
        if(strlen(command) == 0){
            continue;
        } else if (strcmp(command, "quit") == 0){
            q_terminate();
            break;
        } else if (strcmp(command, "clear") == 0){
            q_clear();
            system("clear");
            printf("The Queue is clear\n");
        } else if (strcmp(command, "pop") == 0){
            if(q_size() == 0) {
                printf("There is nothing to take out\n");
                continue;
            }
            printf("The number is: %f\n", q_pop());
        } else if (strcmp(command, "max") == 0){
            printf("The max size of Queue is: %d\n", q_maxSize());
        } else if (strcmp(command, "lenght") == 0){
            printf("The current lenght of the Queue is: %d\n", q_size());
        } else if (isdigit(command[0])){
            if(q_size() == size) {
                printf("Not enough free space\n");
                continue;
            }
            double x = atof(command);
            q_push(x);
            printf("The number %f has been add to the Queue\n", x);
        } else {
            printf("Wrong command\n");
            printHelp();
        }
    }
    return 0;
}

static void printHelp(){
    printf(
        "\n\tTest Queue command:\n"
        "\t---------------------------------------\n"
        "\t<number>   |\t push a positive number (24 digit length) to the queue\n"
        "\tpop\t   |\t take the first number from the queue\n"
        "\tlenght\t   |\t take  the queue length \n"
        "\tmax\t   |\t take the quequ maxim length \n"
        "\tclear\t   |\t clear the queue\n"
        "\tquit\t   |\t memory free and exit\n\n"
    );
}