#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int playerX = 0; // player's initial position
int playerY = 0; 


void Tutorial(){
	
	char option;
	system("cls || clear");
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
	 	
	 	case 'm': 
	 		system("cls || clear");
    			Beep(650, 150);
    			Menu();
    			break;
    	
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
void Map(){ // draws the map on the screen

    system("cls"); 

    for (int y = 0; y < 15; y++)
    {
        for (int x = 0; x < 15; x++)
        {
            if (x == playerX && y == playerY){   // draws the player at the current position
            
                printf("P");
            }
            else{
            
                printf("%c", map[y][x]);       // draws the corresponding character on the map
            }
        }
        printf("\n");
    }
}

void Start(){ //game 
	
    char input;

    Map();

    while (1) // endless loop
    {
        input = getch();             // reads the keyboard key that was pressed

        switch (input){
        	
        case 'w':
            if (playerY > 0){        // up
            
                playerY--;
            }
            break;

        case 'a':
            if (playerX > 0){        // left
            
                playerX--;
            }
            break;

        case 's':
            if (playerY < 15 - 1){   // down
            
                playerY++;
            }
            break;

        case 'd':
            if (playerX < 15 - 1){   // right
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
	
    
   
    printf(" \n\n\n\n\n\n\n\n                                                         Choose your option:\n\n   ");                              
	printf("                                        1. Start           2. Tutorial           3. Leave\n\n\n"); 
	  
	
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
		printf("Leaving...");
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
