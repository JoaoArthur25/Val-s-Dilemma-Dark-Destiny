#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <pthread.h>
#include <unistd.h>

#define GREEN   "\x1b[32m"
#define GOLD "\x1b[38;5;214m"
#define ORANGE "\x1b[38;5;202m"
#define BLUE    "\x1b[34m"
#define SCARLET_RED "\x1b[38;2;220;20;60m"
#define PURPLE "\033[0;34;35m"
#define BLUE_PURPLE "\033[0;38;5;99m"
#define RESET "\x1b[0m"

int monster1X, monster1Y, monster1X_2, monster1Y_2, monster1X_3, monster1Y_3, monster2X, monster2Y, monster3X, monster3Y; 
int playerX = 13; // player's initial x position
int playerY = 1; // player's initial y position
int monsterX = 7; // monster's initial x position
int monsterY = 27; // monster's initial y position


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
int Game3();
int Game4();
void DrawMap1();
void DrawMap2();
void DrawMap3();
void DrawMap4();

int intro_music_break= 0;

void *beep_thread(void *arg){
	while(intro_music_break == 0){
	int tempo = 2000;
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

int lvl_3_music_break = 0;

void *lvl_3_music(void *arg){
	while(lvl_3_music_break == 0){
	playNote(277, 500);
    playNote(311, 500);
    playNote(294, 500);
    playNote(277, 500);
    playNote(247, 500);
    playNote(220, 500);
    playNote(196, 750);
}
}

int lvl_4_music_break = 0;

void *lvl_4_music(void *arg){
	while(lvl_4_music_break == 0){
	int tempo = 750;
	playNote(440, tempo);
    playNote(415, tempo);
    playNote(440, tempo);
    playNote(415, tempo);
    playNote(523, tempo);
    playNote(494, tempo);
    playNote(466, tempo);
}}

void Ending_A(){
intro_music_break= 0;
system("cls||clear");
Delay(2000);
pthread_t tid;
pthread_create(&tid, NULL, beep_thread, NULL);
printf("                   ENDING A: Val Embraces the Dark Magic!\n\n\n");
printf("Val, driven by her desire to dismantle the corrupt empire, delves deep into the dangerous\n");
Delay(500);
printf("dungeon in search of the powerful artifact rumored to be hidden within. With every step she\n");
Delay(500);
printf("takes, the air grows thick with the essence of dark magic, whispering promises of immense \n");
Delay(500);
printf("power. Despite the foreboding atmosphere, Val remains resolute, convinced that the end\n");
Delay(500);
printf("justifies the means.");
Delay(8000);
printf("\n\n");
printf("Finally, after battling through hordes of monsters and evading treacherous traps, Val reaches\n");
Delay(500);
printf("the heart of the dungeon. There, she finds the artifact—an ancient sword pulsating with dark\n");
Delay(500);
printf("energy. She can feel its power calling out to her, its potential to wreak havoc on the empire\n");
Delay(500);
printf("and its allies.");
Delay(8000);
printf("\n\n");
printf("Hesitation tugs at Val's conscience, for she knows the dangers of harnessing such dark\n");
Delay(500);
printf("forces. The sword's malevolence seems to seep into her very soul, tempting her with the \n");
Delay(500);
printf("allure of dominion and revenge. Yet, driven by her burning determination, she firmly grasps\n");
Delay(500);
printf("the hilt of the sword, allowing the dark magic to course through her veins.\n");
Delay(8000);
printf("\n\n");
printf("With that vile sword in her claws, Val emerges from the depths of the dungeon, her body radiating an\n");
Delay(500);
printf("unsettling aura. The members of her group look at her with a mixture of awe and \n");
Delay(500);
printf("fear. They recognize the tremendous power she now wields, but they also sense the\n");
Delay(500);
printf("imminent threat it poses to Val's own mind.");
Delay(8000);
printf("\n\n");
printf("As time goes by... Val feels the tendrils of the dark magic tightening their grip on\n");
Delay(500);
printf("her spirit. The once-vibrant flame of her ideals flickers and wanes, replaced by a hunger for\n");
Delay(500);
printf("more power. As she gazes upon the ashes of the lives she destroyed so ruthlessly, the dragonborn\n");
Delay(500);
printf("realizes the true cost of her choice.");
Delay(8000);
printf("\n\n");
    printf("                                                           .@#@@:                                   .!!:                ,\n");
    Delay(100);
    printf("                                                         :@@#@@@.                             :!@@@#@!                  \n");
    Delay(100);
    printf("                                                       :@@#@#@@#                         .:!!:.!:!!:.                   \n");
    Delay(100);
    printf("                                                     .:@@#@@@@@.                    .#@!.:!!::.#::....                  \n");
    Delay(100);
    printf("                                  !                 .#@@@@####@.              .!##!::!!!!!:..#!::...                    \n");
    Delay(100);
    printf("                                  !#.              !@@@##!##@@@#@.       .!@@!:!:::::!!#:..##:...                       \n");
    Delay(100);
    printf("                                 .#@#           :!!@@#!@@@#!!!!!###@@@@#!!#@!::!!!:!!!..... :!                          \n");
    Delay(100);
    printf("                                .##.#.       .!@!@@#!!!!!!!:!!!@!.!##:::!##!!!!!!#:.........:@                          \n");
    Delay(100);
    printf("                               :#:  #!  !##!!!#:!@!!!!!!!:!##.:!::!!!!!!!!!!::!!!##:.........#!.                        \n");
    Delay(100);
    printf("                             !@.    !@##    !!.:!:!#!!!!##!:::::!!!!!!!!#!:::!!!!:!#@#!#!:.....#!                       \n");
    Delay(100);
    printf("                           ##..     !!.    !#.!!!#!!:!::!#!!::::!!#@@@#!!!::::!!#!!:::!:.........:!:                    \n");
    Delay(100);
    printf("                        :#...       !:      .#!!#!!::::::!!!!!##!::  ##@#!!::::!!#!!::::!#!.......:!##!.                \n");
    Delay(100);
    printf("                      :@....        .        !###!!!:!!!!!!@! .:. .##!#!:::::::::!!#!!!!..#::.!!.          :#           \n");
    Delay(100);
    printf("           .          #!....              ..!#:!!!:!!!!!!!!!!##@##!!!!!#@##:..... ....::: .@###!         !@@:           \n");
    Delay(100);
    printf("            :@#:      #!...             :#!:!:!!!!!:::!:::::::::!##!###!::.......!.....:!: :@##:##@@@@@@!.:#:           \n");
    Delay(100);
    printf("             ##..!#: .#!#....         .!#:::!!!::::::::::!!!!##!............:!#!:.......:!. !@#..        !!#.           \n");
    Delay(100);
    printf("             ##!.   .###!.....         :@::!!!!!!:!!!!!!@#:......:##@@@#@!!..............:. .!@#...   #!  .#            \n");
    Delay(100);
    printf("            ##!..   :!#:....     .#:    ..#@@#!........:#@@@@@@@#!!##!:.....:..:..........   :##:.....    !:            \n");
    Delay(100);
    printf("           .!@... ..:#:......   . .#@###: .... .!!!.:....:::..@#!!##:......................   #@!:......##:.            \n");
    Delay(100);
    printf("           ::#...  .::#. ...... .....@#....#@@@@@#:......#####:@#!!:..!:!.:!!...............  !##:...        !@@#!      \n");
    Delay(100);
    printf("           :!#....:#!.:!.. ..  ..  ...##.....        ..#@@######:#@#...........:............. :#@@#@#...  .##       .   \n");
    Delay(100);
    printf("            #@.....@#.::!#:.  ...:......#!..:#!:.         .#@######!#@@:......:.............. .##@@@###@#!:             \n");
    Delay(100);
    printf("            ###:....##:!.......:!#!!..   .#....#!.:#@.     .####@##@##!!###:....:::..........  ##@@##@@#####.           \n");
    Delay(100);
    printf("     .!@@##::#@##:...###!##::!#@##!::.      !. . !@.   :@:  .##.!#########@###@!.........#@#####@@@#@####@##@@!        \n");
    Delay(100);
    printf("        .!:  !#!:..!#@#!.:::!::!!#@:.            !!..   .!::!  @#########@###.@@@#####:..@#####@##@####@#####@@@#..:: \n");
    Delay(100);
    printf("             :#!::##:.:!!:::!!!:::::!@#..           ##...   .!   #@#####@####@!...........!@#####@##@####@#####@@@#..     \n");
    Delay(100);
    printf("          !.#@@@@#!!:::::::::::::::!!!!@....         @:...       :##@#########@#.........#@#@###@##@####@#########@@@#.  \n");
    Delay(100);
    printf("    ..:#@@#. :!#!!!!!:::::::::::::!:#...!#!.  .       .#...     !##@####@######@#:....!@@#@##@@###@###@############@@: : \n");
    Delay(100);
    printf("!!!@@!. .:!:::::!#!!!!!::::::::::::!!......!:!!#:.       :#..   :###############@#!#@###@@@@@@@###################@#    \n");
    Delay(100);
    printf("!:. :!!:::::::::!!!#!!!!!!!:!!!!#@@##.......    .!.             #@###### !######@#@@@#####:#:      .!!!!!!:. :##@@!     \n");
    Delay(100);
    printf("!!!!::::::::::::!##@!#@@@@#!:!:.... !#.......  :!. ..        .!@######..###############!!  :!..               .!:!:     \n");
    Delay(100);
    printf("!!::::::::::!!!!!@##  #!:....  !!:!:::!!!.....   :#@@#!:::!#@#######..#################. .:                      .##.   \n");
    Delay(100);
    printf("::::::!!!::!!!##!#:     ##:.:!#@#!#@@@@######@###@@###################################                             :#:  \n");
    Delay(100);
    printf("::::!::!!!#@@#!..         :::@@####@##############@@@##################@@@@#### :.                           !#  \n");
    Delay(100);
    printf("::!::!#!#:                  :@@######################@@########################@@@#!!!.!                           #.  \n");
    Delay(100);
    printf("!@#                          !@@#############################@@@@@@@@@@@@@@@###. @@#!!!! !                        .#    \n");
    Delay(100);
    printf("#.                           :@@@##################################@@@#:!.        #@!!!!!#:!                    :#@@:   \n");
    Delay(100);
    printf("                             .#@@###############################@@@!.             :@#!!@!!!!!!#:.           :#:      . .\n");
    Delay(100);
	Delay(10000);
	
	system("cls||clear");
	printf("             Thank you for playing!");


}

void Ending_B(){
intro_music_break= 0;
system("cls||clear");
Delay(2000);
pthread_t tid;
pthread_create(&tid, NULL, beep_thread, NULL);
printf("                   ENDING B: Val Rejects the Dark Magic!\n\n\n");
printf("As Val ventures deeper into the treacherous dungeon, the malevolent aura of dark magic \n");
Delay(500);
printf("surrounds her. She witnesses the horrors that await those who succumb to its influence—\n");
Delay(500);
printf("monsters twisted by its power, traps designed to ensnare and corrupt. The sight of such\n");
Delay(500);
printf("wickedness fills her with dread and revulsion.\n");
Delay(8000);
printf("\n\n");
printf("In the heart of the dungeon, Val finally finds the artifact—an ancient sword radiating with \n");
Delay(500);
printf("She sees the suffering it has caused and the path of destruction it would lead her down if she\n");
Delay(500);
printf("were to embrace its power.\n");
Delay(8000);
printf("\n\n");
printf("With a heavy heart, Val resists the seductive allure of the sword. She decides that she will not \n");
Delay(500);
printf("succumb to the same darkness she fights against. Knowing that wielding the artifact would \n");
Delay(500);
printf("corrupt her noble cause, she resolves to find an alternative way to bring down the corrupt \n");
Delay(500);
printf("empire.\n");
Delay(8000);
printf("\n\n");
printf("Val emerges from the depths of the dungeon, leaving the artifact untouched. She gathers\n");
Delay(500);
printf("her comrades, explaining her change of heart and emphasizing the importance of\n");
Delay(500);
printf("preserving their principles. Together, they devise a plan that relies on unity, strategy, and the\n");
Delay(500);
printf("power of their shared convictions...");
Delay(13000);
	system("cls||clear");
	printf("             Thank you for playing!");


}

void Intro(){
	intro_music_break= 0;
	int frame = 0;
    int x = 0;


    while (frame < 600) { 
    system("cls||clear"); 
    printf("\n\nCreators:\n-Igor 'Radicrow' Acatauassu\n-Joao Arthur 'JoaoArthur25' da Silva\n-Kelton 'KeltonSousa' Sousa\n\n");
    Delay(3000);
    printf("%s\n                                                     .\\^/.\n%s", SCARLET_RED, RESET);
	printf("%s                                                   . |`|/| .\n%s", SCARLET_RED, RESET);
	printf("%s                                                   |\\|\\|'|/|\n%s", SCARLET_RED, RESET);
	printf("%s                                                .--'-\\`|/-''--.\n%s", SCARLET_RED, RESET);
	printf("%s                                                 \\`-._\\|./.-'/\n%s", SCARLET_RED, RESET);
	printf("%s                                                 >`-._|/.-'<\n%s", SCARLET_RED, RESET);
	printf("%s                                                 '~|/~~|~~\\|~'\n%s", SCARLET_RED, RESET);
	printf("%s                                                       |\n%s\n\n", SCARLET_RED, RESET);
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
	Delay(10000);
	printf(".");
	Delay(500);
	printf(".");
	Delay(500);
	printf(".\n\n");
	printf("One day, Val hears rumors of a powerful artifact hidden deep within a dangerous dungeon. \n");
	printf("Many have tried to claim this artifact before, but none have returned to tell the tale. Despite \n");
	printf("the risks, Val sees this as an opportunity to gain an edge against the empire and bring them \n");
	printf("to their knees.\n");
	Delay(10000);
	printf(".");
	Delay(500);
	printf(".");
	Delay(500);
	printf(".\n\n");
	Delay(500);
	printf("With sword in hand and armor on her back, Val sets out to explore the treacherous dungeon\n");
	printf("and claim the artifact for herself. But she soon realizes that the dangers she faces are greater \n");
	printf("than she ever imagined. Deadly traps, fierce monsters and dark magic stand in her way, she \n");
	printf("must use all her skills and cunning to survive.\n");
	Delay(10000);
	printf(".");
	Delay(1000);
	printf(".");
	Delay(500);
	printf(".\n\n");
	printf("Will Val be able to overcome the challenges of the dungeon and claim the artifact? And if she \n");
	printf("does, will it be enough to help her achieve her ultimate goal of taking down the corrupt\n");
	printf("empire? Only time will tell...\n");
	Delay(10000);

	
	
	
	system("cls||clear");

   printf("%s                                                                 .:!!##################!!:.                                                                 %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                                         .:#########!..              .:!#########:.                                                          %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                                    .!#####!:.                                .:!#####!.                                                     %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                                .!#####:                                            :!####!.                                                 %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                              !####:                           .#                       :####!                                               %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                           :####.                            :###.     .....::::!!!!###:   .####:                                            %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                         !###:                            :#####:  .!###############!.     .!#####!                                          %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                       !###:                          .#######!   !########!:.       .:!############:                                        %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                     :###!.                      .:#########!.             .!!###################:!###.                                      %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                    :###:                     :############################!!..  .:########!:.    .####:                                     %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                   !###.                   .######################################:         ..!#########:                                    %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                  .###:                  !############################################.  .###############.                                  %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                  !##!               .:#################################################!.  :###!:..  !##!                                  %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                 .###:            .!########:  :########################!!!!###########.   ....:::!#######.                                 %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                 :###.              !####!..!################!:.  .:!#######!:.   :!######:  .!###########:                                 %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                 .###.            .#########################!.   .:!!::.   .:#####!.   .!#####!:..    :###.                                 %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                 .###:      .   .!########################!         .!######.  .!#####!.              :###                                  %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                  :###     .#############################:             :######!.  :#######:    !#########:                                  %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                  .!###    :###############!::!!##:      .              .#####!     :########!.   .:!###!.                                  %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                   .###!.  .###########:                                :##!  .###:   :##!!#####!   !###                                    %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                    .!###:     !######!                                .    !######    .!!.      .###!.                                     %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                      :####.     .!#####!.                                  :#######!       .    :###:                                       %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                        !####.                                              .########:  .##:   :###!                                         %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                         .!#####.                                           !#########.  !#######!.                                          %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                            :######:                                       .##########.  !#####:                                             %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                               !#######!.                                 .#################:                                               %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                                  .!#########!:.                        .!##############!.                                                  %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                                      .:###########################:  :#############:.                                                        %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                                            .:################################:.                                                              %s\n", SCARLET_RED, RESET);
Delay(100);
printf("%s                                                                        ..:::!!!!!!:::..                                                                      %s\n", SCARLET_RED, RESET);
Delay(100);
  

    printf("\t\t                                                Val's Dilemma: ");
    printf(PURPLE"Dark Destiny\n\n");
    printf("\t\t                                            ----------------------------------\n\n"RESET);
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
	 printf("\n\n                                 Val's Dilemma: Dark Destiny is an adventure/puzzle game where your goal is to take Val to the end of her adventure\n"
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
            
                printf(SCARLET_RED"  & "RESET);
            }
            else if (map1[y][x] == '@'){
				printf(GOLD"  %c "RESET, map1[y][x]);
			}
			else if (map1[y][x] == 'O'){
				printf(BLUE"  %c "RESET, map1[y][x]);
			}
            else{
                printf("  %c ", map1[y][x]);       // draws the corresponding character on the map
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
            
                printf(SCARLET_RED"& "RESET);
            }
			
			else if(x == monster1X && y == monster1Y){
			
				printf(GREEN"W "RESET);
			}
			else if (map2[y][x] == '@'){
				printf(GOLD"%c "RESET, map2[y][x]);
			}
			else if (map2[y][x] == 'O'){
				printf(BLUE"%c "RESET, map2[y][x]);
			}
            else{
                printf("%c ", map2[y][x]);       // draws the corresponding character on the map
            }
        }
        printf("\n");
    }
}
char map3[60][60] = {
	
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'O', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '#', ' ', ' ', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '#', ' ', ' ', 'O', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', '#', ' ', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#', ' ', ' ', ' ', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', ' ', ' ', '>', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', '*','*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*','*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*','*', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*','*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*','*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ','*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ','*', '#', '#', '#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', ' ', 'O', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', ' ', ' ', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', ' ', ' ', '*', ' ', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', ' ', '*', ' ', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', ' ', '*', ' ', '*', ' ', ' ', '*', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', '*', '*', '*', '*', '*', '*', ' ', ' ', '<', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', ' ', '@', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', '*', ' ', '*',' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', ' ', '<', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', '*', ' ', '*',' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', ' ', '*', '*', '*',' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', '*', '*', '*',' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ',' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ','*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ','*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ','*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '#', '#', ' ', ' ',' ', ' ', '#', '#', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '#', ' ', ' ', ' ', ' ',' ', ' ', ' ', '#', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', '#', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', '>', ' ', ' ', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', '#', '#', '*', '*', '*', '*', '*', '*', '*', '*', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#', '#', '#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', 'D', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}
};
void DrawMap3(){ // draws the map on the screen

    system("cls || clear"); 
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    int y;
    int x;
    for (y = 0; y < 60; y++){
        for (x = 0; x < 60; x++){
            if (x == playerX && y == playerY){   // draws the player at the current position
            
                printf(SCARLET_RED"& "RESET);
            }
			
			else if(x == monster2X && y == monster2Y){
			
				printf(ORANGE"K "RESET);
			}
			else if(x == monster1X && y == monster1Y){
				
				printf(GREEN"W "RESET);
			}
			else if(x == monster1X_2  && y == monster1Y_2){
				
				printf(GREEN"W "RESET);
			}
			else if(x == monster1X_3 && y == monster1Y_3){
				
				printf(GREEN"W "RESET);
			}
			else if (map3[y][x] == '@'){
				printf(GOLD"%c "RESET, map3[y][x]);
			}
			else if (map3[y][x] == 'O'){
				printf(BLUE"%c "RESET, map3[y][x]);
			}
			else{
			
                printf("%c ", map3[y][x]);       // draws the corresponding character on the map
            }
        }
        printf("\n");
    }
}

char map4[15][20] = {
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'*', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'O', '*', ' ', ' ', '*', '*'},
	{'*', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', '*', ' ', ' ', '*', '*'},
	{'*', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '*', ' ', ' ', '*', '*'},
	{'*', ' ', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '*', ' ', ' ', '*', '*'},
	{'*', ' ', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', ' ', ' ', '='},
	{'*', ' ', '*', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', '#', ' ', ' ', '#', ' ', ' ', ' ', '='},
	{'*', ' ', '*', ' ', ' ', '#', ' ', ' ', 'J', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', ' ', ' ', '='},
	{'*', ' ', '*', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', '#', ' ', ' ', '*', ' ', ' ', '*', '*'},
	{'*', ' ', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '*', ' ', ' ', '*', '*'},
	{'*', ' ', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '*', ' ', ' ', '*', '*'},
	{'*', ' ', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '*', ' ', ' ', '*', '*'},
	{'*', ' ', '*', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', '*', ' ', ' ', '*', '*'},
	{'*', ' ', '*', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', '*'},
	{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}
};
///[13][2] ao [13][12] e 14 2 ao 14 12 botao[14[1] botão2[14][13]
void DrawMap4(){
	
	system("cls || clear"); 
    printf("\n\n\n\n\n\n\n");
    int y;
    int x;
    for (y = 0; y < 15; y++){
        for (x = 0; x < 20; x++){
            if (x == playerX && y == playerY){   // draws the player at the current position
            
                printf(SCARLET_RED"  & "RESET);
            }
            else if (x == monster3X && y == monster3Y){
            	
            	printf(BLUE_PURPLE"  M "RESET);
			}
			else if (map4[y][x] == 'J'){
				printf(PURPLE"  %c "RESET, map4[y][x]);
			}
			else if (map4[y][x] == 'O'){
				printf(BLUE"  %c "RESET, map4[y][x]);
			}
            else{
            	
                printf("  %c ", map4[y][x]);       // draws the corresponding character on the map
            }
        }
        printf("\n");
    }
}
void MoveMonster3(int playerX, int playerY) {
    // Monster function to follow the player
    if (monster3X < playerX) {
        if (map4[monster3Y][monster3X + 1] != '*' && map4[monster3Y][monster3X + 1] != '#') {
            monster3X++;
        }
    } else if (monster3X > playerX) {
        if (map4[monster3Y][monster3X - 1] != '*' && map4[monster3Y][monster3X - 1] != '#') {
            monster3X--;
        }
    }

    if (monster3Y < playerY) {
        if (map4[monster3Y + 1][monster3X] != '*' && map4[monster3Y + 1][monster3X] != '#') {
            monster3Y++;
        }
    } else if (monster3Y > playerY) {
        if (map4[monster3Y - 1][monster3X] != '*' && map4[monster3Y - 1][monster3X] != '#') {
            monster3Y--;
        }
    }
}

int Game1(){ //game 
dungeon_music_break = 0;
	pthread_t tid_2;
    pthread_create(&tid_2, NULL, dungeon_music, NULL);
    
    char input;
    char interaction;
    playerX = 13; // player's initial x position
	playerY = 1; // player's initial y position
    int hp = 5;
    map1[7][14] = 'D';
	map1[12][1] = '@';
	map1[3][2] = '#';
	map1[4][2] = '#';
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
	dungeon_music_break++;
	pthread_join(tid_2, NULL);
	system("cls||clear");
			Game2();
			map1[7][14] = 'D';
			map1[12][1] = '@';
			map1[3][2] = '#';
			map1[4][2] = '#';
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
		dungeon_music_break++;
		pthread_join(tid_2, NULL);
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
	    map1[7][14] = 'D';
		map1[12][1] = '@';
		map1[3][2] = '#';
		map1[4][2] = '#';
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
		map1[7][14] = 'D';
		map1[12][1] = '@';
		map1[3][2] = '#';
		map1[4][2] = '#';
		Menu();
	
	}
		return 0;
	}
	
}

int Game2(){
	dungeon_music_break = 0;
	pthread_t tid_2;
    pthread_create(&tid_2, NULL, dungeon_music, NULL);
    
	char input;
    char interaction;
    int i;
    int monsterMovimentation;
    int hp = 5;
    playerX = 28;
    playerY = 3;
    monster1X = 7;
    monster1Y = 27;
    map2[3][1] = ' ';
	map2[5][13] = ' ';
	map2[24][1] = ' ';
	map2[24][2] = ' ';
	map2[7][28] = '#';
	map2[7][27] = '#';
	map2[26][1] = '@';
	map2[3][29] = 'D';
    DrawMap2();
    printf("\n\n                                                                           HP: %d\n\n", hp);

    while (hp > 0) // endless loop
    {
		srand(time(NULL));
		
		monsterMovimentation = rand() % 4;
		
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
				
			}
			break;
			
		case 'i':
		case 'I':
			if(map2[playerY + 1][playerX] == '@' || map2[playerY - 1][playerX] == '@' || map2[playerY][playerX + 1] == '@' || map2[playerY][playerX - 1] == '@') // interaction with the button
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
	map2[3][1] = ' ';
	map2[5][13] = ' ';
	map2[24][1] = ' ';
	map2[24][2] = ' ';
	map2[7][28] = '#';
	map2[7][27] = '#';
	map2[26][1] = '@';
	map2[3][29] = 'D';
	Game3();
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
		dungeon_music_break++;
		pthread_join(tid_2, NULL);
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
	    map2[3][1] = ' ';
		map2[5][13] = ' ';
		map2[24][1] = ' ';
		map2[24][2] = ' ';
		map2[7][28] = '#';
		map2[7][27] = '#';
		map2[26][1] = '@';
		map2[3][29] = 'D';
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
		map2[3][1] = ' ';
		map2[5][13] = ' ';
		map2[24][1] = ' ';
		map2[24][2] = ' ';
		map2[7][28] = '#';
		map2[7][27] = '#';
		map2[26][1] = '@';
		map2[3][29] = 'D';
		Menu();
	
	}
		return 0;	
	}
	
	
}

int Game3(){
	lvl_3_music_break = 0;
	pthread_t tid_3;
    pthread_create(&tid_3, NULL, lvl_3_music, NULL);
    
	char input;
    char interaction;
    int i;
    int monsterMovimentation1, monsterMovimentation2, monsterMovimentation3;
    int hp = 5;
    playerX = 29;
    playerY = 58;
    monster1X_2 = 21;
    monster1Y_2 = 23;
    monster1X_3 = 26;
    monster1Y_3 = 23;
    monster1X = 15;
    monster1Y = 39;
    monster2X = 24;
    monster2Y = 10;
    map3[36][15] = '@';
	map3[59][39] = 'D';
	map3[17][31] = '#';
	map3[17][32] = '#';
	map3[17][33] = '#';
	map3[7][21] = '#';
	map3[8][21] = '#';
	map3[9][21] = '#';
	map3[10][21] = '#';
	map3[22][34] = '#';
	map3[23][34] = '#';
	map3[24][34] = '#';
    DrawMap3();
    printf("\n\n                                                                           HP: %d\n\n", hp);

    while (hp > 0) // endless loop
    {
		srand(time(NULL));
		monsterMovimentation1 = rand() % 4;
		srand(time(NULL));
		monsterMovimentation2 = rand() % 4;
		srand(time(NULL));
		monsterMovimentation3 = rand() % 4;
		
		int distanceX = playerX - monster2X;
		int distanceY = playerY - monster2Y;
		
		if(monsterMovimentation1 == 0)
		{
			if(map3[monster1Y - 1][monster1X] != '*' && map3[monster1Y - 1][monster1X] != '#' && 
			map3[monster1Y - 1][monster1X] != '@' && map3[monster1Y - 1][monster1X] != 'D' && 
			map3[monster1Y - 1][monster1X] != '<' )
			{
				monster1Y--;
			}
			else
			{
				monster1Y++;
			}
			
		}
		
		else if(monsterMovimentation1 == 1)
		{
			if(map3[monster1Y][monster1X - 1] != '*' && map3[monster1Y][monster1X - 1] != '#' && 
			map3[monster1Y][monster1X - 1] != '@' && map3[monster1Y][monster1X - 1] != 'D' && 
			map3[monster1Y][monster1X - 1] != '<')
			{
				monster1X--;
			}
			else
			{
				monster1X++;
			}
			
		}
		
		else if(monsterMovimentation1 == 2)
		{
			if(map3[monster1Y + 1][monster1X] != '*' && map3[monster1Y + 1][monster1X] != '#' &&
			 map3[monster1Y + 1][monster1X] != '@' && map3[monster1Y + 1][monster1X] != 'D' &&
			  map3[monster1Y + 1][monster1X] != '<')
			{
				monster1Y++;
			}
			else
			{
				monster1Y--;
			}
		}
		
		else if(monsterMovimentation1 == 3)
		{
			if(map3[monster1Y][monster1X + 1] != '*' && map3[monster1Y][monster1X + 1] != '#' && 
			map3[monster1Y][monster1X + 1] != '@' && map3[monster1Y][monster1X + 1] != 'D' && 
			map3[monster1Y][monster1X + 1] != '<')
			{
				monster1X++;
			}
			else
			{
				monster1X--;
			}
			
		}
		if(monsterMovimentation2 == 0)
		{
			if(map3[monster1Y_2 - 1][monster1X_2] != '*' && map3[monster1Y_2 - 1][monster1X_2] != '#' && 
			map3[monster1Y_2 - 1][monster1X_2] != '@' && map3[monster1Y_2 - 1][monster1X_2] != 'D' && 
			map3[monster1Y_2 - 1][monster1X_2] != '<' )
			{
				monster1Y_2--;
			}
			else
			{
				monster1Y_2++;
			}
			
		}
		
		else if(monsterMovimentation2 == 1)
		{
			if(map3[monster1Y_2][monster1X_2 - 1] != '*' && map3[monster1Y_2][monster1X_2 - 1] != '#' && 
			map3[monster1Y_2][monster1X_2 - 1] != '@' && map3[monster1Y_2][monster1X_2 - 1] != 'D' && 
			map3[monster1Y_2][monster1X_2 - 1] != '<')
			{
				monster1X_2--;
			}
			else
			{
				monster1X_2++;
			}
			
		}
		
		else if(monsterMovimentation2 == 2)
		{
			if(map3[monster1Y_2 + 1][monster1X_2] != '*' && map3[monster1Y_2 + 1][monster1X_2] != '#' &&
			 map3[monster1Y_2 + 1][monster1X_2] != '@' && map3[monster1Y_2 + 1][monster1X_2] != 'D' &&
			  map3[monster1Y_2 + 1][monster1X_2] != '<')
			{
				monster1Y_2++;
			}
			else
			{
				monster1Y_2--;
			}
		}
		
		else if(monsterMovimentation2 == 3)
		{
			if(map3[monster1Y_2][monster1X_2 + 1] != '*' && map3[monster1Y_2][monster1X_2 + 1] != '#' && 
			map3[monster1Y_2][monster1X_2 + 1] != '@' && map3[monster1Y_2][monster1X_2 + 1] != 'D' && 
			map3[monster1Y_2][monster1X_2 + 1] != '<')
			{
				monster1X_2++;
			}
			else
			{
				monster1X_2--;
			}
			
		}
		if(monsterMovimentation3 == 0)
		{
			if(map3[monster1Y_3 - 1][monster1X_3] != '*' && map3[monster1Y_3 - 1][monster1X_3] != '#' && 
			map3[monster1Y_3 - 1][monster1X_3] != '@' && map3[monster1Y_3 - 1][monster1X_3] != 'D' && 
			map3[monster1Y_3 - 1][monster1X_3] != '<' )
			{
				monster1Y_3--;
			}
			else
			{
				monster1Y_3++;
			}
			
		}
		
		else if(monsterMovimentation3 == 1)
		{
			if(map3[monster1Y_3][monster1X_3 - 1] != '*' && map3[monster1Y_3][monster1X_3 - 1] != '#' && 
			map3[monster1Y_3][monster1X_3 - 1] != '@' && map3[monster1Y_3][monster1X_3 - 1] != 'D' && 
			map3[monster1Y_3][monster1X_3 - 1] != '<')
			{
				monster1X_3--;
			}
			else
			{
				monster1X_3++;
			}
			
		}
		
		else if(monsterMovimentation3 == 2)
		{
			if(map3[monster1Y_3 + 1][monster1X_3] != '*' && map3[monster1Y_3 + 1][monster1X_3] != '#' &&
			 map3[monster1Y_3 + 1][monster1X_3] != '@' && map3[monster1Y_3 + 1][monster1X_3] != 'D' &&
			  map3[monster1Y_3 + 1][monster1X_3] != '<')
			{
				monster1Y_3++;
			}
			else
			{
				monster1Y_3--;
			}
		}
		
		else if(monsterMovimentation3 == 3)
		{
			if(map3[monster1Y_3][monster1X_3 + 1] != '*' && map3[monster1Y_3][monster1X_3 + 1] != '#' && 
			map3[monster1Y_3][monster1X_3 + 1] != '@' && map3[monster1Y_3][monster1X_3 + 1] != 'D' && 
			map3[monster1Y_3][monster1X_3 + 1] != '<')
			{
				monster1X_3++;
			}
			else
			{
				monster1X_3--;
			}
			
		}
		if (abs(distanceX) > abs(distanceY)) {
        if (distanceX > 0) {
            if (map3[monster2Y][monster2X + 1] != '*' && map3[monster2Y][monster2X + 1] != '#' &&
                map3[monster2Y][monster2X + 1] != '@' && map3[monster2Y][monster2X + 1] != 'D' &&
                map3[monster2Y][monster2X + 1] != '<') {
                monster2X++;
            }
        } else {
            if (map3[monster2Y][monster2X - 1] != '*' && map3[monster2Y][monster2X - 1] != '#' &&
                map3[monster2Y][monster2X - 1] != '@' && map3[monster2Y][monster2X - 1] != 'D' &&
                map3[monster2Y][monster2X - 1] != '<') {
                monster2X--;
            }
        }
    } else {
        if (distanceY > 0) {
            if (map3[monster2Y + 1][monster2X] != '*' && map3[monster2Y + 1][monster2X] != '#' &&
                map3[monster2Y + 1][monster2X] != '@' && map3[monster2Y + 1][monster2X] != 'D' &&
                map3[monster2Y + 1][monster2X] != '<') {
                monster2Y++;
            }
        } else {
            if (map3[monster2Y - 1][monster2X] != '*' && map3[monster2Y - 1][monster2X] != '#' &&
                map3[monster2Y - 1][monster2X] != '@' && map3[monster2Y - 1][monster2X] != 'D' &&
                map3[monster2Y - 1][monster2X] != '<') {
                monster2Y--;
            }
        }
    }
		input = getch();             // reads the keyboard key that was pressed
				
        switch (input){
        	
        case 'w':
        case 'W':
            if (map3[playerY - 1][playerX] != '*' && map3[playerY - 1][playerX] != '@' && map3[playerY - 1][playerX] != 'D'){        // up
                
                if(map3[playerY - 1][playerX] == '#'){
					{
						playerX = 29, playerY = 58;
						hp--;
					}
				}
				else{
					playerY--;
				}	
				
				if(playerX == 5 && playerY == 11 && map3[playerY][playerX] == '>')
				{
					playerX = 4;
					playerY = 40;
				}
				
				else if(playerX == 4 && playerY == 40 && map3[playerY][playerX] == '<')
				{
					playerX = 5;
					playerY = 11;
				}
				
				else if(playerX == 5 && playerY == 25 && map3[playerY][playerX] == 'O')
				{
					map3[17][31] = ' ';
					map3[17][32] = ' ';
					map3[17][33] = ' ';
				}
				
				else if(playerX == 40 && playerY == 35 && map3[playerY][playerX] == '<')
				{
					playerX = 12;
					playerY = 51;
				}
				
				else if(playerX == 12 && playerY == 51 && map3[playerY][playerX] == '>')
				{
					playerX = 40;
					playerY = 35;
				}
				if(playerY == monster2Y && playerX + 1 == monster2X)
				{
					playerX = 29, playerY = 58;
					hp--;
				}
				if(playerY == monster1Y && playerX == monster1X)
				{
					playerX = 29, playerY = 58;
						hp--;
				}
				if(playerY == monster1Y_2 && playerX == monster1X_2)
				{
					playerX = 29, playerY = 58;
						hp--;
				}
				if(playerY == monster1Y_3 && playerX == monster1X_3)
				{
					playerX = 29, playerY = 58;
						hp--;
				}
				
            }
            break;

      case 'a':
        case 'A':
            if (map3[playerY][playerX - 1] != '*' && map3[playerY][playerX - 1] != '@' && map3[playerY][playerX - 1] != 'D'){        // left

                if(map3[playerY][playerX - 1] == '#'){
					{
						playerX = 29, playerY = 58;
						hp--;
					}
				}
				else{
					playerX--;
				}
				
				if(playerX == 5 && playerY == 11 && map3[playerY][playerX] == '>')
				{
					playerX = 4;
					playerY = 40;
				}
				
				else if(playerX == 4 && playerY == 40 && map3[playerY][playerX] == '<')
				{
					playerX = 5;
					playerY = 11;
				}
				
				else if(playerX == 5 && playerY == 25 && map3[playerY][playerX] == 'O')
				{
					map3[17][31] = ' ';
					map3[17][32] = ' ';
					map3[17][33] = ' ';
					
				}
				
				else if(playerX == 40 && playerY == 35 && map3[playerY][playerX] == '<')
				{
					playerX = 12;
					playerY = 51;
				}
				
				else if(playerX == 12 && playerY == 51 && map3[playerY][playerX] == '>')
				{
					playerX = 40;
					playerY = 35;
				}
				if(playerY == monster2Y && playerX + 1 == monster2X)
				{
					playerX = 29, playerY = 58;
					hp--;
				}
				if(playerY == monster1Y && playerX == monster1X)
				{
					playerX = 29, playerY = 58;
						hp--;
				}
				if(playerY == monster1Y_2 && playerX == monster1X_2)
				{
					playerX = 29, playerY = 58;
						hp--;
				}
				if(playerY == monster1Y_3 && playerX == monster1X_3)
				{
					playerX = 29, playerY = 58;
						hp--;
				}
				
            }
            break;

        case 's':
        case 'S':
            if (map3[playerY + 1][playerX] != '*' && map3[playerY + 1][playerX] != '@' && map3[playerY + 1][playerX] != 'D'){   // down
            
                if(map3[playerY + 1][playerX] == '#'){
					{
						playerX = 29, playerY = 58;
						hp--;
					}
				}
				else{
					playerY++;
				}
				
				if(playerX == 5 && playerY == 11 && map3[playerY][playerX] == '>')
				{
					playerX = 4;
					playerY = 40;
				}
				
				else if(playerX == 4 && playerY == 40 && map3[playerY][playerX] == '<')
				{
					playerX = 5;
					playerY = 11;
				}
				
				else if(playerX == 5 && playerY == 25 && map3[playerY][playerX] == 'O')
				{
					map3[17][31] = ' ';
					map3[17][32] = ' ';
					map3[17][33] = ' ';
					
				}
				
				else if(playerX == 40 && playerY == 35 && map3[playerY][playerX] == '<')
				{
					playerX = 12;
					playerY = 51;
				}
				
				else if(playerX == 12 && playerY == 51 && map3[playerY][playerX] == '>')
				{
					playerX = 40;
					playerY = 35;
				}
				
				if(playerY == monster2Y && playerX + 1 == monster2X)
				{
					playerX = 29, playerY = 58;
					hp--;
				}
				if(playerY == monster1Y && playerX == monster1X)
				{
					playerX = 29, playerY = 58;
						hp--;
				}
				if(playerY == monster1Y_2 && playerX == monster1X_2)
				{
					playerX = 29, playerY = 58;
						hp--;
				}
				if(playerY == monster1Y_3 && playerX == monster1X_3)
				{
					playerX = 29, playerY = 58;
						hp--;
				}
				
            }
            break;

        case 'd':
        case 'D':
            if (map3[playerY][playerX + 1] != '*' && map3[playerY][playerX + 1] != '@' && map3[playerY][playerX + 1] != 'D'){   // right
            		
				if(map3[playerY][playerX + 1] == '#'){
					{
						playerX = 29, playerY = 58;
						hp--;
					}
				}
				else{
					playerX++;
				}	
				
				if(playerX == 24 && playerY == 8 && map3[playerY][playerX] == 'O')
				{
					map3[7][21] = ' ';
					map3[8][21] = ' ';
					map3[9][21] = ' ';
					map3[10][21] = ' ';
				}
				
				else if(playerX == 5 && playerY == 11 && map3[playerY][playerX] == '>')
				{
					playerX = 4;
					playerY = 40;
				}
				
				else if(playerX == 4 && playerY == 40 && map3[playerY][playerX] == '<')
				{
					playerX = 5;
					playerY = 11;
				}
				
				else if(playerX == 5 && playerY == 25 && map3[playerY][playerX] == 'O')
				{
					map3[17][31] = ' ';
					map3[17][32] = ' ';
					map3[17][33] = ' ';
					
				}
				
				else if(playerX == 49 && playerY == 6 && map3[playerY][playerX] == 'O')
				{
					map3[22][34] = ' ';
					map3[23][34] = ' ';
					map3[24][34] = ' ';
				}
				
				if(playerX == 40 && playerY == 35 && map3[playerY][playerX] == '<')
				{
					playerX = 12;
					playerY = 51;
				}
				
				if(playerX == 12 && playerY == 51 && map3[playerY][playerX] == '>')
				{
					playerX = 40;
					playerY = 35;
				}
				
				if(playerY == monster2Y && playerX + 1 == monster2X)
				{
					playerX = 29, playerY = 58;
					hp--;
				}
				if(playerY == monster1Y && playerX == monster1X)
				{
					playerX = 29, playerY = 58;
						hp--;
				}
				if(playerY == monster1Y_2 && playerX == monster1X_2)
				{
					playerX = 29, playerY = 58;
						hp--;
				}
				if(playerY == monster1Y_3 && playerX == monster1X_3)
				{
					playerX = 29, playerY = 58;
						hp--;
				}
				
			}
			break;
			
			case 'i':
			case 'I':
			if(map3[playerY + 1][playerX] == '@' || map3[playerY - 1][playerX] == '@' || map3[playerY][playerX + 1] == '@' || map3[playerY][playerX - 1] == '@') // interaction with the button
			{
				map3[36][15] = ' ';
				map3[59][39] = '=';
				Beep(650, 150);
			}
			break;
		
		default:
			break;
			
	}
	DrawMap3();
    printf("\n\n                                                                     HP: %d\n", hp);
    
    if(map3[playerY][playerX] == '='){
		lvl_3_music_break++;
		pthread_join(tid_3, NULL);
		system("cls||clear");
		map3[36][15] = '@';
		map3[59][39] = 'D';
		map3[17][31] = '#';			
		map3[17][32] = '#';
		map3[17][33] = '#';
		map3[7][21] = '#';
		map3[8][21] = '#';
		map3[9][21] = '#';
		map3[10][21] = '#';
		map3[22][34] = '#';
		map3[23][34] = '#';
		map3[24][34] = '#';
		Game4();
		break;
	}
		
}

	if(hp == 0)
	{
		lvl_3_music_break++;
		pthread_join(tid_3, NULL);
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
	    map3[36][15] = '@';
		map3[59][39] = 'D';
		map3[17][31] = '#';			
		map3[17][32] = '#';
		map3[17][33] = '#';
		map3[7][21] = '#';
		map3[8][21] = '#';
		map3[9][21] = '#';
		map3[10][21] = '#';
		map3[22][34] = '#';
		map3[23][34] = '#';
		map3[24][34] = '#';
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
		map3[36][15] = '@';
		map3[59][39] = 'D';
		map3[17][31] = '#';			
		map3[17][32] = '#';
		map3[17][33] = '#';
		map3[7][21] = '#';
		map3[8][21] = '#';
		map3[9][21] = '#';
		map3[10][21] = '#';
		map3[22][34] = '#';
		map3[23][34] = '#';
		map3[24][34] = '#';
		Menu();
	
	}
		return 0;	
	}
}

int Game4(){
	lvl_4_music_break = 0;
	pthread_t tid_4;
    pthread_create(&tid_4, NULL, lvl_4_music, NULL);
	char input;
    char interaction;
    int i;
    int hp = 5;
    playerX = 1;
    playerY = 13;
    monster3X = 14;
    monster3Y = 6;
    map4[5][15] = '#';
	map4[6][15] = '#';
	map4[7][15] = '#';
	for (i = 2; i <= 12; i++) {
        map4[i][3] = ' ';
        map4[i][4] = ' ';
    }
    map4[7][12] = '#';
    map4[8][12]= '#';
    DrawMap4();
    printf("\n\n                                                                           HP: %d\n\n", hp);
    
    while (hp > 0){
    	
    	input = getch();             // reads the keyboard key that was pressed
				
        switch (input){
        	
        case 'w':
        case 'W':
        	MoveMonster3(playerX, playerY);
            if (map4[playerY - 1][playerX] != '*' && map4[playerY - 1][playerX] != 'J'){        // up
                
                if(map4[playerY - 1][playerX] == '#'){
                	hp--;
                	playerX = 1, playerY = 13;
				}
				else{
					playerY--;
				}
				if(map4[playerY][playerX] == map4[1][14]){
				map4[5][15] = ' ';
				map4[6][15] = ' ';
				map4[7][15] = ' ';
           		}
				if(playerY == monster3Y && playerX + 1 == monster3X)
				{
					playerX = 1, playerY = 13;
					hp--;
				}	
            }
            break;

        case 'a':
        case 'A':
        	MoveMonster3(playerX, playerY);
            if (map4[playerY][playerX - 1] != '*' && map4[playerY][playerX - 1] != 'J'){        // left

                if(map4[playerY][playerX - 1] == '#'){
                	hp--;
                	playerX = 1, playerY = 13;
				}
				else{
					playerX--;
				}
				if (playerY == 13 && playerX == 3) {
                    // Substitui os espaços vazios pelos espinhos nas colunas 13 e 14, da linha 2 à 12
                    for (i = 2; i <= 12; i++) {
                        map4[i][3] = '#';
                        map4[i][4] = '#';
                    }
                    for (i = 2; i <= 12; i++) {
                        if(monster3Y == i && (monster3X == 3 || monster3X ==4)){
                        	map4[7][12] = ' ';
                        	map4[8][12]= ' ';
						}
                    }
                }
           		if(playerY == monster3Y && playerX + 1 == monster3X)
				{
					playerX = 1, playerY = 13;
					hp--;
				}
            break;

        case 's':
        case 'S':
        	MoveMonster3(playerX, playerY);
            if (map4[playerY + 1][playerX] != '*' && map4[playerY + 1][playerX] != 'J' ){   // down
            
                if(map4[playerY + 1][playerX] == '#'){
                	hp--;
                	playerX = 1, playerY = 13;
				}
				else{
					playerY++;
				}
				if (playerY == 13 && playerX == 3) {
                    // Substitui os espaços vazios pelos espinhos nas colunas 13 e 14, da linha 2 à 12
                    for (i = 3; i <= 12; i++) {
                        map4[i][3] = '#';
                        map4[i][4] = '#';
                    }
                    for (i = 2; i <= 12; i++) {
                        if(monster3Y == i && (monster3X == 3 || monster3X ==4)){
                        	map4[7][12] = ' ';
                        	map4[8][12]= ' ';
						}
                    }
                }
				if(playerY == monster3Y && playerX + 1 == monster3X)
				{
					playerX = 1, playerY = 13;
					hp--;
				}
            }
            break;

        case 'd':
        case 'D':
        	MoveMonster3(playerX, playerY);
            if (map4[playerY][playerX + 1] != '*' && map4[playerY][playerX + 1] != 'J'){   // right
            		
				if(map4[playerY][playerX + 1] == '#'){
                	hp--;
                	playerX = 1, playerY = 13;
				}
				else{
					playerX++;
				}	
				if(map4[playerY][playerX] == map4[1][14]){
				map4[5][15] = ' ';
				map4[6][15] = ' ';
				map4[7][15] = ' ';
           		}
				if(playerY == monster3Y && playerX + 1 == monster3X)
				{
					playerX = 1, playerY = 13;
					hp--;
				}
				
			}
			break;
			
		case 'i':
		case 'I':
			if(map4[playerY + 1][playerX] == 'J' || map4[playerY - 1][playerX] == 'J' || map4[playerY][playerX + 1] == 'J' || map4[playerY][playerX - 1] == 'J') // interaction with the button
			{
				Ending_A();
				return 0;
			}
			break;
			
		
		
		default:
			break;	
	}
}
	DrawMap4();
    printf("\n\n                                                                      HP: %d\n", hp);
    
    if(map4[playerY][playerX] == '='){
		system("cls||clear");
		Ending_B();
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
	    map4[5][15] = '#';
		map4[6][15] = '#';
		map4[7][15] = '#';
		for (i = 2; i <= 12; i++) {
        map4[i][3] = ' ';
        map4[i][4] = ' ';
    	}
    	map4[7][12] = '#';
    	map4[8][12]= '#';
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
		map4[5][15] = '#';
		map4[6][15] = '#';
		map4[7][15] = '#';
		for (i = 2; i <= 12; i++) {
        map4[i][3] = ' ';
        map4[i][4] = ' ';
    	}
    	map4[7][12] = '#';
    	map4[8][12]= '#';
		Menu();
	
	}
		return 0;
	}
}
	
int Menu(){
	
	fflush(stdin);
	system ("cls || clear");
	int option;
	
    
   	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf("                 					----------------------------------\n");
	printf("                 					|        Choose your option:     |\n");
	printf("                 					----------------------------------\n");
	printf("                 					|                                |\n");
	printf("                 					|          1. Start              |\n");
	printf("                 					|          2. Tutorial           |\n");
	printf("                 					|          3. Leave              |\n");
	printf("                 					|                                |\n");
	printf("                 					----------------------------------\n");

	  
	
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
