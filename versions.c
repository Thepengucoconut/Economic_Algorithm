#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include "search.c"

int execute_v1_2(int yourmoney);
int execute_v1_1(int yourmoney);

int execute_v2_2(int yourmoney);
int execute_v2_1(int yourmoney);
float multiplier = 0.75;

int execute_v3_1(int yourmoney);
int execute_v3_2(int yourmoney);

int landprice = 80;
int roundend = 100;


//EXECUTE THIS VERSION IF PLAYING WITH DECK #1--------------
int execute_v1_1(int yourmoney){
    //do while loop executes alg. v1.1 every time something happens in game.
    //prompts user to input action each time they achieve something, and specify the cards with which it was achieved.
    do{
        string act = get_string("\nAction: ");
        char action = act[0];

        //if player says they won, exit the game.
        if(action == 'w'){
            printf("GG\n");
            break;
        }

        //if player says they lost, exit the game, also fuck them.
        else if(action == 'l'){
            printf("You are absolute G A R B A G E\n");
            break;
        }

        //if player buys a card, it prompts for the card purchased, searches for the card and subtracts the price from money.
        else if(action == 'b'){
            string card1 = get_string("Card Purchased: ");

            if(search_1(card1) == -1){
                if(search_2(card1) != -1){
                    printf("CANNOT PURCHASE CARD FROM THIS DECK");
                }
                else{
                    printf("CARD NOT FOUND\n");
                    continue;
                }
            }

            else if(search_1(card1) != -1){
                if(yourmoney - prices_1[search_1(card1)] <= 0){
                    printf("INSUFFICIENT FUNDS\n");
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }

                else{
                yourmoney = yourmoney - prices_1[search_1(card1)];
                printf("CURRENT FUNDS: %d\n", yourmoney);
                }
            }

            else if(card1[0] == 'l'){
                yourmoney = yourmoney - landprice;
            }
        }

        else if(action == 'k'){
            string card1 = get_string("Card Eliminated: ");

            if(search_2(card1) == -1){
                printf("CARD NOT FOUND\n");
                continue;
            }

            else{
                string type = get_string("Did You Use A Creature? (yes or no)\n");

                if(type[0] == 'y'){
                    yourmoney = yourmoney + (prices_2[search_2(card1)] * 0.75);
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }
                else if(type[0] == 'n'){
                    yourmoney = yourmoney + (prices_2[search_2(card1)] * 0.5);
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }
            }
        }
    }
    while(true);

    string play = get_string("Play Again (Will use the same version)? (yes or no)\n");
    if(play[0] == 'y'){
        string ver = get_string("Would You Like To Play With The Other Deck? (yes or no)\n");
        if(ver[0] == 'y'){
            execute_v1_2(600);
        }
        else if(ver[0] == 'n'){
            execute_v1_1(600);
        }
    }
    return 0;
}

