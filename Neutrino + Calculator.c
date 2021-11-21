#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  long int my_james;
  int action;
  long int likes;
  long int follow;
  long int comment;
  int which_mode;
  long int james_back;
  long int urjnt_jame;
  int tomain;

  printf("Enter how much james you have : ");
  scanf("%ld" , &my_james);
  printf("\t\n\nWhich Action do you want to take : ");
  printf("\n1.Follow");
  printf("\n2.Like");
  printf("\n3.Comment");
  printf("\n\n Enter Action: ");
  scanf("%d" , &action);
  if(action==1)
  {
    printf("\nWhich mode do you want to be :\n");
    printf("1.For 10 minute");
    printf("\n2.For 20 minute");
    printf("\n\n Enter Action: ");
    scanf("%d" , &which_mode);
    if(which_mode==1)
    {
     printf("\n\tFor 10 minute you need 359 james");
     if(my_james==359 || my_james>359)
     {
       printf("\n\tSuccess");
       printf("\nYou can be top for 10 minute");
       printf("\nenter [1] to main menu");
      scanf("%d" , &tomain);
      if(tomain==1)
      {
        main();
      }
     }
     else{
       printf("\n\tFail");
       printf("\n\tYou cant be top for 20 minute for top");
       urjnt_jame=my_james-359;
       urjnt_jame=-(urjnt_jame);
       printf("\nYou need %ld more james" , urjnt_jame);
       printf("\nenter [1] to main menu");
        scanf("%d" , &tomain);
        if(tomain==1)
        {
          main();
        }
     }
    }
    else if(which_mode==2)
    {
      printf("\n\tFor 20 minute you need 649 james");
      if(my_james==649 || my_james>649)
      {
        printf("\n\tSuccess");
        printf("\n\tYou Can be top for 20 minute");
        printf("\nenter [1] to main menu");
        scanf("%d" , &tomain);
        if(tomain==1)
        {
          main();
        }
      }
      else{
        printf("\n\tFail");
        printf("\n\tYou cant be top for 20 minute for top");
        urjnt_jame=my_james-649;
        urjnt_jame=-(urjnt_jame);
        printf("\nYou need %ld more james" , urjnt_jame);
        printf("\nenter [1] to main menu");
        scanf("%d" , &tomain);
        if(tomain==1)
        {
          main();
        }
      }
    }
    else{
      printf("\t\n\n###Invalid Action###\n");
      main();
    }
  }
  else if(action==2)
  {
    printf("\nAtleast you need 32 james to give this task");
    if(my_james==32 || my_james>32)
    {
        likes=my_james/8;
        printf("\t\nYou Can have %ld likes" , likes);
        //printf("\n\tBut you have to give your %ld james" , my_james);
        james_back=my_james-32;
        printf("\n\tYou reamaing james %ld" , james_back);
        printf("\nenter [1] to main menu");
        scanf("%d" , &tomain);
        if(tomain==1)
        {
            main();
        }
    }
    else{
        printf("\n\t###SORRY###");
        printf("\n\tYou Cant");
        printf("Enter [1] to main menu");
        scanf("%d" , &tomain);
        if(tomain==1)
        {
            main();
        }
    }
  }
  else if(action==3)
  {
    printf("\n\tYou has to have more than 30 james to give this task");
    if(my_james==30 || my_james>30 && my_james<=59)
    {
        comment=my_james/30;
        printf("\t\nYou can have %ld comment" , comment);
        james_back=my_james-30;
        printf("\nyour remaing james %ld" , james_back);
        //printf("\n\tBut you have to give your %ld james" , my_james);
        printf("\nenter [1] to main menu");
        scanf("%d" , &tomain);
        if(tomain==1)
        {
        main();
        }
    }
    else if(my_james)
    {
        // Aijayga theke soru korte hobe
    }
    else{
        printf("\n\tYou cant give this thaks couse you dont have 30 james");
        printf("\n\n###Soory");
        printf("Enter [1] to main menu");
        scanf("%d" , &tomain);
        if(tomain==1)
        {
            main();
        }
    }
  }
  else{
    printf("\t\t\n###Invalid Answer###\n");
    printf("Enter [1] to main menu");
        scanf("%d" , &tomain);
        if(tomain==1)
        {
            main();
        }
  }
  return 0;
}
