#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void afficher_contacts(char *contacts);

int main(int argc, char const *argv[])
{
    afficher_contacts("prenom;nom");
    return 0;
}


//affiger plusierus contacts dans une chaine de caractere
void afficher_contacts(char *contacts)
    {
        printf("%s", contacts);
        
    }
