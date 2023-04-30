#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int playerX = 0; // player's initial position
int playerY = 0;


void Tutorial(){
	
	char option;
	printf("Val's adventure is an adventure/puzzle game where your goal is to take Val to the end of her adventure in this dungeon where she's looking for an ancient cursed weapon.\n\n");
	printf("In each level the player must move to get a key to open the closed door.\n\n"
	 "W: Up\n"
	 "A: Left\n"
	 "S: Down\n"
	 "D: Right\n"
	 "I: Interacts with object above\n\n");
	 
	 printf("                                                                   Press M to go back to the Menu: \n\n   ");  
	 fflush(stdin);
	 option = getchar();
	 
	 switch(option){
	 	
	 	case 'M': 
	 		system("cls || clear");
    		Beep(650, 150);
    		Menu();
    		break;
		
		default: 
		system("cls || clear");
		printf("\n");
		printf("Choose a valid option...");
		sleep(1);
		Tutorial();
    		
	 }
	 
}
char map[15][15] = { // map's bidimentional array
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
};
void Map() // draws the map on the screen
{
    system("cls"); 

    for (int y = 0; y < 15; y++)
    {
        for (int x = 0; x < 15; x++)
        {
            if (x == playerX && y == playerY) // draws the player at the current position
            {
                printf("P");
            }
            else
            {
                printf("%c", map[y][x]); // draws the corresponding character on the map
            }
        }
        printf("\n");
    }
}

void Start(){
	
    char input;

    Map();

    while (1) // endless loop
    {
        input = getch(); // reads the keyboard key that was pressed

        switch (input)
        {
        case 'w':
            if (playerY > 0) // up
            {
                playerY--;
            }
            break;

        case 'a':
            if (playerX > 0) // left
            {
                playerX--;
            }
            break;

        case 's':
            if (playerY < 15 - 1) // down
            {
                playerY++;
            }
            break;

        case 'd':
            if (playerX < 15 - 1) // right
			{
            	playerX++;
			}
			break;
		
		default:
			break;
	}
	
	Map();
}
	return 0;
}



void Menu(){
	
	system ("cls || clear");
	
	int option;
	
    
    printf("                                             \033[1;41m========================================================\033[0;40m\n");
    printf("                                             \033[1;41m|                                                       |\033[0;40m\n");
    printf("                                             \033[1;41m|                  Welcome to Val's Adventure	       |\033[0;40m\n");
    printf("                                             \033[1;41m|                                                       |\033[0;40m\n");
    printf("                                             \033[1;41m========================================================\033[0;40m\n\n"); 
    
    
	Beep(440, 100); 
    Beep(523, 100); 
    Beep(659, 500);  
	Beep(659, 100); 
    Beep(523, 100); 
    Beep(440, 500);  
                                           
	printf("                                \033[44m 1. Start\033[0m             \033[43m2. Tutorial\033[0m            3. Leave\n\n\n"); 
	printf("                                                         \033[1;41mChoose your option:\033[m\n\n   ");  
	
	scanf("%d", &option);
	
	switch(option){
	
	case 1:	
		system("cls || clear");
	    Beep(650, 150);
		Start();
		break;
	
	case 2: 
		system ("cls || clear");
		Beep(660, 150);
		Tutorial();
	    break;
    
	case 3: 
		system("cls || clear");
		printf("\n");
		printf("Saindo...");
		Beep(262, 500); 
	    Beep(196, 500); 
	    Beep(165, 1000); 
	    Beep(131, 1000); 
		return 0;
	
	default: 
		system("cls || clear");
		printf("\n");
		printf("Choose a valid option...");
		sleep(1);
		Menu();
	
	}
	
}

int main(){
	
	Menu();
	return 0;
}