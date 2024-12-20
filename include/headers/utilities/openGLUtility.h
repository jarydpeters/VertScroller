#ifndef OPENGLUTILITY_H
#define OPENGLUTILITY_H

#include <glew.h>
#include <iostream>
#include <SDL_opengl.h>
#include <SDL.h>

#include "assetFilePaths.h"
#include "shaderUtility.h"

void initOpenGL(SDL_Window* window);
void cleanupOpenGL();
void renderQuadWithTexture(GLuint textureID, const SDL_Rect& rect);

extern SDL_GLContext glContext;
extern GLuint shaderProgram;

#endif //OPENGLUTILITY_H