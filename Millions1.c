#include <stdio.h>
#include <stdlib.h>

#define NB_QUESTIONS 5
#define points 10

int main ();


char* questions[NB_QUESTIONS] = {
    "Quelle est la couleur du cheval blanc d'Henri IV?\n1.Blanc\n2.Rouge\n3.Noir\n",
    "Date de la prise de la Bastille ?\n1.1750\n2.1789\n3.1800\n",
    "Quel est le plus grand océan du monde ?\n1.Océan Atlantique\n2.Océan Indien\n3.Océan Pacifique\n",
    "Qui a écrit Les Misérables ?\n1.Victor Hugo\n2.Emile Zola\n3.Marcel Proust\n",
    "Quelle est la capitale de l'Australie ?\n1.Sydney\n2.Melbourne\n3.Canberra\n"
};

int reponses[NB_QUESTIONS] = {1, 2, 3, 1, 3};



int main(){

    int Score = 0;
    int reponse;

    printf("###################################################\n######## Qui veux gagner des millions ?! ########## \n###################################################\n\n\n");

    printf("###################################################\n");
    printf("Score : %d\n",Score);
    printf("###################################################\n\n\n");



    for (int i=0; i<NB_QUESTIONS; i++) {
        printf("\nQuestion %d\n\n%s",i + 1, questions[i]);

    
    printf("\nVotre réponse est : ");
    scanf("%d",&reponse);
    
    printf("\nSuspennnnnnce !\n\n\n");
    
    if (reponse == reponses[i])
    {
        printf("Bien joué !\n\n\n");
        printf("*Le score augmente de %d*\n\n\n",points);
        Score+= points;
    }
    else
    {
        printf("Non !\n\n\n");
        printf("*Le score n'augmente pas :(*\n\n\n");
    }
}

    printf("###################################################\n");
    printf("######## Partie Terminée ##########\n");
    printf("###################################################\n");

    int totalpoints = NB_QUESTIONS * points;
    int pourcentage = (Score * 100) / totalpoints;

    printf("Score total : %d/%d\n", Score, totalpoints );
    printf("Votre pourcentage de bonnes réponses est : %d%%\n\n", pourcentage);

    if (pourcentage > 50){
        printf("Bien joué, les millions sont à toi\n");
    }
    else
    {
        printf("Dommage, tu reste pauvre !\n");
    }

    return 0;
}

