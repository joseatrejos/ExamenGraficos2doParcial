// Las clases llevan la primer letra may�scula

#pragma once // Con esto definimos que el c�digo se ejecutar� una sola vez

#include <stdio.h>
#include <stdlib.h>
#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Shader
{
public:
	GLuint getID(); // Obtiene el ID del shader
	Shader(const char* rutaVertex, const char* rutaFragment);
	void enlazar();
	void desenlazar();

private:
	GLuint shaderID;
	void verificarCompilacion(GLuint id);
	void verificarVinculacion(GLuint id);
};

/*
void main()
{
	
}
*/