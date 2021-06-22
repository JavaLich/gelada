#include "Window.h"

#include <QHBoxLayout>

Window::Window(QWidget* parent) : QWidget(parent) {
    QHBoxLayout *layout = new QHBoxLayout(this);

    view = new WebView(this);
    view->load(QUrl("https://voidlinux.org"));

    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(view);
}

void Window::keyPressEvent(QKeyEvent* event) {
    if (event->key() == Qt::Key_O) 
        view->load(QUrl("https://duckduckgo.com"));
}
