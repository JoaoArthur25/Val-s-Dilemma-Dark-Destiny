#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <pthread.h>
#include <unistd.h>

int playerX = 7; // player's initial position
int playerY = 7; 

void Delay(int segundos)
{
    int milli_seconds = segundos;
 
    clock_t start_time = clock();
 
    while (clock() < start_time + milli_seconds)
        ;
    }

void playNote(int frequency, int duration) {
    Beep(frequency, duration);
}

void Menu();

int intro_music_break= 0;

void *beep_thread(void *arg){
	while(intro_music_break == 0){
	int tempo = 1500;
	playNote(440, tempo);
    playNote(415, tempo);
    playNote(440, tempo);
    playNote(415, tempo);
    playNote(523, tempo);
    playNote(494, tempo);
    playNote(466, tempo);
}
	
}


void Intro(){
	
	int frame = 0;
    int x = 0;


    while (frame < 600) { 
        system("cls||clear"); 
    printf("\n\n Creators:\n-Igor 'Radicrow' Acatauassu\n-Joao Arthur 'JoaoArthur25' da Silva\n-Kelton 'KeltonSousa' Sousa\n\n");
      Delay(3000);
    printf("\n                       .\\^/.\n");
    printf("                     . |`|/| .\n");
    printf("                     |\\|\\|'|/|\n");
    printf("                  .--'-\\`|/-''--.\n");
    printf("                   \\`-._\\|./.-'/\n");
    printf("                   >`-._|/.-'<\n");
    printf("                   '~|/~~|~~\\|~'\n");
    printf("                         |\n\n");
    printf("Team Scarlet Dawn presents:\n\n");
  
    

	x++;

        if (x > 10) {
            x = 0;
        }

        Sleep(50);

        frame++;
        Delay(4000);
         printf("Loading game...");
		 Delay(2000);
		 
		 system("cls||clear");
		  printf("\n\n");

	 pthread_t tid;
    pthread_create(&tid, NULL, beep_thread, NULL);

	printf("In a world ruled by a corrupt empire, a dragonborn ex-soldier named Val takes up arms \n");
	printf("against the forces of tyranny. She has seen the atrocities committed by the empire firsthand,\n");
	printf("and she is determined to put an end to their reign of terror.\n");
	Delay(6000);
	printf(".");
	Delay(500);
	printf(".");
	Delay(500);
	printf(".\n\n");
	printf("One day, Val hears rumors of a powerful artifact hidden deep within a dangerous dungeon. \n");
	printf("Many have tried to claim this artifact before, but none have returned to tell the tale. Despite \n");
	printf("the risks, Val sees this as an opportunity to gain an edge against the empire and bring them \n");
	printf("to their knees.\n");
	Delay(6000);
	printf(".");
	Delay(500);
	printf(".");
	Delay(500);
	printf(".\n\n");
	Delay(500);
	printf("With sword in hand and armor on her back, Val sets out to explore the treacherous dungeon\n");
	printf("and claim the artifact for herself. But she soon realizes that the dangers she faces are greater \n");
	printf("than she ever imagined. Deadly traps, fierce monsters and dark magic stand in her way, she \n");
	printf("she must use all her skills and cunning to survive.\n");
	Delay(6000);
	printf(".");
	Delay(1000);
	printf(".");
	Delay(500);
	printf(".\n\n");
	printf("Will Val be able to overcome the challenges of the dungeon and claim the artifact? And if she \n");
	printf("does, will it be enough to help her achieve her ultimate goal of taking down the corrupt\n");
	printf("empire? Only time will tell...\n");
	Delay(6000);

	
	
	
	system("cls||clear");

    printf("                      8@@@:    g_          -@@@g            \n");
    Delay(200);
    printf("                     8@@@m     g@XeUAmr     X@@@g           \n");
    Delay(200);
    printf("                    %%@@@@_    X@@@@@#*-     _@@@@0          \n");
    Delay(200);
    printf("                   %%@@@@U    _@@@GyyG@@@x    8@@@@%%         \n");
    Delay(200);
    printf("                  %%@@@@@-    @@_      _g@8   ^@@@@@%%        \n");
    Delay(200);
    printf("                 8@@@@@U     c;        r@@    @@@@@@8       \n");
    Delay(200);
    printf("                8@@@@@@^            -*8@@,    3@@@@@@D      \n");
    Delay(200);
    printf("               8@@@@@@@@Q,      r#@@@@Dr     S@@@@@@@@#     \n");
    Delay(200);
    printf("              8@@@@@@8  -c    u@@@8r-           g@@@@@@G    \n");
    Delay(200);
    printf("             8@@@@@@@_       *@@@_              ^@@@@@@@G   \n");
    Delay(200);
    printf("            D@@@@@@@X        ^@@@@*              %%@@@@@@@P  \n");
    Delay(200);
    printf("           8@@@@@@@@-   _t;   g@@@@@;      ct    ^@@@@@@@@y \n");
    Delay(200);
    printf("          G@@@@@@@@8     -@@C@K@@@@@@r V*u@@      8@@@@@@@@u\n");
    Delay(200);
    printf("          ^@@@@@@@@@@8SeP8@@@@@@@@@@@@@@@@@@Gz*cE@@@@@@@@@@,\n");
    Delay(200);
    printf("              ;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@F    \n");
    Delay(200);
    printf("               ;@@@@@@@m 'j@@A@@@@@@@@@@8@@z- ^%%@@@@@@C     \n");
    Delay(200);
    printf("                ;@@@@@@G   :@  _8@@@@@@  z_   g@@@@@@S      \n");
    Delay(200);
    printf("                 *@@@@@C    -    u@@@@@       e@@@@@G       \n");
    Delay(200);
    printf("                  *@@@@;          j@@@@        %%@@@8        \n");
    Delay(200);
    printf("                   *@@@T           g@@@       ^@@@8         \n");
    Delay(200);
    printf("                    *@@@@;         ,@@@     -A@@@%%          \n");
    Delay(200);
    printf("                     *@@@@8t       -@@0   ;c@@@@g           \n");
    Delay(200);
    printf("                      c@@@@@      ,@@m   _@@@@@@            \n");
    Delay(200);
    printf("                       c@@@@     v@@*     @@@@@-            \n");
    Delay(200);
    printf("                        c@@@-   8@g-      @@@8-             \n");
    Delay(200);
    printf("                              g@       ^                    \n");
    Delay(200);
    printf("                              *@8-  ;D@t                    \n");
    Delay(200);
    printf("                               z@@P@@@f                     \n");
    Delay(200);
    printf("                                f@@@@t                      \n");
    Delay(200);
    printf("                                 C@@t                       \n");
    Delay(200);
    printf("\n\n");
  

    printf("\t\t             Val's Adventure!  \n\n");
    printf("\t\t     ----------------------------------\n\n");
    printf("\t\t         Press any key to begin...\n\n");

   

    while (!_kbhit()) { 
        printf("\r\t\t          ");
        Sleep(1000); 
    }

    printf("\n\n\n\n\n");
    printf("\t\t         Let the adventure begin!\n\n");
	printf("Loading...");
	intro_music_break++;
	pthread_join(tid, NULL);
	system("cls||clear");
	break;
    }
	Menu();
}

