#include <stdio.h>
#include <string.h>

int getHash(char[], int);
int getNumCollision(char *, int, int);
int getEmpty(char *, int, int);

void main(){
    int k, lines = 0;
    scanf("%d", &k);

    FILE *fp;
    fp = fopen("input.txt", "r");

    if (fp != NULL){

    char ch;
    while(!feof(fp)){
        ch = fgetc(fp);
        if(ch == '\n'){
            lines++;
        }
    }

    fclose(fp);
    fp = fopen("input.txt", "r");

	int hashes[k];

	int f;
	for (f = 0; f < k; f++)
		hashes[f] = 0;

    char input[51];

    while (fscanf(fp, "%[^\n]\n", &input) != EOF){
		/*char *pos;
		if ((pos=strchr(input, '\n')) != NULL)
    	*pos = '\0';
*/
        if (input[0] == '\n' || input[0] == '\0');
        else{
            int inHash = getHash(input, k);
            hashes[inHash]++;
        }
    }

	int collisions = 0;
	int empty = 0;

    for (f = 0; f < k; f++){
		if (hashes[f] > 1)
			collisions++;
		else if (hashes[f] == 0)
			empty++;
			
	}

    printf("The number of entries with collision is %-5d\n", collisions);
    printf("The number of unused entries is %-5d\n", empty);
    }
}

int getHash(char input[], int k){
    int i, hash = 0;

    for (i = 0; input[i] != '\0'; i++){
        hash += (int)input[i];
    }

    hash %= k;
	/*printf("%s , %d\n", input, hash);*/
    return hash;
}

