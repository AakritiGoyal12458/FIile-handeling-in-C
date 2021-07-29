

#include <stdio.h>
//stdio.h is a header file that has fopen() function  for opening c files 
//fopen() needs two arguments 1st is fle name and 2nd is mode to work with FILE
//we need a FILE pointer to point our txt file eg FILE *ptr
//ptr:you can manipulate file , read or write characters or strings anything. file is in our control 

//


int main()
{
    FILE *ptr = NULL;
    
    // ptr = fopen("cpr.txt", "r");
    
    //fgetc funtion 
    
    // char c = fgetc(ptr);
    // printf("the character i read was %c\n", c);
    // c = fgetc(ptr);
    // printf("the character i read was %c\n", c);
    
    //fgets function
    
    // char str[34];
    // fgets(str,3,ptr);  //this will print 1 character less 
    // printf("the string is %s\n",str);
    
//using write mode 

    // ptr = fopen("cpr.txt", "w"); //w will make sure to delete the existing data 
    
    // //fputc and fputs
    
    // fputc('o',ptr);
    // fputs("this is aakriti",ptr);
    

//using r+ mode : start fillling from starting   
    // ptr = fopen("cpr.txt", "r+"); //r+ will rewrite the characters at starting,it starts from starting of file and will end as soon characters end . 
    
    // fputc('o',ptr);
    // fputs("this is aakriti",ptr);
    
    //  eg:hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
    //  o/p:othis is aakritihhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
    
//using w+ mode:     
    // ptr = fopen("cpr.txt", "w+"); //will delete all the  existing data
    
    // fputc('o',ptr);
    // fputs("this is aakriti",ptr);
    // // eg:othis is aakritihhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
    // // o/p: othis is aakriti

//using a+ mode 
    ptr = fopen("cpr.txt", "a+"); //will add data at the end
    fputc('o',ptr);
    fputs("this is aakriti",ptr);
//   eg: othis is aakriti
//  o/p: othis is aakritiot        his is aakriti
    fclose(ptr);
    return 0;
}