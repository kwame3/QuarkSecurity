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

/*
// Finds the dirtyword in a given line
int searchBeginningIndex(char line[], char dirtyword[])
{
    int x, i, j;
    
    // Finds the length of the dirty word
    for (x = 0; dirtyword[x] != '\0'; x++);

    // Finds the index of the dirty word
    for (i = 0, j = 0; line[i] != '\0' && dirtyword[j] != '\0'; i++)
    {
        if (line[i] == dirtyword[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
0;136;0c    }

    if (j == x)
      {
	// The substring has been found
	return (i - j);
      }

    // returns -1 if there is no dirty word in the given line
    else
      {
	return  -1;
      }

}

// Finds the dirtyword in a given line
int searchEndingIndex(char line[], char dirtyword[])
{
    int x, i, j;
    
    // Finds the length of the dirty word
    for (x = 0; dirtyword[x] != '\0'; x++);

    // Finds the index of the dirty word
    for (i = 0, j = 0; line[i] != '\0' && dirtyword[j] != '\0'; i++)
    {
        if (line[i] == dirtyword[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == x)
      {
	// The substring has been found
	return i;
      }

    // returns -1 if there is no dirty word in the given line
    else
      {
	return  -1;
      }

}
*/

/*
int isOneLetterWord(char line[], int firstIndex, int lastIndex)
{
  int length = 0;
  // Finds the length of the line
  for (length = 0; line[length] != '\0'; length++)
    {
      printf("%c", line[length]);
    }

  length--;
  
  printf("%d", firstIndex);
  printf(" ");
  printf("%d", lastIndex);
  printf(" ");
  printf("%d", length-1);
  printf(" ");
  printf("%d", length);
  printf(" ");
  printf("%c", line[firstIndex-1]);
  printf(" ");
  printf("%c", line[lastIndex+1]);
  printf(" ");
  printf("\n");

  // Check if word is at the beginning of the line
  //if (firstIndex == 0 && lastIndex != length-1 && !isalpha(line[lastIndex+1]) && !ispunct(line[lastIndex+1]))
  if (firstIndex == 0 && lastIndex != length-1 && !isalpha(line[lastIndex+1]))
    {
      //if(ispunct(line[lastIndex+1]))
      printf("Beginning Word ");
      printf("");
      return 1;
    }


  // Check if word is at the end of the line
  //else if (firstIndex != 0 && lastIndex == length-1 && !isalpha(line[firstIndex-1]) && !ispunct(line[firstIndex-1]) && (line[firstIndex-1] != ' '))
  else if (firstIndex != 0 && lastIndex == length-1 && !isalpha(line[firstIndex-1]) && (line[firstIndex-1] != ' '))
    {
      if (!ispunct(line[lastIndex+1]))
	{
	  printf("Ending Word");
	  printf("");
	  return 1;
	}
    }
  
  // Check if word is at the beginning and end of the line
  else if (lastIndex == length-1 && firstIndex == 0 && (!isalpha(line[firstIndex-1]) && !ispunct(line[firstIndex-1]) && !isalpha(line[lastIndex+1]) && !ispunct(line[lastIndex+1])))
    {
      printf("Only word on the line");
      printf("");
      return 1;
    }

   // Check if word is in the middle of the lin
  else if (firstIndex != 0 && lastIndex != length && !isalpha(line[firstIndex-1]) && !isalpha(line[lastIndex+1]))
    {
    //else if (firstIndex != 0 && lastIndex != length && (!isalpha(line[firstIndex-1]) && !ispunct(line[firstIndex-1]) && (!isalpha(line[lastIndex+1]) && !ispunct(line[lastIndex+1]))))
    
      if (!ispunct(line[firstIndex-1]) || !ispunct(line[lastIndex+1]))
	{
	  printf("Middle of line");
	  //printf("");
	  
	  return 1;
	}
    }


  return 0;
}
*/

