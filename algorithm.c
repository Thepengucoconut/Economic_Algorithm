//RUN THIS PROGRAM IN CS50 IDE OR SANDBOX.
//RUN IT WITH COMMANDS make algorithm, AND ./algorithm IN TERMINAL WINDOW

#include "versions.c"
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){
    int startmoney = 600;
    int inc = 0;

    //all of the existing versions of the economic algorithm.
    string vers[6] = {"1.1", "1.2", "2.1", "2.2", "3.1", "3.2"};
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
