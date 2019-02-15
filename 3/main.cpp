// Lab_01
#include <iostream>
using namespace std;

struct date
{
	int day : 5;
	int month : 4;
	int year : 12;
};

enum alocation
{
	lux = 1, single_room, double_room, triple_room, apartments 
} ;

struct hotel
{
	char pasport;
	int room;
	date arrival_date;
	date departure_date;
	alocation type;
};

