#include "Primitives.h"


namespace neno
{
	void Primitives::DrawRectangle(int x, int y, int width, int height, Color color)
	{
        glColor3f(color.r,color.g,color.b);

        // początek definicji wielokąta
        glBegin(GL_QUADS);

        // kolejne wierzchołki wielokąta
        glVertex3f(x, y, 0.0);
        glVertex3f(x, y+height, 0.0);
        glVertex3f(x+width,y+height, 0.0);
        glVertex3f(x+width, y, 0.0);

        // koniec definicji prymitywu
        glEnd();
        glFlush();
	}
}