//EXECUTE THIS VERSION IF PLAYING WITH DECK #2--------------
int execute_v1_2(int yourmoney){
    //do while loop executes alg. v1.1 every time something happens in game.
    //prompts user to input action each time they achieve something, and specify the cards with which it was achieved.
    do{
        string act = get_string("\nAction: ");
        char action = act[0];

        //if player says they won, exit the game.
        if(action == 'w'){
            printf("GG\n");
            break;
        }

        //if player says they lost, exit the game, also fuck them.
        else if(action == 'l'){
            printf("You are absolute G A R B A G E\n");
            break;
        }

        //if player buys a card, it prompts for the card purchased, searches for the card and subtracts the price from money.
        else if(action == 'b'){
            string card1 = get_string("Card Purchased: ");

            if(search_2(card1) == -1){
                if(search_1(card1) != -1){
                    printf("CANNOT PURCHASE CARD FROM THIS DECK");
                }
                else{
                    printf("CARD NOT FOUND\n");
                    continue;
                }
            }

            else if(search_2(card1) != -1){
                if(yourmoney - prices_2[search_2(card1)] <= 0){
                    printf("INSUFFICIENT FUNDS\n");
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }

                else{
                yourmoney = yourmoney - prices_2[search_2(card1)];
                printf("CURRENT FUNDS: %d\n", yourmoney);
                }
            }

            else if(card1[0] == 'l'){
                yourmoney = yourmoney - landprice;
            }
        }

        else if(action == 'k'){
            string card1 = get_string("Card Eliminated: ");

            if(search_1(card1) == -1){
                printf("CARD NOT FOUND\n");
                continue;
            }

            else{
                string type = get_string("Did You Use A Creature? (yes or no)\n");

                if(type[0] == 'y'){
                    yourmoney = yourmoney + (prices_1[search_1(card1)] * 0.75);
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }

                else if(type[0] == 'n'){
                    yourmoney = yourmoney + (prices_1[search_1(card1)] * 0.5);
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }
            }
        }
    }
    while(true);

    string play = get_string("Play Again (Will use the same version)? (yes or no)\n");
    if(play[0] == 'y'){
        string ver = get_string("Would You Like To Play With The Other Deck? (yes or no)\n");
        if(ver[0] == 'y'){
            execute_v1_2(600);
        }
        else if(ver[0] == 'n'){
            execute_v1_1(600);
        }
    }
    return 0;
}








//EXECUTE THIS VERSION IF PLAYING WITH DECK #1--------------
int execute_v2_1(int yourmoney){
    //do while loop executes alg. v1.1 every time something happens in game.
    //prompts user to input action each time they achieve something, and specify the cards with which it was achieved.
    do{
        string act = get_string("\nAction: ");
        char action = act[0];

        //if player says they won, exit the game.
        if(action == 'w'){
            printf("GG\n");
            break;
        }

        //if player says they lost, exit the game, also fuck them.
        else if(action == 'l'){
            printf("You are absolute G A R B A G E\n");
            break;
        }

        //if player buys a card, it prompts for the card purchased, searches for the card and subtracts the price from money.
        else if(action == 'b'){
            string card1 = get_string("Card Purchased: ");

            if(search_1(card1) == -1){
                if(search_2(card1) != -1){
                    printf("CANNOT PURCHASE CARD FROM THIS DECK");
                }
                else{
                    printf("CARD NOT FOUND\n");
                    continue;
                }
            }

            else if(search_1(card1) != -1){
                if(yourmoney - prices_1[search_1(card1)] <= 0){
                    printf("INSUFFICIENT FUNDS\n");
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }

                else{
                yourmoney = yourmoney - prices_1[search_1(card1)];
                printf("CURRENT FUNDS: %d\n", yourmoney);
                }
            }

            else if(card1[0] == 'l'){
                yourmoney = yourmoney - landprice;
            }
        }

        else if(action == 'k'){
            string card1 = get_string("Card Eliminated: ");

            if(search_2(card1) == -1){
                printf("CARD NOT FOUND\n");
                continue;
            }

            else{
                string cused = get_string("Card Used: ");

                if(search_1(cused) == -1){
                    printf("CARD NOT FOUND\n");
                    continue;
                }

                string type = get_string("Did You Use A Creature? (yes or no)\n");

                if(type[0] == 'y'){
                    yourmoney = yourmoney + ((prices_2[search_2(card1)] * multiplier) - (prices_1[search_1(cused)] * multiplier));
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }

                else if(type[0] == 'n'){
                    yourmoney = yourmoney + ((prices_2[search_2(card1)] * multiplier) - (prices_1[search_1(cused)] * (multiplier * 16)));
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }
            }
        }
    }
    while(true);

    string play = get_string("Play Again (Will use the same version)? (yes or no)\n");
    if(play[0] == 'y'){
        string ver = get_string("Would You Like To Play With The Other Deck? (yes or no)\n");
        if(ver[0] == 'y'){
            execute_v2_2(600);
        }
        else if(ver[0] == 'n'){
            execute_v2_1(600);
        }
    }
    return 0;
}