int isFullWord(char line[], int firstIndex, int lastIndex)
{
  int length = 0;
  // Finds the length of the line
  for (length = 0; line[length] != '\0'; length++)
    {
      printf("%c", line[length]);
    }

  length--;
  
  printf("%d", firstIndex);
  printf(" ");
  printf("%d", lastIndex);
  printf(" ");
  printf("%d", length-1);
  printf(" ");
  printf("%d", length);
  printf(" ");
  printf("%c", line[firstIndex-1]);
  printf(" ");
  printf("%c", line[lastIndex+1]);
  printf(" ");
  printf("\n");
  
  // Check if word is at the beginning of the line
  //if (firstIndex == 0 && lastIndex != length-1 && !isalpha(line[lastIndex+1]) && !ispunct(line[lastIndex+1]))
  if (firstIndex == 0 && lastIndex != length-1 && !isalpha(line[lastIndex+1]))
    {
      //if(ispunct(line[lastIndex+1]))
      printf("Beginning Word ");
      printf("");
      return 1;
    }


  // Check if word is at the end of the line
  //else if (firstIndex != 0 && lastIndex == length-1 && !isalpha(line[firstIndex-1]) && !ispunct(line[firstIndex-1]) && (line[firstIndex-1] != ' '))
  else if (firstIndex != 0 && lastIndex == length-1 && !isalpha(line[firstIndex-1]) && (line[firstIndex-1] != ' '))
    {
      if (!ispunct(line[lastIndex+1]))
	{
	  printf("Ending Word");
	  printf("");
	  return 1;
	}
    }
  
  // Check if word is at the beginning and end of the line
  else if (lastIndex == length-1 && firstIndex == 0 && (!isalpha(line[firstIndex-1]) && !ispunct(line[firstIndex-1]) && !isalpha(line[lastIndex+1]) && !ispunct(line[lastIndex+1])))
    {
      printf("Only word on the line");
      printf("");
      return 1;
    }

   // Check if word is in the middle of the lin
  else if (firstIndex != 0 && lastIndex != length && !isalpha(line[firstIndex-1]) && !isalpha(line[lastIndex+1]))
    {
    //else if (firstIndex != 0 && lastIndex != length && (!isalpha(line[firstIndex-1]) && !ispunct(line[firstIndex-1]) && (!isalpha(line[lastIndex+1]) && !ispunct(line[lastIndex+1]))))
    
      if (!ispunct(line[firstIndex-1]) || !ispunct(line[lastIndex+1]))
	{
	  printf("Middle of line");
      //printf("");

	  return 1;
	}
    }

  return 0;
}

