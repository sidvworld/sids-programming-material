#include <stdio.h>

struct city {
	char name[30];
	double lat;
	double lon;
};

const struct city city_list[] = 
{
	{"Paris	", 48.85, 2.35},
    {"Antananarivo", -18.933, 47.517},
    {"Reno	", 39.517, -119.817},
    {"Los Angeles", 34.050, -118.250},
    {"Detroit	", 42.333, -83.033},
    {"Windsor	", 42.283, -83.000}
};

void display_city(struct city c){
	printf("%s", c.name);
	printf("	%f", c.lat);
	printf("	%f", c.lon);
	printf("\n");
}

void diplay_city_name(struct city c){
	printf("%s\n", c.name);
}

void display_direction_to(struct city c1, struct city c2){
	if (c1.lat > c2.lat && c1.lon > c1.lat){
		printf("	%s is northeast of %s\n", c1.name, c2.name);
	}
	
	if (c1.lat > c2.lat && c1.lon < c1.lat){
		printf("	%s is northwest of %s\n", c1.name, c2.name);
	}
	
	if (c1.lat < c2.lat && c1.lon > c1.lat){
		printf("	%s is southeast of %s\n", c1.name, c2.name);
	}
	
	if (c1.lat < c2.lat && c1.lon < c1.lat){
		printf("	%s is southwest of %s\n", c1.name, c2.name);
	}
}


int main (void){
	for (int i = 0; i < 6; i++){
		display_city(city_list[i]);	
	}
	
	for (int i = 0; i < 6; i++){
		diplay_city_name(city_list[i]);
		for (int j = 0; j < 6; j++){
			display_direction_to(city_list[i], city_list[j]);
		}
	}
	
	return 0;
}
