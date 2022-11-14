#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    printf("Donnez votre choix: \n1) Backup de fichier.txt\n2) Editer le fichier\n3)Effacer le fichier\n");
    int ent;
    scanf("%d", &ent);
    switch(ent)
    {
        case 1:
            execlp("cp", "cp", "./fichier.txt", "./backup.txt", NULL);
            break;
        case 2:
            char buffer[20];
            char str[256];
            scanf("%19s", buffer);
            strcat(str, " echo ");
            strcat(str, "\"buffer\"");
            strcat(str, " > fichier.txt");
            char* echo = "echo";
            printf("%s", str);
            execlp("sh", "sh", "-c", str, (char *)0);
            break;
        case 3:
            execlp("rm", "rm", "fichier.txt", NULL);
            break;
    }
}
