#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int playerX = 7; // player's initial position
int playerY = 7; 


void Tutorial(){
	
	char option;
	system("cls || clear");
	 printf("\n\n                                  Val's adventure is an adventure/puzzle game where your goal is to take Val to the end of her adventure\n"
	 "                                                  in this dungeon where she's looking for an ancient cursed weapon.\n\n");
	 printf("                                              In each level the player must move to get a key to open the closed door.\n\n\n");
	 printf("                                                                             W: Up\n");
	 printf("                                                                     A: Left\t     D: Right\n");
	 printf("                                                                             S: Down\n\n\n");
	 printf("                                                                I: Interacts with object above\n\n");
	 
	 printf("                                                                &: symbol representing the player\n\n");
	 printf("                                                                *: symbol representing a wall\n\n");
	 printf("                                                                @: symbal representing a key\n\n");
	 printf("                                                                D: symbol representing a close door\n\n");
	 printf("                                                                =: symbol representing a open door\n\n");
	 printf("                                                                O: symbol representing a botton that the player can interact\n\n");
	 printf("                                                                #: symbol representing a thorn. The player lost hp when he touches it.\n\n");
	 printf("                                                                >: symbol representing a teleportation\n\n");
	 printf("                                                                ¬: symbol representing a level 1 monster\n\n");
	 printf("                                                                k: symbol representing a level 2 monster\n\n\n");
	 printf("                                                                Press M to go back to the Menu: \n\n\n\n   ");  
	 
	 printf("                                         --------------------------------------------------------------------------------\n");
	 fflush(stdin);
	 option = getchar();
	 
	 switch(option){
	 	
	 	case 'm': 
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

    {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
    {'*', ' ', '*', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'*', ' ', '*', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'*', ' ', ' ', ' ', '*', '#', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '*'},
    {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'*', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D'},
    {'*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '*'},
    {'*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*'},
    {'*', ' ', '*', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', '*', ' ', ' ', '*'},
    {'*', '@', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*'},
    {'*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*'},
    {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}
};
void Map(){ // draws the map on the screen

    system("cls"); 
    printf("\n\n\n\n\n\n\n");
    int y;
    int x;
    for (y = 0; y < 15; y++)
    {
        for (x = 0; x < 15; x++)
        {
            if (x == playerX && y == playerY){   // draws the player at the current position
            
                printf("        &");
            }
            else{
                printf("        %c", map[y][x]);       // draws the corresponding character on the map
            }
        }
        printf("\n");
    }
}

void Start(){ //game 
	
    char input;
    char interaction;
    int hp = 5;
    Map();
    printf("\n\n                                                                           HP: %d\n\n", hp);

    while (hp > 0) // endless loop
    {
        input = getch();             // reads the keyboard key that was pressed
				
        switch (input){
        	
        case 'w':
        case 'W':
            if (playerY > 1 && map[playerY - 1][playerX] != '*'){        // up
                
                if(map[playerY - 1][playerX] == '#'){
                	hp--;
                	playerX = 7, playerY = 7;
				}
				else{
					playerY--;
				}	
            }
            break;

        case 'a':
        case 'A':
            if (playerX > 1 && map[playerY][playerX - 1] != '*'){        // left

                if(map[playerY][playerX - 1] == '#'){
                	hp--;
                	playerX = 7, playerY = 7;
				}
				else{
					playerX--;
				}	
            }
            break;

        case 's':
        case 'S':
            if (playerY < 15 - 2 && map[playerY + 1][playerX] != '*' && map[playerY + 1][playerX] != '@' ){   // down
            
                if(map[playerY + 1][playerX] == '#'){
                	hp--;
                	playerX = 7, playerY =7;
				}
				else{
					playerY++;
				}
            }
            break;

        case 'd':
        case 'D':
            if (playerX < 15 - 2 && map[playerY][playerX + 1] != '*'){   // right
            		
				if(map[playerY][playerX + 1] == '#'){
                	hp--;
                	playerX = 7, playerY = 7;
				}
				else{
					playerX++;
				}	
			}
			break;
			
		case 'i':
		case 'I':
			if(map[playerY + 1][playerX] == '@')
			{
				map[12][1] = ' ';
				map[7][14] = '=';
			}
			break;
			
		
		
		default:
			break;
	}
	
	Map();
    printf("\n\n                                                                      HP: %d\n", hp);
}

	if(hp == 0)
	{
		printf("\n\n\n                                                                    Game Over                                                         ");
	}
	return 0;
}



void Menu(){
	
	system ("cls || clear");
	
	int option;
	
    
   	printf("\n\n\n\n\n\n                                        --------------------------------------------------------------------------------\n");														
    printf(" \n\n\n\n                                                                      Choose your option:\n\n   ");                              
	printf("                                                   1. Start           2. Tutorial           3. Leave\n\n\n"); 
	printf("                                         --------------------------------------------------------------------------------\n");  
	
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