//EXECUTE THIS VERSION IF PLAYING WITH DECK #2--------------
int execute_v2_2(int yourmoney){
    //do while loop executes alg. v1.1 every time something happens in game.
    //prompts user to input action each time they achieve something, and specify the cards with which it was achieved.
    do{
        string act = get_string("\nAction: ");
        char action = act[0];

        //if player says they won, exit the game.
        if(action == 'w'){
            printf("GG\n");
            break;
        }

        //if player says they lost, exit the game, also fuck them.
        else if(action == 'l'){
            printf("You are absolute G A R B A G E\n");
            break;
        }

        //if player buys a card, it prompts for the card purchased, searches for the card and subtracts the price from money.
        else if(action == 'b'){
            string card1 = get_string("Card Purchased: ");

            if(search_2(card1) == -1){
                if(search_1(card1) != -1){
                    printf("CANNOT PURCHASE CARD FROM THIS DECK");
                }
                else{
                    printf("CARD NOT FOUND\n");
                    continue;
                }
            }

            else if(search_2(card1) != -1){
                if(yourmoney - prices_2[search_2(card1)] <= 0){
                    printf("INSUFFICIENT FUNDS\n");
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }

                else{
                yourmoney = yourmoney - prices_2[search_2(card1)];
                printf("CURRENT FUNDS: %d\n", yourmoney);
                }
            }

            else if(card1[0] == 'l'){
                yourmoney = yourmoney - landprice;
            }
        }

        else if(action == 'k'){
            string card1 = get_string("Card Eliminated: ");

            if(search_1(card1) == -1){
                printf("CARD NOT FOUND\n");
                continue;
            }

            else{
                string cused = get_string("Card Used: ");

                if(search_2(cused) == -1){
                    printf("CARD NOT FOUND\n");
                    continue;
                }

                string type = get_string("Did You Use A Creature? (yes or no)\n");

                if(type[0] == 'y'){
                    yourmoney = yourmoney + ((prices_1[search_1(card1)] * multiplier) - (prices_2[search_2(cused)] * multiplier));
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }

                else if(type[0] == 'n'){
                    yourmoney = yourmoney + ((prices_1[search_1(card1)] * multiplier) - (prices_2[search_2(cused)] * (multiplier * 16)));
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }
            }
        }
    }
    while(true);

    string play = get_string("Play Again (Will use the same version)? (yes or no)\n");
    if(play[0] == 'y'){
        string ver = get_string("Would You Like To Play With The Other Deck? (yes or no)\n");
        if(ver[0] == 'y'){
            execute_v2_2(600);
        }
        else if(ver[0] == 'n'){
            execute_v2_1(600);
        }
    }
    return 0;
}






