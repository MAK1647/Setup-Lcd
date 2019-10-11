

#include <string.h>

#include "setstring.h"


#include <Arduino.h>

//Serial.begin(115200);
//Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
int substr(char *s,char *t)
{
char p[100];
char p2[100];
//int len = lenstr(s);
int indext = 0;
int indext2 = 0;
for (int i = 0; i <= 16; i++)
{
p[indext] = s[i];
p2[indext] = t[i];
indext++;
indext2++;
}
p[indext] = '\0';
p2[indext2] = '\0';
strcpy(s,p);
strcpy(t,p2);
return 1;
}




