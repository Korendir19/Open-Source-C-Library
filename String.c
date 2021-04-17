//STRING

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

//String Construction
typedef struct
{
	int length; //amount of chars that will be shown
	int size; //amount of chars + null character
	char* string; //list of chars
} String;
String* initString()
{
	String* s = (String*)malloc(sizeof(String));
	s->length = 0;
	s->size = s->length + 1;
	s->string = (char*)malloc(s->size * sizeof(char));

	return s;
}

//Finders, Setters, and Getters
void findLength(String* s)
{
	String* tempString = s; //temporary string to manipulate
	int counter; //counts through char array
	for (counter = 0; tempString->string[counter] != '\0'; counter) {
		counter++;
	}
	s->length = counter;
	s->size = s->length + 1;
}
int returnLength(String* s)
{
	return s->length;
}
int returnSize(String* s)
{
	return s->size;
}
void setString(String* s, char charSequence[])
{
	s->string = charSequence, "\0";
	findLength(s);
}
char* returnString(String* s)
{
	return s->string;
}

//Functions
char* compareString(String* s1, String* s2)
{
	return s1->string == s2->string ? "true" : "false";
}
char* compareLength(String* s1, String* s2)
{
	return s1->length == s2->length ? "true" : "false";
}
void replaceString(String* s, char* newS)
{
	s->string = newS;
}
String* copyString(String* s)
{
	return s;
}
int findChar(String* s, char toFind)
{
	for (int i = 0; i < s->length; i++) {
		if (s->string[i] == toFind) {
			return i;
		}
	}

	return -1;
}