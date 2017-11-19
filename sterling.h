#pragma once

struct sterling
{
	int pounds;
	int shillings;
	int pence;
};


sterling make_sterling(int pounds, int shillings, int pence);
sterling make_sterling(int pence);
sterling add(sterling s1, sterling s2);
void print(sterling& s); 
void read(sterling* s);
