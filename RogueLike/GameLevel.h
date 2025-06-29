#pragma once

#include "GameObject.h"
#include <vector>
#include <fstream>
#include <sstream>

class GameLevel
{
public:
	std::vector<GameObject> Bricks;

	GameLevel();

	void Load(const char* file, unsigned int levelWidth, unsigned int levelHeight);

	void Draw(SpriteRenderer& renderer);

	bool isCompleted();

private:
	void init(std::vector<std::vector<unsigned int>> tileData, unsigned int levelWidth, unsigned int levelHeight);
};

