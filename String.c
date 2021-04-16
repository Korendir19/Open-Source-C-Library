//STRING

#include <stdlib.h>
#include <stdio.h>

typedef struct
{
	int length; //amount of chars that will be shown
	int size; //amount of chars + null character
	char* c; //list of chars
} String;

String* initString()
{
	String* s = (String*)malloc(sizeof(String));
	s->length = 0;
	s->size = s->length + 1;
	s->c = (char*)malloc(s->size * sizeof(char));

	return s;
}

void findLength(String* s)
{	
	String* tempString = s; //temporary string to manipulate
	int counter; //counts through char array
	for (counter = 0; tempString->c[counter] != '\0'; counter) {
		counter++;
	}
	s->length = counter;
	s->size = s->length + 1;

	return s;
}
int returnLength(String* s)
{
	return s->length;
}
int returnSize(String* s)
{
	return s->size;
}
String* setString(char charSequence[])
{
	String* s = initString();
	s->c = charSequence, "\0";
	findLength(s);

	return s;
}
char* returnString(String* s)
{
	return s->c;
}

void main(int argc, char* argv)
{
	String* s = initString();

	s = setString("");
	printf_s("%d", returnLength(s));
}
