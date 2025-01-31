#include <stdio.h>
#include <stdlib.h>

#define NB_QUESTIONS 5


char* questions[NB_QUESTIONS] = {
    "Quelle est la couleur du cheval blanc d'Henri IV?\n1.Blanc\n2.Rouge\n3.Noir\n",
    "Date de la prise de la Bastille ?\n1.1750\n2.1789\n3.1800\n",
    "Quel est le plus grand océan du monde ?\n1.Océan Atlantique\n2.Océan Indien\n3.Océan Pacifique\n",
    "Qui a écrit Les Misérables ?\n1.Victor Hugo\n2.Emile Zola\n3.Marcel Proust\n",
    "Quelle est la capitale de l'Australie ?\n1.Sydney\n2.Melbourne\n3.Canberra\n"
};

int reponses[NB_QUESTIONS] = {1, 2, 3, 1, 3};

int Score = 0;

int main(){
    
    printf("###################################################\n######## Qui veux gagner des millions ?! ########## \n###################################################\n\n\n");

    printf("###################################################\n");
    printf("Score : %d\n",Score);
    printf("###################################################\n\n\n");

    printf("Question 1 :\n\n\n");

    printf("%c\n",questions[0]);

    for (int i=0; i< questions; i++) {
        printf("%d\n", i+1,questions[i]);
    }
        scanf("%d",&reponses);
        printf("Suspennnnnnce !\n\n\n");
        if (reponses==1)
        {
            printf("Bien joué !\n\n\n");
                printf("*Le score augmente de 10*\n\n\n");
                    Score++;
        }
        else
        {
            printf("Non !\n\n\n");
                printf("*Le score n'augmente pas :(*\n\n\n");
        }

    
    return 0;
}

