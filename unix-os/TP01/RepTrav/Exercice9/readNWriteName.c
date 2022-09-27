#include <stdio.h> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <fcntl.h> 
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) { 
	const int MAX=1000;
	int f1, f2, n;
	char buf[MAX];
    char *srcFile = "name.txt";
    char *name = "Dylan KAUFFMANN";
	//vérification du nombre 
	if (argc != 2){
		fprintf(stderr, "erreur parametres\n"); exit(1); 
	}
	//ouverture readAndWrite du premier argument 
		f1=open(srcFile, O_CREAT | O_RDWR, S_IRWXU);
		if( f1 == -1){ /* mode lecture / ecriture */
			perror("ouverture fichier source impossible"); exit(2);
		}
        write(f1, name, strlen(name));
	//ouverture du deuxième argument en écriture et ?
		f2=open(argv[1], O_WRONLY|O_CREAT|O_APPEND, S_IRWXU);
		if( f2 ==-1 ){//700
			perror("creation fichier destinataire impossible"); exit(3); 
		}
		//lecture, ecriture.
		printf("Begin while\n");
		close(f1);
		f1=open(srcFile, O_CREAT | O_RDWR, S_IRWXU);
		if( f1 == -1){ /* mode lecture / ecriture */
			perror("ouverture fichier source impossible"); exit(2);
		}
		while ((n = read(f1, buf, MAX)) > 0){
			write(f2, buf, n);
            printf("J'ai lu %d char\n", n);
		}
		return 0; 
}