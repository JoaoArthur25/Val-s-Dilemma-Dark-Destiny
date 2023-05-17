#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <pthread.h>
#include <unistd.h>

int playerX, playerY, monster1X, monster1Y, monster2X, monster2Y;

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

int Menu();
int Game1();
int Game2();
void DrawMap1();
void DrawMap2();


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

int dungeon_music_break = 0;

void *dungeon_music(void *arg){
	while(dungeon_music_break == 0){
	playNote(220, 500);
    playNote(233, 500);
    playNote(196, 500);
    playNote(185, 500);
    playNote(196, 500);
    playNote(233, 500);
    playNote(220, 750);
}
}

int lvl_3__music_break = 0;

void *lvl_3_music(void *arg){
	while(lvl_3__music_break == 0){
	playNote(277, 500);
    playNote(311, 500);
    playNote(294, 500);
    playNote(277, 500);
    playNote(247, 500);
    playNote(220, 500);
    playNote(196, 750);
}
}

void Intro(){
	
	int frame = 0;
    int x = 0;


    while (frame < 600) { 
        system("cls||clear"); 
    printf("\n\nCreators:\n-Igor 'Radicrow' Acatauassu\n-Joao Arthur 'JoaoArthur25' da Silva\n-Kelton 'KeltonSousa' Sousa\n\n");
      Delay(3000);
    printf("\n                                                     .\\^/.\n");
    printf("                                                   . |`|/| .\n");
    printf("                                                   |\\|\\|'|/|\n");
    printf("                                                .--'-\\`|/-''--.\n");
    printf("                                                 \\`-._\\|./.-'/\n");
    printf("                                                 >`-._|/.-'<\n");
    printf("                                                 '~|/~~|~~\\|~'\n");
    printf("                                                       |\n\n");
    printf("                                         Team Scarlet Dawn presents:\n\n");
  
    

	x++;

        if (x > 10){
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

   printf("                                                                 .:!!##################!!:.                                                                 \n");
   Delay(100);
   printf("                                                         .:#########!..              .:!#########:.                                                          \n");
	Delay(100);
   printf("                                                    .!#####!:.                                .:!#####!.                                                     \n");
    Delay(100);
   printf("                                                .!#####:                                            :!####!.                                                 \n");
   Delay(100);
   printf("                                              !####:                           .#                       :####!                                               \n");
   Delay(100);
   printf("                                           :####.                            :###.     .....::::!!!!###:   .####:                                            \n");
   Delay(100);
   printf("                                         !###:                            :#####:  .!###############!.     .!#####!                                          \n");
   Delay(100);
   printf("                                       !###:                          .#######!   !########!:.       .:!############:                                        \n");
   Delay(100);
   printf("                                     :###!.                      .:#########!.             .!!###################:!###.                                      \n");
   Delay(100);
   printf("                                    :###:                     :############################!!..  .:########!:.    .####:                                     \n");
   Delay(100);
   printf("                                   !###.                   .######################################:         ..!#########:                                    \n");
   Delay(100);
   printf("                                  .###:                  !############################################.  .###############.                                  \n");
   Delay(100);
   printf("                                  !##!               .:#################################################!.  :###!:..  !##!                                  \n");
   Delay(100);
   printf("                                 .###:            .!########:  :########################!!!!###########.   ....:::!#######.                                 \n");
   Delay(100);
   printf("                                 :###.              !####!..!################!:.  .:!#######!:.   :!######:  .!###########:                                 \n");
   Delay(100);
   printf("                                 .###.            .#########################!.   .:!!::.   .:#####!.   .!#####!:..    :###.                                 \n");
   Delay(100);
   printf("                                 .###:      .   .!########################!         .!######.  .!#####!.              :###                                  \n");
   Delay(100);
   printf("                                  :###     .#############################:             :######!.  :#######:    !#########:                                  \n");
   Delay(100);
   printf("                                  .!###    :###############!::!!##:      .              .#####!     :########!.   .:!###!.                                  \n");
   Delay(100);
   printf("                                   .###!.  .###########:                                :##!  .###:   :##!!#####!   !###                                    \n");
   Delay(100);
   printf("                                    .!###:     !######!                                .    !######    .!!.      .###!.                                     \n");
   Delay(100);
   printf("                                      :####.     .!#####!.                                  :#######!       .    :###:                                       \n");
   Delay(100);
   printf("                                        !####.                                              .########:  .##:   :###!                                         \n");
   Delay(100);
   printf("                                         .!#####.                                           !#########.  !#######!.                                          \n");
   Delay(100);
   printf("                                            :######:                                       .##########.  !#####:                                             \n");
   Delay(100);
   printf("                                               !#######!.                                 .#################:                                               \n");
   Delay(100);
   printf("                                                  .!#########!:.                        .!##############!.                                                  \n");
   Delay(100);
   printf("                                                      .:###########################:  :#############:.                                                        \n");
   Delay(100);
   printf("                                                            .:################################:.                                                              \n");
   Delay(100);
   printf("                                                                        ..:::!!!!!!:::..                                                                      \n");
   Delay(100);
  

    printf("\t\t                                                Val's Adventure!  \n\n");
    printf("\t\t                                        ----------------------------------\n\n");
    printf("\t\t                                              Press any key to begin...\n\n");

   

    while (!_kbhit()) { 
        printf("\r\t\t          ");
        Sleep(1000); 
    }

    printf("\n\n\n\n\n");
    printf("\t\t                                              Let the adventure begin!\n\n");
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
    {'*', ' ', '#', ' ', '*', '#', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'*', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '#', ' ', ' ', '*'},
    {'*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '*'},
    {'*', ' ', '*', '*', ' ', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', '*'},
    {'*', ' ', '*', '*', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D'},
    {'*', ' ', '*', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'*', ' ', '*', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '#', ' ', '*'},
    {'*', ' ', '*', '*', ' ', ' ', '*', ' ', ' ', '*', '*', '*', ' ', ' ', '*'},
    {'*', ' ', '*', '*', ' ', ' ', '*', '#', ' ', '*', '*', '*', ' ', ' ', '*'},
    {'*', '@', '*', '*', ' ', ' ', '*', 'O', ' ', '*', '*', '*', ' ', ' ', '*'},
    {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*'},
    {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}
};
void DrawMap1(){ // draws the map on the screen
    system("cls || clear"); 
    printf("\n\n\n\n\n\n\n");
    int y;
    int x;
    for (y = 0; y < 15; y++){
        for (x = 0; x < 15; x++){
            if (x == playerX && y == playerY){   // draws the player at the current position
            
                printf("      &");
            }
            else{
                printf("      %c", map1[y][x]);       // draws the corresponding character on the map
            }
        }
        printf("\n");
    }
}
char map2[30][30] = {
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '#', '#', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', '*'},
	{'*', '*', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', '*', ' ', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', '*'},
	{'*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', '*'},
	{'*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', '*', ' ', ' ', '*'},
	{'*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', '*', ' ', ' ', '*'},
	{'*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', ' ', '*', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', '*', '*', ' ', ' ', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', '*', '*', '*', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', '*', ' ', '#', ' ', '*', ' ', '*', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', '#', ' ', '*', ' ', '*', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', '#', ' ', '*', ' ', '*', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', '*', '#', ' ', '*', '*', '*', '*', ' ', '*', ' ', '#', ' ', '*', ' ', '*', ' ', ' ', '*'},
	{'*', '*', '*', ' ', '*', ' ', '*', ' ', ' ', '*', '*', ' ', '*', '#', ' ', '*', ' ', ' ', ' ', ' ', '*', ' ', '#', ' ', '*', ' ', '*', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', '*', '*', ' ', '*', '#', ' ', '*', ' ', ' ', ' ', ' ', '*', ' ', '*', '*', '*', ' ', '*', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', '#', ' ', '*', ' ', ' ', ' ', ' ', '*', ' ', '*', 'O', ' ', ' ', '*', ' ', ' ', '*'},
	{'*', '@', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', '*', ' ', '*', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', ' ', ' ', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', '<', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}
};
void DrawMap2(){ // draws the map on the screen

    system("cls || clear"); 
    printf("\n\n\n\n\n\n\n");
    int y;
    int x;
    for (y = 0; y < 30; y++){
        for (x = 0; x < 30; x++){
            if (x == playerX && y == playerY){   // draws the player at the current position
            
                printf("    &");
            }
			
			else if(x == monster1X && y == monster1Y){
			
				printf("    W");
			}
			
			else if(x == monster2X && y == monster2Y){
				
				printf("    K");
			}
            else{
                printf("    %c", map2[y][x]);       // draws the corresponding character on the map
            }
        }
        printf("\n");
    }
}

int Game1(){ //game 
	
	pthread_t tid_2;
    pthread_create(&tid_2, NULL, dungeon_music, NULL);
    
    char input;
    playerX = 13; // player's initial x position
	playerY = 1; // player's initial y position
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
                	playerX = 13, playerY = 1;
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
                	playerX = 13, playerY = 1;
				}
				else{
					playerX--;
				}	
				
				if(map1[playerY][playerX] == 'O')
				{
					map1[3][2] = ' ';
					map1[4][2] = ' ';
				}
            }
            break;

        case 's':
        case 'S':
            if (playerY < 14 && map1[playerY + 1][playerX] != '*' && map1[playerY + 1][playerX] != '@' ){   // down
            
                if(map1[playerY + 1][playerX] == '#'){
                	hp--;
                	playerX = 13, playerY = 1;
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
                	playerX = 13, playerY = 1;
				}
				else{
					playerX++;
				}	
				
			}
			break;
			
		case 'i':
		case 'I':
			if(map1[playerY + 1][playerX] == '@' || map1[playerY - 1][playerX] == '@' || 
			map1[playerY][playerX + 1] == '@' || map1[playerY][playerX - 1] == '@') // interaction with the button
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
	dungeon_music_break++;
	pthread_join(tid_2, NULL);
	system("cls||clear");
			Game2();
			break;
		}
		
}

	if(hp == 0)
	{
		printf("\n\n\n        Val's strength was not enough to overcome the dungeon's challenges and claim the artifact, now she lies dead in the depths of the dungeon.");
		Delay(500);
		printf(".");
		Delay(500);
		printf(".");
		Delay(3000);
		printf("\n\n\n                                                                    GAME OVER                                                    \n\n");
		Delay(2000);
		int option;
		system("cls || clear");
		printf("\n\n\n\n\n\n                                        --------------------------------------------------------------------------------\n");		
		printf(" \n\n\n\n                                                                      Choose your option:\n\n   ");                              
		printf("                                                              1. Menu          2. Leave \n\n\n"); 
		printf("                                         --------------------------------------------------------------------------------\n");  
		fflush(stdin);
		scanf("%d", &option);
		switch(option){
	
	case 1:	
		system("cls || clear");
	    Beep(650, 150);
		Menu();
		break;
	
	case 2: 
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
		printf("Choose a valid option, returning to Menu...");
		sleep(1);
		Menu();
	
	}
		return 0;
	}
	
}

int Game2(){
	dungeon_music_break--;
	pthread_t tid_2;
    pthread_create(&tid_2, NULL, dungeon_music, NULL);
    
	char input;
    char interaction;
    int i;
    int monsterMovimentation;
    int hp = 5;
    playerX = 28;
    playerY = 3;
    monster1X = 8;
    monster1Y = 28;
    monster2X = 6;
    monster2Y = 2;
    DrawMap2();
    printf("\n\n                                                                           HP: %d\n\n", hp);
    

    while (hp > 0) // endless loop
    {
		srand(time(NULL));
		
		monsterMovimentation = rand() % 4;
		
		int distanceX = playerX - monster2X;
		int distanceY = playerY - monster2Y;
		
		if(monsterMovimentation == 0)
		{
			if(map2[monster1Y - 1][monster1X] != '*' && map2[monster1Y - 1][monster1X] != '#' && 
			map2[monster1Y - 1][monster1X] != '@' && map2[monster1Y - 1][monster1X] != 'D' && 
			map2[monster1Y - 1][monster1X] != '<' )
			{
				monster1Y--;
			}
			else
			{
				monster1Y++;
			}
			
		}
		
		else if(monsterMovimentation == 1)
		{
			if(map2[monster1Y][monster1X - 1] != '*' && map2[monster1Y][monster1X - 1] != '#' && 
			map2[monster1Y][monster1X - 1] != '@' && map2[monster1Y][monster1X - 1] != 'D' && 
			map2[monster1Y][monster1X - 1] != '<')
			{
				monster1X--;
			}
			else
			{
				monster1X++;
			}
			
		}
		
		else if(monsterMovimentation == 2)
		{
			if(map2[monster1Y + 1][monster1X] != '*' && map2[monster1Y + 1][monster1X] != '#' &&
			 map2[monster1Y + 1][monster1X] != '@' && map2[monster1Y + 1][monster1X] != 'D' &&
			  map2[monster1Y + 1][monster1X] != '<')
			{
				monster1Y++;
			}
			else
			{
				monster1Y--;
			}
		}
		
		else if(monsterMovimentation == 3)
		{
			if(map2[monster1Y][monster1X + 1] != '*' && map2[monster1Y][monster1X + 1] != '#' && 
			map2[monster1Y][monster1X + 1] != '@' && map2[monster1Y][monster1X + 1] != 'D' && 
			map2[monster1Y][monster1X + 1] != '<')
			{
				monster1X++;
			}
			else
			{
				monster1X--;
			}
			
		}
		if (abs(distanceX) > abs(distanceY)) {
        if (distanceX > 0) {
            if (map2[monster2Y][monster2X + 1] != '*' && map2[monster2Y][monster2X + 1] != '#' &&
                map2[monster2Y][monster2X + 1] != '@' && map2[monster2Y][monster2X + 1] != 'D' &&
                map2[monster2Y][monster2X + 1] != '<') {
                monster2X++;
            }
        } else {
            if (map2[monster2Y][monster2X - 1] != '*' && map2[monster2Y][monster2X - 1] != '#' &&
                map2[monster2Y][monster2X - 1] != '@' && map2[monster2Y][monster2X - 1] != 'D' &&
                map2[monster2Y][monster2X - 1] != '<') {
                monster2X--;
            }
        }
    } else {
        if (distanceY > 0) {
            if (map2[monster2Y + 1][monster2X] != '*' && map2[monster2Y + 1][monster2X] != '#' &&
                map2[monster2Y + 1][monster2X] != '@' && map2[monster2Y + 1][monster2X] != 'D' &&
                map2[monster2Y + 1][monster2X] != '<') {
                monster2Y++;
            }
        } else {
            if (map2[monster2Y - 1][monster2X] != '*' && map2[monster2Y - 1][monster2X] != '#' &&
                map2[monster2Y - 1][monster2X] != '@' && map2[monster2Y - 1][monster2X] != 'D' &&
                map2[monster2Y - 1][monster2X] != '<') {
                monster2Y--;
            }
        }
    }
		input = getch();             // reads the keyboard key that was pressed
				
        switch (input){
        	
        case 'w':
        case 'W':
            if (playerY > 1 && map2[playerY - 1][playerX] != '*' && map2[playerY - 1][playerX] != '@' && map2[playerY - 1][playerX] != 'D'){        // up
                
                if(map2[playerY - 1][playerX] == '#'){
                	if(map2[5][13] == '#')
					{
						playerX = 12, playerY = 5;
						hp--;
					}
					else
					{
						playerX = 28, playerY = 3;
						hp--;
					}
				}
				else{
					playerY--;
				}	
				
				if(map2[playerY][playerX] == map2[3][2])
				{
					map2[3][1] = '>';
					map2[5][13] = '#';
					map2[24][1] = '#';
					map2[24][2] = '#';
				}
				
				if(map2[playerY][playerX] == '>')
				{
					playerX = 1, playerY = 28;
				}
				
				else if(map2[playerY][playerX] == '<')
				{
					playerX = 1, playerY = 3;
				}
				
				if(playerY == monster1Y && playerX == monster1X)
				{
					if(map2[5][13] == '#')
					{
						playerX = 12, playerY = 5;
						hp--;

					}
					else
					{
						playerX = 28, playerY = 3;
						hp--;
				
					}
				}
				if(playerY == monster2Y && playerX == monster2X)
				{
					if(map2[5][13] == '#')
					{
						playerX = 12, playerY = 5;
						hp--;

					}
					else
					{
						playerX = 28, playerY = 3;
						hp--;
				
					}
				}
            }
            break;

        case 'a':
        case 'A':
            if (playerX > 1 && map2[playerY][playerX - 1] != '*' && map2[playerY][playerX - 1] != '@' && map2[playerY][playerX - 1] != 'D'){        // left

                if(map2[playerY][playerX - 1] == '#'){
                	if(map2[5][13] == '#')
					{
						playerX = 12, playerY = 5;
						hp--;
					}
					else
					{
						playerX = 28, playerY = 3;
						hp--;
					}
				}
				else{
					playerX--;
				}
				
				if(map2[playerY][playerX] == map2[3][2])
				{
					map2[3][1] = '>';
					map2[5][13] = '#';
					map2[24][1] = '#';
					map2[24][2] = '#';
				}
				
				if(map2[playerY][playerX] == '>')
				{
					playerX = 1, playerY = 28;
				}
				
				else if(map2[playerY][playerX] == '<')
				{
					playerX = 1, playerY = 3;
				}
				
				if(map2[playerY][playerX] == map2[25][23])
				{
					map2[7][28] = ' ';
					map2[7][27] = ' ';
				}
				
				if(playerY == monster1Y && playerX == monster1X)
				{
					if(map2[5][13] == '#')
					{
						playerX = 12, playerY = 5;
						hp--;
					}
					else
					{
						playerX = 28, playerY = 3;
						hp--;
					}
				}
				if(playerY == monster2Y && playerX == monster2X)
				{
					if(map2[5][13] == '#')
					{
						playerX = 12, playerY = 5;
						hp--;

					}
					else
					{
						playerX = 28, playerY = 3;
						hp--;
				
					}
				}
            }
            break;

        case 's':
        case 'S':
            if (playerY < 29 && map2[playerY + 1][playerX] != '*' && map2[playerY + 1][playerX] != '@' && map2[playerY + 1][playerX] != 'D'){   // down
            
                if(map2[playerY + 1][playerX] == '#'){
                	hp--;
                	if(map2[5][13] == '#')
					{
						playerX = 12, playerY = 5;
					}
					else
					{
						playerX = 28, playerY = 3;
					}
				}
				else{
					playerY++;
				}
				
				if(map2[playerY][playerX] == map2[3][2])
				{
					map2[3][1] = '>';
					map2[5][13] = '#';
					map2[24][1] = '#';
					map2[24][2] = '#';
				}
				
				if(map2[playerY][playerX] == '>')
				{
					playerX = 1, playerY = 28;
				}
				
				else if(map2[playerY][playerX] == '<')
				{
					playerX = 1, playerY = 3;
				}
				
				if(playerY == monster1Y && playerX == monster1X)
				{
					hp--;
					if(map2[5][13] == '#')
					{
						playerX = 12, playerY = 5;
					}
					else
					{
						playerX = 28, playerY = 3;
					}
				}
				if(playerY == monster2Y && playerX == monster2X)
				{
					if(map2[5][13] == '#')
					{
						playerX = 12, playerY = 5;
						hp--;

					}
					else
					{
						playerX = 28, playerY = 3;
						hp--;
				
					}
				}
            }
            break;

        case 'd':
        case 'D':
            if (playerX < 29 && map2[playerY][playerX + 1] != '*' && map2[playerY][playerX + 1] != '@' && map2[playerY][playerX + 1] != 'D'){   // right
            		
				if(map2[playerY][playerX + 1] == '#'){
                	hp--;
                	if(map2[5][13] == '#')
					{
						playerX = 12, playerY = 5;
					}
					else
					{
						playerX = 28, playerY = 3;
					}
				}
				else{
					playerX++;
				}	
				
				if(map2[playerY][playerX] == map2[3][2])
				{
					map2[3][1] = '>';
					map2[5][13] = '#';
					map2[24][1] = '#';
					map2[24][2] = '#';
				}
				
				if(map2[playerY][playerX] == '>')
				{
					playerX = 1, playerY = 28;
				}
				
				else if(map2[playerY][playerX] == '<')
				{
					playerX = 1, playerY = 3;
				}
				
				if(playerY == monster1Y && playerX == monster1X)
				{
					hp--;
					if(map2[5][13] == '#')
					{
						playerX = 12, playerY = 5;
					}
					else
					{
						playerX = 28, playerY = 3;
					}
				}
				if(playerY == monster2Y && playerX == monster2X)
				{
					if(map2[5][13] == '#')
					{
						playerX = 12, playerY = 5;
						hp--;

					}
					else
					{
						playerX = 28, playerY = 3;
						hp--;
				
					}
				}
				
			}
			break;
			
		case 'i':
		case 'I':
			if(map2[playerY + 1][playerX] == '@' || map2[playerY - 1][playerX] == '@' || 
			map2[playerY][playerX + 1] == '@' || map2[playerY][playerX - 1] == '@') // interaction with the button
			{
				map2[26][1] = ' ';
				map2[3][29] = '=';
				Beep(650, 150);
			}
			break;
			
		
		
		default:
			break;
			
	}
	DrawMap2();
    printf("\n\n                                                                     HP: %d\n", hp);
    
    if(map2[playerY][playerX] == '=')
		{
	dungeon_music_break++;
	pthread_join(tid_2, NULL);
	system("cls||clear");
	break;
		}
 	
}

	if(hp == 0)
	{
		printf("\n\n\n        Val's strength was not enough to overcome the dungeon's challenges and claim the artifact, now she lies dead in the depths of the dungeon.");
		printf(".");
		Delay(500);
		printf(".");
		Delay(500);
		Delay(3000);
		printf("\n\n                                                                    GAME OVER                                                         ");
		Delay(2000);
		int option;
		system("cls || clear");
		printf("\n\n\n\n\n\n                                        --------------------------------------------------------------------------------\n");		
		printf(" \n\n\n\n                                                                      Choose your option:\n\n   ");                              
		printf("                                                              1. Menu          2. Leave \n\n\n"); 
		printf("                                         --------------------------------------------------------------------------------\n");  
		fflush(stdin);
		scanf("%d", &option);
		switch(option){
	
	case 1:	
		system("cls || clear");
	    Beep(650, 150);
		Menu();
		break;
	
	case 2: 
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
		printf("Choose a valid option, returning to Menu...");
		sleep(1);
		Menu();
	
	}
		return 0;	
	}
	
	
}



int Menu(){
	
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
		Game1();
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