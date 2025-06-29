#pragma once

#include "GameLevel.h"
#include "BallObject.h"
#include "GLFW/glfw3.h"
#include "ParticleGenerator.h"
#include "PostProcess.h"
#include "PowerUp.h"
#include "AudioPlayer.h"
#include "TextRenderer.h"

#include <tuple>

enum GameState {
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};

enum Direction {
	UP,
	RIGHT,
	DOWN,
	LEFT
};

const glm::vec2 PLAYER_SIZE(215.0f, 48.0f);
const glm::vec2 INITIAL_BALL_VELOCITY(150.0f, -350.0f);
const float BALL_RADIUS = 12.5f;
const float PLAYER_VELOCITY(1000.0f);

typedef std::tuple<bool, Direction, glm::vec2> Collision;

class Game {
public :
	unsigned int Lives;
	GameState State;
	bool Keys[1024];
	bool KeysProcessed[1024];
	unsigned int Width, Height;
	std::vector<GameLevel> Levels;
	std::vector<PowerUp> PowerUps;
	unsigned int Level;

	Game(unsigned int width, unsigned int height);
	~Game();

	void Init();
	void ProcessInput(float dt);
	void Update(float dt);
	void Render();
	void DoCollisions();
	void ResetLevel();
	void ResetPlayer();
	void SpawnPowerUps(GameObject& block);
	void UpdatePowerUps(float dt);
};

