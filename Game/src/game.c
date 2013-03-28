#include <inttypes.h>

#include "build.h"
#include "engine.h"


int32_t BFullScreen = 1;  // defined in Game\src\config.c
int32_t ScreenMode = 1;

// Game play speed
int g_iTickRate = 120;
int g_iTicksPerFrame = 26;


void faketimerhandler () {
    
}

void keyhandler () {
    
}

int SafeFileExists ( const char   *_filename ) {
    return 1;
}

void Error (int errorType, char  *error, ...) {
    exit(1);
}

int main (int argc, char **argv)
{
    int32_t pos_x, pos_y, pos_z;
    short ang, sector_num;
    EngineState *engine_state;
    
    printf("teste\n");
    
    initgroupfile("/Users/cesar/apps/chocolate_duke3D/bin/DUKE3D.GRP");
    
    _platform_init(argc, argv, "Duke Nukem 3D", "Duke3D");
    
    //RegisterShutdownFunction( ShutDown );

    
    initengine();
    // CTW END - MODIFICATION
    inittimer(g_iTickRate);
    
    puts("Loading art header.");
    
    loadpics("tiles000.art", "\0");
    //Startup();
    //inittimer(TICRATE);
    //loadpics("tiles000.art", "\0");
    loadboard("/Users/cesar/simple.map", &pos_x, &pos_y, &pos_z, &ang, &sector_num);

    //initengine();
    setgamemode(2,1024,640);
    //genspriteremaps();
    setbrightness(7, &palette[0]);

    //newgame(ud.m_volume_number,ud.m_level_number,ud.m_player_skill);
    //enterlevel(MODE_GAME); //start game.
    
    while (1) {
        //sampletimer();
        drawrooms(-31243,7160,7168,-90,140,0,false);

        //animatesprites(s->x, s->y, cang, smoothratio, engine_state);
        //drawmasks(engine_state, false);
        //setbrightness('\b', &palette[0]);
        nextpage();
    }
}
