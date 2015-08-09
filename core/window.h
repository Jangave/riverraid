#ifndef _WINDOW_H_
#define _WINDOW_H_

#include "engine.h"
#include "node.h"

class Window : public Node
{
    private:
        GLFWwindow* nativeWindow;
        int width;
        int height;
        vector<Node*> childs;
    public:
        Window(int w, int h, string titulo);
        void setup();
        void takeFocus();

        bool isClosing();
        void update();

        GLFWwindow* getNative();

        ~Window();

        /* virtual of node: */
        void draw();
};

#endif