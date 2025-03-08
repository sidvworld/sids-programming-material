/* My structure is on the discography of Frank Ocean. 
 * It includes whether the music is
 * - the name of the music
 * - an album, single, or EP
 * - what year it was released
 * - how many songs are on it
 * - the duration in minutes of the music.
 * */
 
#include <stdio.h>

struct frank{
	char name[20];
	char type[6];
	int year;
	int number_songs;
	int duration;
};

const struct frank discography[] =
{
	{"Swim Good", "Single", 2011, 1, 4},
	{"Novacane", "Single", 2011, 1, 5},
	{"channel ORANGE", "Album", 2012, 17, 55},
	{"Blonde	", "Album", 2016, 17, 60},
	{"Chanel	", "Single", 2017, 1, 3},
	{"Biking	", "Single", 2017, 1, 4},
	{"Lens	", "Single", 2017, 1, 3},
	{"Provider", "Single", 2017, 1, 4},
	{"Moon River", "Single", 2018, 1, 3},
	{"DHL	", "Single", 2019, 1, 4},
	{"In My Room", "Single", 2019, 1, 2},
	{"Side A Acoustic", "EP", 2020, 2, 6}
	
};

int main() {
	printf("Name		Type	Year	#of Songs	Duration (min)\n");
    for (int i = 0; i < 12; i++) {
        printf("%s", discography[i].name);
        printf("	%s", discography[i].type);
        printf("	%d", discography[i].year);
        printf("	%d", discography[i].number_songs);
        printf("		%d", discography[i].duration);
        printf("\n");
    }
    return 0;
}