// Finds the dirtyword in a given line
int search(char line[], char dirtyword[])
{
    int x, i, j;
    
    // Finds the length of the dirty word
    for (x = 0; dirtyword[x] != '\0'; x++);



    /*
    // dirty word is length of 1
    if (x == 1)
      {
	printf("%s", dirtyword);
        printf("YO");
	for (i = 0, j = 0; line[i] != '\0' && dirtyword[j] != '\0'; i++)
	  {
	    if (line[i] == dirtyword[j])
	      {
		int index = i - j;
		return -1;
	      }
	  }
      }
    */














    
    // IN THE SEARCH< MUST ACCOUNT FOR LENGTH OF WORD BEING ONE














    
    // Finds the index of the dirty word
    for (i = 0, j = 0; line[i] != '\0' && dirtyword[j] != '\0'; i++)
    {
        if (line[i] == dirtyword[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == x)
      {
	int firstIndex = i - j;
	int lastIndex = i - j + x - 1;


	int checker = isFullWord(line, firstIndex, lastIndex);
      
	
	if (checker == 1)
	  {
	    // The substring has been found
	    return (i - j);
	  }
	printf("returning -1");
	return -1;

	/*
	printf("%d", firstIndex);
	printf(" ");
	printf("%d", lastIndex);
	printf("\n");
	*/

	/*
	// Checks to see if word is length of 1
	if (x == 1)
	  {
	    int checker = isFullWord(line, firstIndex, lastIndex);
	    if (checker == 1)
              {
                // The substring has been found
                return (i - j);
              }
	    //int checker = isOneLetterWord(line, firstIndex, lastIndex);
	    return -1;
	  }
	
	if (x > 1)
	  {
	    int checker = isFullWord(line, firstIndex, lastIndex);

	    if (checker == 1)
	      {
		// The substring has been found
		return (i - j);
	      }
	    return -1;
	  }
	*/
      }

    // returns -1 if there is no dirty word in the given line
    else
      {
	return  -1;
      }

}


// Deletes the dirtyword from given line
int delete_word(char line[], char dirtyword[], int index)
{
    int i, x;
    
    // Finds the length of the dirty word
    for (x = 0; dirtyword[x] != '\0'; x++);

    // Replaces the dirty word with empty space
    for (i = index; line[i] != '\0'; i++)
    {
        line[i] = line[i + x + 1];
    }

}
/*

int delete_word(char line[], char dirtyword[], int beginningIndex, int endingIndex)
{
    int i, x;


    // Replaces the dirty word with empty space
    for (i = beginningIndex; i < endingIndex; i++)
    {
      //line[i] = '\0';
      char letter = (char) 0;
      // the next character equals the last
      line[i] = letter;
      //line[i] = line[i + x + 1];
      i++;
    }

}
*/

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
       //printf("%s", buff1); 
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
   //while (fgets(buff1, sizeof(buff1), fp1))
     {
       strcpy(dirtywords[a], buff1);
       //printf("%s", dirtywords[i]);
       a++;
     }

   fclose(fp1);








   //printf("%s", dirtywords);
   for (int i = 0; i < size; i++)
     {
       //printf("%s", dirtywords[i]);
     }
   


   

   fp3 = fopen("output1.txt", "w");


   if ((fp2 = fopen(file2,"r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       //exit(1);
   }

 
   //fp3 = fopen("output.txt", "w");

   /*
   bool checker = false;
   while (fscanf(fp2,"%s",buff2)==1)
   //while(fgets(buff2, 255, fp2))
     {
       //printf("%s", buff2);
       for (int i = 0; i < size; i++)
	 {
	m
	   printf("%s", buff2);
	   
	   printf("%s", " ");
	   printf("%s", dirtywords[i]);
	   printf("%s", "\n");

	   
	   //if (strstr(buff2, dirtywords[i]) != NULL)
	   //if (buff2 == dirtywords[i])
	   //if(strcmp("YES", "YES") == 0)
	   if(strcmp(buff2, dirtywords[i]) == 0)
	     {
	       printf("%s", "00000000000");
	       checker = true;
	     }

	 }

       if (checker == false)
	 {
	   fprintf(fp3, buff2);
	   fprintf(fp3, " ");
	 }
       
       //printf("%d", 0);
       //buff2 = dirtyWords(dirtywords, size, buff2)
       //printf("%s", buff2);
       checker = false;
     }
   
   
   
*/
     

   int i, j, k = 0;


   //int index = 0;
   int length = 0;

   int index = -1;
   
   //int beginningIndex, endingIndex = 0;
   
    while(fgets(buff2, 255, fp2)) 
      {
	int counter = 0;
	 /*
        printf("%s", "11");
        printf("%s", buff2);
        printf("%s", "11");
        */

	for (int i = 0; i < size; i++)
	  {
	    index = search(buff2, dirtywords[i]);
	    

	    /*
	    beginningIndex = searchBeginningIndex(buff2, dirtywords[i]);
	    endingIndex = searchEndingIndex(buff2, dirtywords[i]);

	    printf("%d", beginningIndex);
	    printf("%s", " ");
	    printf("%d", endingIndex);
	    */
	    
	    // CHECK TO SEE IF LONGER THAN JUST THE DIRTYWORD (REGULAR EXPRESSION PART)
	    // %c prints out a character
	    //printf("%d", index);
	    //printf("%c", buff2[index]);





	    /*
	    char dirtyWordCopy[1];;
	    
	    while (!(index <= 0) && (isalpha(buff2[index-1])))
	      {	
		printf("%d", index);
		printf("%c", buff2[index-1]);
		delete_word(buff2, dirtyWordCopy[0], index-1);
		//printf("%c", buff2[25]);
	      }
	    */


	   
	    for (length = 0; buff2[length] != '\0'; length++);

	    printf("%s", "length");
	    printf(" ");
	    printf("%d", length);
	    printf("\n");
	    
	    /*
	    printf("%s", dirtywords[i]);
	    printf("%s", buff2);
	    printf("%d", index);
	    */
	    //if (index !=  - 1)
	    // Loops through and deletes every dirty word from a given line
	    //while (counter < length)
	      //while (index < length)
	    //while (beginningIndex !=  -1)
	    while (index != -1)
	    //while (index != -1 && counter < length)
	    //while (index < length)
	      {

	      // CHECK TO SEE IF LONGER THAN JUST THE DIRTYWORD (REGULAR EXPRESSION PART)

		/*
		while (!(index <= 0) && (isalpha(buff2[index-1])))
		  {




		    
		    printf("%d", index);
		    printf("%c", buff2[index-1]);
		    int length = 0;

		    char dirtyWordCopy[length+1];
		    dirtyWordCopy[0] = buff2[index-1];
		    
		    for (length = 0; dirtywords[i][length] != '\0'; length++)
		      {
			dirtyWordCopy[length+1] = dirtywords[i][length];
		      }
		    
		      printf(dirtyWordCopy);


		    

		    
		    //delete_word(buff2, dirtyWordCopy[0], index-1);
		    //printf("%c", buff2[25]);
		  }
		*/

		
		if (index != -1)
		  delete_word(buff2, dirtywords[i], index);
		
	      //printf("WOOO");
	      //delete_word(buff2, dirtywords[i], beginningIndex, endingIndex);
		
		
		
		// Checks to see if there is another dirty word after having removed a dirty word
		//index = search(buff2, dirtywords[i]);

	      //	      index = counter;
		index = search(buff2, dirtywords[i]);
		//index++
	      
	      //printf("WOOO1");
		/*beginningIndex = searchBeginningIndex(buff2, dirtywords[i]);
		  endingIndex = searchEndingIndex(buff2, dirtywords[i]);*/
		
		//printf(buff2);
		/*
		counter++;
		
		if (counter == length)
		  index = length;
		
		  printf("\n");
		  printf("\n");
		  printf("\n");
		  printf("%d", index);
		  printf("\n");
		  printf("\n");
		  printf("\n");
		*/
	      }
	  }
        //printf("%s", buff2);

	/*	
	printf("%s", "11");
	printf("%s", buff2);
	printf("%s", "11");
	*/
	
		
	fprintf(fp3, buff2);
      } 
   
    fclose(fp3);




    
    // a+ is used to write to file multiple times
    fp3 = fopen("output1.txt", "a+");


    fclose(fp2); 
    fclose(fp3); 
  

   
   /*

  fp1 = fopen(file1, "r");
  int size = 0;

  // Grabs an element
  fscanf(fp, "%s", buff1);
  cout << buff1 << endl;
  // The 9 represents the number of elements in each line
  
  
  fclose(fp1);





   // Opens the same file again to grab each 'dirty word'

  fp1 = fopen(file1, "r");
  
  char[][] dirtywords[size];

  // Searches through the file line by line to find the number of lines
  while (getline(infile1, temp))
    {

      int i = 0;
      
      dirtywords[i] = temp;

      cout << temp << endl;
      i++;
    }


  


  fp2 = fopen(file2, "r");


  // Searches through the file line by line
  while (getline(infile2, temp))
    {

      //temp = dirtyWords(dirtywords, size, temp)

      // Grabs an element
      stringstream ss(temp);
      cout << temp << endl;

    }
   */
}


int main()
{
  //char file1[] = "/afs/umbc.edu/users/k/w/kwame3/home/quark/takehomesampleinput.txt";
  //char file2[] = "/afs/umbc.edu/users/k/w/kwame3/home/quark/takehomesampleconfig.txt";
  char file1[] = "takehomesampleconfig.txt";
  //char file2[] = "input.txt";
  char file2[] = "takehomesampleinput3.txt";


  readFromFiles(file1, file2);

  return 0;
}
