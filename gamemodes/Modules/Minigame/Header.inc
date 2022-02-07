#define MINIGAME_COUNT 2
#define MINIGAME_WORLD 100

new bool:InMinigame[MAX_PLAYERS];
new Minigame[MAX_PLAYERS];

new const MinigameTypes[][] = {"Deathmatch","Team Deathmatch"};

enum
{
	DEATHMATCH = 0,
	TEAM_DEATHMATCH = 1
}

enum E_MINIGAME_INFO
{
	Type,
	Name[32],
	Interior,
	bool:Started
}
new const MinigameInfo[MINIGAME_COUNT][E_MINIGAME_INFO] = {
	{DEATHMATCH,"Cowboy standoff",0,false},
	{TEAM_DEATHMATCH,""}
};
