#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <pthread.h>
#include <unistd.h>

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


void Intro(){
	 int frame = 0;
    int x = 0;


    while (frame < 600) { 
        system("cls"); 
    printf("\n\n Students:\n-Igor 'Radicrow' Acatauassu\n-Joao Arthur 'JoaoArthur25' da Silva\n-Kelton 'KeltonSousa' Sousa\n\n");
      Delay(3000);
    printf("\n        .\\^/.\n");
    printf("      . |`|/| .\n");
    printf("      |\\|\\|'|/|\n");
    printf("   .--'-\\`|/-''--.\n");
    printf("    \\`-._\\|./.-'/\n");
    printf("    >`-._|/.-'<\n");
    printf("    '~|/~~|~~\\|~'\n");
    printf("          |\n");
    printf("Team Aurora Escarlate presents:\n\n");
  
    

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
	Delay(1000);
	printf(".");
	Delay(1000);
	printf(".\n\n");
	printf("One day, Val hears rumors of a powerful artifact hidden deep within a dangerous dungeon. \n");
	printf("Many have tried to claim this artifact before, but none have returned to tell the tale. Despite \n");
	printf("the risks, Val sees this as an opportunity to gain an edge against the empire and bring them \n");
	printf("to their knees.\n");
	Delay(6000);
	printf(".");
	Delay(1000);
	printf(".");
	Delay(1000);
	printf(".\n\n");
	Delay(1000);
	printf("With sword in hand and armor on her back, Val sets out to explore the treacherous dungeon\n");
	printf("and claim the artifact for herself. But she soon realizes that the dangers she faces are greater \n");
	printf("than she ever imagined. Deadly traps, fierce monsters, and dark magic stand in her way, and \n");
	printf("she must use all her skills and cunning to survive.\n");
	Delay(6000);
	printf(".");
	Delay(1000);
	printf(".");
	Delay(1000);
	printf(".\n\n");
	printf("Will Val be able to overcome the challenges of the dungeon and claim the artifact? And if she \n");
	printf("does, will it be enough to help her achieve her ultimate goal of taking down the corrupt\n");
	printf("empire? Only time will tell...\n");
	Delay(6000);

	
	
	
	system("cls||clear");

    printf("            8@@@:    g_          -@@@g            \n");
    Delay(200);
    printf("           8@@@m     g@XeUAmr     X@@@g           \n");
    Delay(200);
    printf("          %%@@@@_    X@@@@@#*-     _@@@@0          \n");
    Delay(200);
    printf("         %%@@@@U    _@@@GyyG@@@x    8@@@@%%         \n");
    Delay(200);
    printf("        %%@@@@@-    @@_      _g@8   ^@@@@@%%        \n");
    Delay(200);
    printf("       8@@@@@U     c;        r@@    @@@@@@8       \n");
    Delay(200);
    printf("      8@@@@@@^            -*8@@,    3@@@@@@D      \n");
    Delay(200);
    printf("     8@@@@@@@@Q,      r#@@@@Dr     S@@@@@@@@#     \n");
    Delay(200);
    printf("    8@@@@@@8  -c    u@@@8r-           g@@@@@@G    \n");
    Delay(200);
    printf("   8@@@@@@@_       *@@@_              ^@@@@@@@G   \n");
    Delay(200);
    printf("  D@@@@@@@X        ^@@@@*              %%@@@@@@@P  \n");
    Delay(200);
    printf(" 8@@@@@@@@-   _t;   g@@@@@;      ct    ^@@@@@@@@y \n");
    Delay(200);
    printf("G@@@@@@@@8     -@@C@K@@@@@@r V*u@@      8@@@@@@@@u\n");
    Delay(200);
    printf("^@@@@@@@@@@8SeP8@@@@@@@@@@@@@@@@@@Gz*cE@@@@@@@@@@,\n");
    Delay(200);
    printf("    ;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@F    \n");
    Delay(200);
    printf("     ;@@@@@@@m 'j@@A@@@@@@@@@@8@@z- ^%%@@@@@@C     \n");
    Delay(200);
    printf("      ;@@@@@@G   :@  _8@@@@@@  z_   g@@@@@@S      \n");
    Delay(200);
    printf("       *@@@@@C    -    u@@@@@       e@@@@@G       \n");
    Delay(200);
    printf("        *@@@@;          j@@@@        %%@@@8        \n");
    Delay(200);
    printf("         *@@@T           g@@@       ^@@@8         \n");
    Delay(200);
    printf("          *@@@@;         ,@@@     -A@@@%%          \n");
    Delay(200);
    printf("           *@@@@8t       -@@0   ;c@@@@g           \n");
    Delay(200);
    printf("            c@@@@@      ,@@m   _@@@@@@            \n");
    Delay(200);
    printf("             c@@@@     v@@*     @@@@@-            \n");
    Delay(200);
    printf("              c@@@-   8@g-      @@@8-             \n");
    Delay(200);
    printf("                    g@       ^                    \n");
    Delay(200);
    printf("                    *@8-  ;D@t                    \n");
    Delay(200);
    printf("                     z@@P@@@f                     \n");
    Delay(200);
    printf("                      f@@@@t                      \n");
    Delay(200);
    printf("                       C@@t                       \n");
    Delay(200);
    printf("\n\n");
  

    printf("\t\t        Val's Adventure!  \n\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t    Press any key to begin...\n\n");

   

    while (!_kbhit()) { 
        printf("\r\t\t          ");
        Sleep(1000); 
    }

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t    Let the adventure begin!\n\n");
	printf("Loading...");
	intro_music_break++;
	pthread_join(tid, NULL);
	system("cls||Clear")
	break;
    }
	Menu();
}

void Menu(){
	printf("Insira o Jogo aqui");
	Delay(4000);
	printf("Aa");
}





int main(void){
Intro();
}
