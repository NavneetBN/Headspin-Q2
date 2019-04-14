/******* Write a function that takes a list of strings and prints them one per line in a  rectangular frame
           Eg: List: [“Hello”,”World”,”in”,”a”,”Frame”]
           Output:  *********
                    * Hello *
                    * World *
            	      * in    *
                    * a     *
           	        * frame *
 		                *********
                                                                              *************************/

#include <stdio.h>

int main()
{

      char s[100]={0};
  int l=0,i=0, c = 0, big = -1,n=0,a=0,p=0,k=0,t=0;
  
    printf("Enter sentence [100char]: "); 
  
    while (n < 99 && (c = getchar ()) != EOF && c != '\n')
        s[n++] = c;

    s[n] = '\0';        //ending

    if (n == 99)                                         //discard empty space
        while ((c = getchar ()) != '\n' && c != EOF);
  
  
  

  for(i=0; s[i] !='\0'; i++)l=l+1;                     // length of sentence
  
  for(int i = 0 ; i < l ; i++)
  {
    if(s[i] != ' ')
    {
      t++;
    }
    else
    {
      if(t > big) big = t;
      t = 0;
    }
  }  if(t > big) big = t;
 
  printf("\n");                

  
  
  
   for(i=0; i<big+2;++i)printf("*");

printf("\n*");

   for (c = 0; c < n; c++)
    {
        
        if (s[c] == ' '|| s[c] == EOF)                                    //to check for spaces
        {
            if(p<=big)
           {
           for(k=0; k<(big-p); k++)printf (" ");                   
           }p=0;
            
            printf ("*\n*");
            
        }
        else
        {  ++p; 
            printf ("%c", s[c]);                                  //to print the string
           
        }    
     
    }
            if(p<=big)
            for(k=0; k<(big-p); k++)printf (" ");                 // to compensate spaces
            printf("*\n");
            for(i=0; i<big+2;++i)printf("*");                     //to print the stars
        
    return 0;
}
