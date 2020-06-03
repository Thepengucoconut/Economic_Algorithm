#include <cs50.h>
#include <string.h>

#define COUNTOF(x) (sizeof(x) / sizeof( (x)[0]))

string cards_1[20] =
        {"abzan",
        "armorcraft",
        "barrins",
        "greenwarden",
        "greenwheel",
        "heliods",
        "high",
        "inspiring",
        "meandering",
        "narnam",
        "rallying",
        "razorfoot",
        "rishkar",
        "silkweaver",
        "skyblade",
        "spidery",
        "sunscorch",
        "supply",
        "tandem",
        "unquestioned"};
int prices_1[20] = {220, 340, 735, 1050, 430, 340, 745, 150, 785, 565, 130, 230, 565, 220, 185, 215, 850, 275, 155, 350};

string cards_2[20] =
        {"act",
        "arashin",
        "burn",
        "fall",
        "firemane",
        "gideons",
        "heat",
        "high",
        "kill",
        "lagonna",
        "lightning",
        "mardu",
        "minotaur",
        "molten",
        "sandblast",
        "scroll",
        "shaman",
        "sheer",
        "swashbuckling",
        "wandering"};
int prices_2[20] = {140, 400, 385, 300, 650, 60, 120, 745, 150, 200, 140, 205, 220, 650, 100, 550, 935, 110, 130, 210};

int search_1(string card){
    int x = 0;

    while(x < COUNTOF(cards_1)){
        int cardcmp = strcmp(cards_1[x], card);

        if(cardcmp == 0){
            return x;
        }
        x++;
    }
    return -1;
}


int search_2(string card){
    int x = 0;

    while(x < COUNTOF(cards_2)){
        int cardcmp = strcmp(cards_2[x], card);

        if(cardcmp == 0){
            return x;
        }
        x++;
    }
    return -1;
}
