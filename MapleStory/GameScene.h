#pragma once

class SprMgr;
class Asset;
class Map;
class Mob;
class MCharacter;

class GameScene : public Scene
{
public:
	SCENE_CONSTRUCTOR

	void Init();
	void Update(float Delta);
	void Render(Gdiplus::Graphics* _memG);
	void Release();

private:
	Map* map;
	MCharacter* player;
	Mob* pMob;
	Mob* pMob2;
};