// StringFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>

int mystrcmp(const char*, const char*); // prototype
char* mystrcpy(char*, const char*);
char* mystrcat(char*, const char*);

int main()
{
	const char *str = "Now is the time for all good men to come to the aid of the party";
	int retval;
	char *copy = (char *)malloc(strlen(str) + 1);
	char cat[250];
	
	retval = mystrcmp(str, "hello, is it me you're looking for?");  //returns negative value: -26 (78-104) N - h
	retval = mystrcmp("hello, is it me you're looking for?", str);	//returns positive value: 26 (104-78) h - N
	retval = mystrcmp(str, "Now is the time for all good men to come to the aid of the party"); //returns 0, equal

	retval = strcmp("hello, is it me you're looking for?", str); // returns 1
	retval = strcmp(str, "hello, is it me you're looking for?"); // returns -1

	mystrcpy(copy, str);

	mystrcpy(cat, "ABC123");
	mystrcat(cat, str);

}

char* mystrcat(char *target, const char *str) {
	int len, i = 0;

	len = strlen(target);

	while (str[i] != '\0') {
		target[len++] = str[i++];
	}

	target[len] = '\0';

	return 0;
}

char* mystrcpy(char* target, const char* source) {
	int i= 0;

	while (source[i] != '\0') {
		target[i] = source[i];
		i++;
	}

	/* terminate the string */
	target[i] = '\0';

	return 0;
}

int mystrcmp(const char *s1, const char *s2) {
	int len = strlen(s1); // change this to your function
	int i, vals1 = 0, vals2 = 0;

	for (i = 0; i < len; i++) {
		if (s1[i] != s2[i]) {
			return s1[i] - s2[i];
		}
	}

	return 0;
}