int execute_v3_1(int yourmoney){
    //do while loop executes alg. v1.1 every time something happens in game.
    //prompts user to input action each time they achieve something, and specify the cards with which it was achieved.
    do{
        string act = get_string("\nAction: ");
        char action = act[0];

        //if player says they won, exit the game.
        if(action == 'w'){
            printf("GG\n");
            break;
        }

        //if player says they lost, exit the game, also fuck them.
        else if(action == 'l'){
            printf("You are absolute G A R B A G E\n");
            break;
        }

        //if player buys a card, it prompts for the card purchased, searches for the card and subtracts the price from money.
        else if(action == 'b'){
            string card1 = get_string("Card Purchased: ");

            if(search_1(card1) == -1){
                if(search_2(card1) != -1){
                    printf("CANNOT PURCHASE CARD FROM THIS DECK");
                }
                else{
                    printf("CARD NOT FOUND\n");
                    continue;
                }
            }

            else if(search_1(card1) != -1){
                if(yourmoney - prices_1[search_1(card1)] <= 0){
                    printf("INSUFFICIENT FUNDS\n");
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }

                else{
                yourmoney = yourmoney - prices_1[search_1(card1)];
                printf("CURRENT FUNDS: %d\n", yourmoney);
                }
            }

            else if(card1[0] == 'l'){
                yourmoney = yourmoney - landprice;
            }
        }

        else if(action == 'k'){
            string card1 = get_string("Card Eliminated: ");

            if(search_2(card1) == -1){
                printf("CARD NOT FOUND\n");
                continue;
            }

            else{
                string type = get_string("Did You Use A Creature? (yes or no)\n");

                if(type[0] == 'y'){
                    yourmoney = yourmoney + (prices_2[search_2(card1)] * 0.75);
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }
                else if(type[0] == 'n'){
                    yourmoney = yourmoney + (prices_2[search_2(card1)] * 0.5);
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }
            }
        }

        else if(action == 'r'){
            yourmoney = yourmoney + roundend;
        }
    }
    while(true);

    string play = get_string("Play Again (Will use the same version)? (yes or no)\n");
    if(play[0] == 'y'){
        string ver = get_string("Would You Like To Play With The Other Deck? (yes or no)\n");
        if(ver[0] == 'y'){
            execute_v1_2(600);
        }
        else if(ver[0] == 'n'){
            execute_v1_1(600);
        }
    }
    return 0;
}

//EXECUTE THIS VERSION IF PLAYING WITH DECK #2--------------
int execute_v3_2(int yourmoney){
    //do while loop executes alg. v1.1 every time something happens in game.
    //prompts user to input action each time they achieve something, and specify the cards with which it was achieved.
    do{
        string act = get_string("\nAction: ");
        char action = act[0];

        //if player says they won, exit the game.
        if(action == 'w'){
            printf("GG\n");
            break;
        }

        //if player says they lost, exit the game, also fuck them.
        else if(action == 'l'){
            printf("You are absolute G A R B A G E\n");
            break;
        }

        //if player buys a card, it prompts for the card purchased, searches for the card and subtracts the price from money.
        else if(action == 'b'){
            string card1 = get_string("Card Purchased: ");

            if(search_2(card1) == -1){
                if(search_1(card1) != -1){
                    printf("CANNOT PURCHASE CARD FROM THIS DECK");
                }
                else{
                    printf("CARD NOT FOUND\n");
                    continue;
                }
            }

            else if(search_2(card1) != -1){
                if(yourmoney - prices_2[search_2(card1)] <= 0){
                    printf("INSUFFICIENT FUNDS\n");
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }

                else{
                yourmoney = yourmoney - prices_2[search_2(card1)];
                printf("CURRENT FUNDS: %d\n", yourmoney);
                }
            }

            else if(card1[0] == 'l'){
                yourmoney = yourmoney - landprice;
            }
        }

        else if(action == 'k'){
            string card1 = get_string("Card Eliminated: ");

            if(search_1(card1) == -1){
                printf("CARD NOT FOUND\n");
                continue;
            }

            else{
                string type = get_string("Did You Use A Creature? (yes or no)\n");

                if(type[0] == 'y'){
                    yourmoney = yourmoney + (prices_1[search_1(card1)] * 0.75);
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }

                else if(type[0] == 'n'){
                    yourmoney = yourmoney + (prices_1[search_1(card1)] * 0.5);
                    printf("CURRENT FUNDS: %d\n", yourmoney);
                }
            }
        }
        else if(action == 'r'){
            yourmoney = yourmoney + roundend;
        }
    }
    while(true);

    string play = get_string("Play Again (Will use the same version)? (yes or no)\n");
    if(play[0] == 'y'){
        string ver = get_string("Would You Like To Play With The Other Deck? (yes or no)\n");
        if(ver[0] == 'y'){
            execute_v1_2(600);
        }
        else if(ver[0] == 'n'){
            execute_v1_1(600);
        }
    }
    return 0;
}
