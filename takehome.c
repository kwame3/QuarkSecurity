/*****************************************
 ** File: takehome.c
 ** Project: Take Home Assignment
 ** Author:  Kwame Owusu-Boaitey
 ** Date: 1/24/2019   
 ** E-mail:  kwame@umbc.edu
 **
 **   This file contains code to remove dirty words 
 **   from a file
 ** 
 **
 **
 ***********************************************/


#include <stdio.h>
#include <string.h>
#include <ctype.h>


void readFromFiles(char file1[], char file2[])
{
  
  FILE *fp1;
  FILE *fp2;
  FILE *fp3;
  char buff1[255];
  char buff2[255];
  int size = 0;

   if ((fp1 = fopen(file1,"r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       //exit(1);
   }

   // Checks to see the number of lines in the input file
   while (fgets(buff1, sizeof(buff1), fp1))
     {
       size++;
     }
	
   fclose(fp1); 

   char dirtywords[size][255];

   
   if ((fp1 = fopen(file1,"r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       //exit(1);
   }

   int a = 0;

   // Grabs every dirtyword from the input file and stores it in a 2D array
   while (fscanf(fp1,"%s",buff1)==1)
     {
       strcpy(dirtywords[a], buff1);
       a++;
     }

   fclose(fp1);



   // Opens a new file
   fp3 = fopen("output.txt", "w");


   if ((fp2 = fopen(file2,"r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       //exit(1);
   }

 
    while (fscanf(fp2,"%s",buff2)==1)
     {
       
       int checker = 0;
       
       for (int i = 0; i < size; i++)
	 {

	   // Checks to see if the dirty word is a regular expression
	   if ((strstr(dirtywords[i], ".") != NULL) || ((strstr(dirtywords[i], "*") != NULL)))
	     {
	       int length = 0;
	       int counter = 0;

	       for (length = 0; dirtywords[i][length] != '\0'; length++)
		 {
		   if (isalpha(dirtywords[i][length]))
		     {
		       counter++;
		     }
		 }
	       


	       char dirtywordCopy[counter];

	       
	       int position = 0;

	       // Grabs the isolated word from the regular expression
	       for (int x = 0; dirtywords[i][x] != '\0'; x++)
		 {
		   if (isalpha(dirtywords[i][x]))
		     {
		       
		       dirtywordCopy[position] = dirtywords[i][x];
		       position++;
		     }
		 }
	       dirtywordCopy[position] = '\0';

	       // Sees if a word in the text file contains a part of the word that is a regular expression
	       if(strstr(buff2, dirtywordCopy) != NULL)
		 {
		   checker = 1;
		 }
	     }
	   
	   else if(strcmp(buff2, dirtywords[i]) == 0)
	     {
	       checker = 1;
	     }

	 }

       // writes the word to the file if it is not a dirty word or contains a dirty word (if the dirty word is a regular expression)
       if (checker == 0)
	 {
	   fprintf(fp3, buff2);
	   fprintf(fp3, " ");
	 }
       
     }
   
   
   

     


}


int main()
{
  char file1[] = "takehomesampleconfig.txt";
  char file2[] = "takehomesampleinput.txt";


  readFromFiles(file1, file2);

  return 0;
}
