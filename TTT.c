#include <stdio.h>
 int box[9]={'1', '2', '3','4','5','6','7','8','9'};

 int checkwin();

 void drawboard();

 int main()
{
 int player=1,i,choice;
  char mark;//x,o;
  do
  { 
    drawboard();
    player=(player%2)?1:2;
    printf("\nPLAYER_%d,ENTER YOUR CHOICE:",player);
    scanf("%d",&choice);
    mark=(player==1)?'X':'O';
    
          if (choice == 1 && box[0] == '1')
    {
             box[0] = mark;
    }
    else if (choice == 2 && box[1] == '2')
    {
        box[1] = mark;
    }
    else if (choice == 3 && box[2] == '3')
    {
        box[2] = mark;
    }
    else if (choice == 4 && box[3] == '4')
    {
        box[3] = mark;
    }
    else if (choice == 5 && box[4] == '5')
    {
        box[4] = mark;
    }
    else if (choice == 6 && box[5] == '6')
    {
        box[5] = mark;
    }
    else if (choice == 7 && box[6] == '7')
    {
        box[6] = mark;
    }
    else if (choice == 8 && box[7] == '8')
    {
        box[7] = mark;
    }
    else if (choice == 9 && box[8] == '9')
    {
        box[8] = mark;
    }
    else
    {
      printf("_____INVALID OPTION !______");
      
      player--;
    }
    
    i=checkwin();
    player++;
    }
    
    while(i==-1);
    if(i==1)
    {
      printf("==>PLAYER_%d WON",--player);
    }
    else
    {
      printf("\n**********_______GAME IS DRAW_______**********\n");
      
    }
    
  return 0;
}

 void drawboard()
{
   printf("\n PLAYER_1 (X)____PLAYER_2 (0)\n\n\n");


   printf("\n\n\t TIC TAC TOE \n\n"); 

   printf("      |      |      \n");
   printf("   %c  |  %c   |  %c  \n",box[0],box[1],box[2]);
   printf(" _____|______|_____ \n");
   printf("      |      |      \n");
   printf("   %c  |  %c   |  %c  \n",box[3],box[4],box[5]);
   printf(" _____|______|_____ \n");
   printf("      |      |      \n");
   printf("   %c  |  %c   |   %c  \n",box[6],box[7],box[8]);
   printf("      |      |      \n");
}
int checkwin()
{
  
    if (box[0] == box[1] && box[1] == box[2])
        return 1;
    else if (box[3] == box[4] && box[4] == box[5])   
        return 1;
    else if (box[6] == box[7] && box[7] == box[8])
        return 1;
    else if (box[0] == box[3] && box[3] == box[6])
        return 1;
    else if (box[2] == box[4] && box[4] == box[5])      
        return 1;
    else if (box[2] == box[5] && box[5] == box[8])
        return 1;
    else if (box[0] == box[4] && box[4] == box[8])      
        return 1;
    else if (box[2] == box[4] && box[4] == box[6])
        return 1;
    else if (box[0]!= '1' && box[1]!= '2' && box[2]!= '3' && box[3]!= '4' && box[4]!= '5' && box[5]!= '6' && box[6]!= '7' && box[8]!= '8' && box[9]!= '9') 
        return 0;
   
   else{
 
 return -1;
 }
}
