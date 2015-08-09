#include "window.h"

Window::Window(int w, int h, string title) {
    this->width = w;
    this->height = h;
    this->nativeWindow = glfwCreateWindow(w,h,title.c_str(),NULL /* Monitor */, NULL /* (?) Share */);
    
    if (this->nativeWindow == NULL)
    {
        cerr << "Window not started" << endl;
        exit(-1);
    }

    glfwMakeContextCurrent(nativeWindow);
}

void Window::takeFocus() {
    glfwMakeContextCurrent(nativeWindow);
}

bool Window::isClosing() {
    return glfwWindowShouldClose(nativeWindow);
}

void Window::update() {
    glfwGetFramebufferSize(nativeWindow, &width, &height);
    //glfwSwapBuffers(nativeWindow);
    glViewport(0, 0, width, height);
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glOrtho(0, width, 0, height, 0.f, 100.f);
    glMatrixMode(GL_MODELVIEW);
    glfwWindowHint (GLFW_SAMPLES, 4);
    glLoadIdentity();

    // this->takeFocus();
    this->draw();
    glfwPollEvents();        
    cout.flush();
    cerr.flush();
}

GLFWwindow* Window::getNative() {
    return nativeWindow;
}

Window::~Window() {
    glfwDestroyWindow(nativeWindow);
}

void Window::draw() {
    vector<Node*>* c = this->getChilds();
    glPushMatrix();
        //glTranslated(0,0,-6);
        for(int i = 0; i < c->size(); i++) {
            (*c)[i]->draw();
        }
    glPopMatrix();
    glfwSwapBuffers(nativeWindow);
};