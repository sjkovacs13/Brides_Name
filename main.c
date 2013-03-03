//
//  main.c
//  Bride's Name
//
//  Created by Samuel Kovacs on 2/19/13.
//  Copyright (c) 2013 Samuel Kovacs. All rights reserved.
//
//  This program takes in a groom's last name and a bride's full name and outputs the bride's original name and her traditional and contemporary married names.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    // The first variable is the groom's last name.
    char groomLast[81];
    
    // This asks for the groom's last name.
    printf("Please enter groom's last name.\n");
    printf("Last name: ");
    scanf("%s", groomLast);
    
    // Next, a boolian is needed but because you cannot scan for a boolian, two variables are needed: one for the user's input and one for the boolian. The user is asked if the bride has a last name or not.
    int brideName;
    bool brideMidName;
    printf("Does the bride have a middle name? (enter 1 for yes and 0 for no) ");
    scanf("%i", &brideName);
    
    // If the user inputs 1, the boolian is set to 1 and if the user inputs 0, the boolian is set to 0.
    if (brideName==1)
    {
        brideMidName=1;
    }
    
    else brideMidName=0;
    
   
    // The next variables needed are the bride's first, middle, and last names, as well as a space and a hypen.
    char brideFirst[81];
    char brideMid[81];
    char brideLast[81];
    char space[81]=" ";
    char hyphen[81]="-";
    
    // If the bride has a middle name this is executed.
    if (brideMidName)
    {
        // The user is asked to enter the bride's names.
        printf("Please enter bride's first, middle, and last names.\n");
        printf("First name: ");
        scanf("%s", brideFirst);
        printf("Middle name: ");
        scanf("%s", brideMid);
        printf("Last name: ");
        scanf("%s", brideLast);
    }
    
    // If the bride does not have a middle name this is executed.
    else
    {
        // The bride's first and last names are asked for here. 
        printf("Please enter bride's first and last names.\n");
        printf("First name: ");
        scanf("%s", brideFirst);
        printf("Last name: ");
        scanf("%s", brideLast);
    }
    
    // The bride's original name is printed if it has a middle name, along with the groom's last name.
    if (brideMidName)
    {
        printf("Bride's maiden name: %s %s %s\n", brideFirst, brideMid, brideLast);
        printf("Groom's last name: %s\n", groomLast);
    }
    
    // The bride's original name is printed if it doesn't have a middle name, along with the groom's last name.
    else
    {
        printf("Bride's maiden name: %s %s\n", brideFirst, brideLast);
        printf("Groom's last name: %s\n", groomLast);
    }
    
    // Here the names are put together for contemporary and traditional names with a middle name and displayed.
    if (brideMidName)
    {
        strcat (brideLast, hyphen);
        strcat (brideLast, groomLast);
        printf("Bride's contemporary name: %s %s %s\n", brideFirst, brideMid, brideLast);
        
        strcat (brideMid, space);
        strcat (brideMid, groomLast);
        printf("Bride's traditional name: %s %s\n", brideFirst, brideMid);
        
    }
    
    // Here the names are put together for contemporary and traditional names without a middle name and displayed.
    else
    {
        printf("Bride's traditional married name: %s %s\n", brideFirst, groomLast);
        
        strcat (brideLast, hyphen);
        strcat (brideLast, groomLast);
        
        printf("Bride's contemporary married name: %s %s", brideFirst, brideLast);
    }
    
    return 0;
}

