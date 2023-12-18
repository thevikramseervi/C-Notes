#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int length(char s[10]);
void concat(char s1[10],char s2[10]);
void compare(char s1[10], char s2[10]);
int main()
{
  char s1[10],s2[10];
  int len1,len2;
  printf("Enter the string 1 ");
  scanf("%s",s1);
  printf("Enter the string 2 ");
  scanf("%s",s2);
  len1=length(s1);
  len2=length(s2);
  printf("length of s1 = %d\n",len1);
  printf("length of s2 = %d\n",len2);
  compare(s1,s2);
  concat(s1,s2);
}

int length(char s[10])
{
  int i=0;
  while (s[i]!='\0')
    i++;
  return i;
}

void compare(char s1[10], char s2[10])
{
  int i=0;
  while (s1[i]==s2[i] && s1[i]!='\0')
    i++;
  if (s1[i]=='\0'&&s2[i]=='\0')
    printf("strings are same\n");
  else
    printf("strings are not same\n");
}

void concat(char s1[10],char s2[10])
{
  char s3[10];
  int i=0,j=0;
  while (s1[i]!='\0')
    {
      s3[i]=s1[i];
      i++;
    }
  while (s2[j]!='\0')
    {
      s3[i+j]=s2[j];
      j++;
    }
  s3[i+j]='\0';
  printf("concatenated string is %s\n",s3);
}
