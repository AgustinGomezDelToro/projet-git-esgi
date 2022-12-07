#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "include/map.h"
#include "include/user.h"

int main(int argc, char const *argv[])
{
    printMap();
    afficher_contacts("Alexadndre;Agustin");

    return 0;
}
