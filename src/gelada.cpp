#include "Application.h"
#include "Window.h"

int main(int argc, char *argv[]) {
    Application app(argc, argv);

    Window window;
    window.show();

    return app.exec();
}