void Tutorial(){
	
	char option;
	system("cls || clear");
	 printf("\n\n                                  Val's adventure is an adventure/puzzle game where your goal is to take Val to the end of her adventure\n"
	 "                                                  in this dungeon where she's looking for an ancient cursed weapon.\n\n");
	 printf("                                              In each level the player must move to get a key to open the closed door.\n\n\n");
	 printf("                                                                             W: Up\n");
	 printf("                                                                     A: Left\t     D: Right\n");
	 printf("                                                                             S: Down\n\n\n");
	 printf("                                                                I: Interacts with object above\n");
	 
	 printf("                                                                &: symbol representing the player\n");
	 printf("                                                                *: symbol representing a wall\n");
	 printf("                                                                @: symbal representing a key\n");
	 printf("                                                                D: symbol representing a close door\n");
	 printf("                                                                =: symbol representing a open door\n\n");
	 printf("                                                                O: symbol representing a button that the player can interact\n");
	 printf("                                                                #: symbol representing a thorn. The player lost hp when he touches it.\n");
	 printf("                                                                >: symbol representing a teleportation\n");
	 printf("                                                                ¬: symbol representing a level 1 monster\n");
	 printf("                                                                k: symbol representing a level 2 monster\n\n");
	 printf("                                                                Press M to go back to the Menu: \n\n\n   ");  
	 
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
char map1[15][15] = { // map's bidimentional array

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
void DrawMap1(){ // draws the map on the screen
    system("cls || clear"); 
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
                printf("        %c", map1[y][x]);       // draws the corresponding character on the map
            }
        }
        printf("\n");
    }
}
char map2[30][30] = {
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '>', '*'},
	{'*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'O', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', '<', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 'D', '*', '*', '*', '*', '*', '*'},	
};
/*void DrawMap2(){ // draws the map on the screen

    system("cls || clear"); 
    printf("\n\n\n\n\n\n\n");
    int y;
    int x;
    for (y = 0; y < 30; y++)
    {
        for (x = 0; x < 30; x++)
        {
            if (x == playerX && y == playerY){   // draws the player at the current position
            
                printf("        &");
            }
            if (x == monsterX && y == monsterY){
            	printf("        K");
			}
            else{
                printf("        %c", map[y][x]);       // draws the corresponding character on the map
            }
        }
        printf("\n");
    }
}
*/
void Start(){ //game 
	
    char input;
    char interaction;
    int hp = 5;
    DrawMap1();
    printf("\n\n                                                                           HP: %d\n\n", hp);

    while (hp > 0) // endless loop
    {
        input = getch();             // reads the keyboard key that was pressed
				
        switch (input){
        	
        case 'w':
        case 'W':
            if (playerY > 1 && map1[playerY - 1][playerX] != '*' && map1[playerY - 1][playerX] != '@'){        // up
                
                if(map1[playerY - 1][playerX] == '#'){
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
            if (playerX > 1 && map1[playerY][playerX - 1] != '*' && map1[playerY][playerX - 1] != '@'){        // left

                if(map1[playerY][playerX - 1] == '#'){
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
            if (playerY < 14 && map1[playerY + 1][playerX] != '*' && map1[playerY + 1][playerX] != '@' ){   // down
            
                if(map1[playerY + 1][playerX] == '#'){
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
            if (playerX < 14 && map1[playerY][playerX + 1] != '*' && map1[playerY][playerX + 1] != '@' && map1[playerY][playerX + 1] != 'D'){   // right
            		
				if(map1[playerY][playerX + 1] == '#'){
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
			if(map1[playerY + 1][playerX] == '@' || map1[playerY - 1][playerX] == '@' || map1[playerY][playerX + 1] == '@' || map1[playerY][playerX - 1] == '@') // interaction with the button
			{
				map1[12][1] = ' ';
				map1[7][14] = '=';
				Beep(650, 150);
			}
			break;
			
		
		
		default:
			break;
			
	}
	
	DrawMap1();
    printf("\n\n                                                                      HP: %d\n", hp);
    
    if(map1[playerY][playerX] == '=')
		{
			break;
		}
}

	if(hp == 0)
	{
		printf("\n\n\n                                                                    Game Over                                                    \n\n");
	}
	return 0;
}



void Menu(){
	
	fflush(stdin);
	system ("cls || clear");
	int option;
	
    
   	printf("\n\n\n\n\n\n                                        --------------------------------------------------------------------------------\n");														
    printf(" \n\n\n\n                                                                      Choose your option:\n\n   ");                              
	printf("                                                   1. Start           2. Tutorial           3. Leave\n\n\n"); 
	printf("                                         --------------------------------------------------------------------------------\n");  
	
	fflush(stdin);
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
	
	Intro();
	return 0;
}
