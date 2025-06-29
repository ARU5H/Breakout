#pragma once

#include "SpriteRenderer.h"

#include <iostream>

class PostProcess
{
public:
	Shader PostProcessingShader;
	Texture2D Texture;
	unsigned int Width, Height;
	bool Confuse, Chaos, Shake;
	
	PostProcess(Shader shader, unsigned int width, unsigned int height);
	
	void BeginRender();
	void EndRender();
	void Render(float time);

private:
	unsigned int MSFBO, FBO;
	unsigned int RBO;
	unsigned int VAO;

	void initRenderData();
};

