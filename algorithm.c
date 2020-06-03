//RUN THIS PROGRAM IN CS50 IDE OR SANDBOX.
//RUN IT WITH COMMANDS make algorithm, AND ./algorithm IN TERMINAL WINDOW

#include "versions.c"
#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define COUNTOF(x) (sizeof(x) / sizeof( (x)[0]))
/*
functions here serve to separate the various algorithm versions and to separate the two
decks that will be playtested.
*/
int execute_v1_1(int x);
int execute_v1_2(int x);

int execute_v2_1(int x);
int execute_v2_2(int x);

int execute_v3_1(int x);
int execute_v3_2(int x);

//search and pay functions for both decks.
int search_1(string card);
int search_2(string card);


int main(void){
    int startmoney = 600;
    int inc = 0;

    //all of the existing versions of the economic algorithm.
    string vers[6] = {"v1.1", "v1.2", "v2.1", "v2.2", "v3.1", "v3.2"};
    string ver = get_string("Eco-Alg. Ver: ");

    int vercomp = strcmp(vers[2], ver);

    //do while loop that runs each version based on the requested algorithm.
    do{
        int vercmp = strcmp(vers[inc], ver);

        //version 1
        if(vercmp == 0 && inc == 0){
            execute_v1_1(startmoney);
            break;
        }
        else if(vercmp == 0 && inc == 1){
            execute_v1_2(startmoney);
            break;
        }

        //version 2
        else if(vercmp == 0 && inc == 2){
            execute_v2_1(startmoney);
            break;
        }
        else if(vercmp == 0 && inc == 3){
            execute_v2_2(startmoney);
            break;
        }

        //version 3
        else if(vercmp == 0 && inc == 4){
            execute_v3_1(startmoney);
            break;
        }
        else if(vercmp == 0 && inc == 5){
            execute_v3_2(startmoney);
            break;
        }
        inc++;
    }
    while(inc < sizeof(vers));
}

int execute_v3_1(int x){
    printf("version 3.1 has not been released.\n");
    return x;
}

int execute_v3_2(int x){
    printf("version 3.2 has not been released.\n");
    return x;
}
