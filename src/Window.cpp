#include "Window.h"

#include <QVBoxLayout>

#include <iostream>

Window::Window(QWidget* parent) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);

    view = new WebView(this);
    view->load(QUrl("https://duckduckgo.com"));
    layout->addWidget(view);

    url = new QLineEdit(this);
    url->setText("https://duckduckgo.com");
    url->setVisible(false);
    layout->addWidget(url);

    QObject::connect(url, &QLineEdit::returnPressed, this, &Window::go);
}

void Window::go() {
    url->setVisible(false);
    view->load(QUrl(url->text()));
}

void Window::keyPressEvent(QKeyEvent* event) {
    switch(event->key()) {
        case Qt::Key_O:
            url->setVisible(true);
            url->setFocus();
            url->selectAll();
            break;
    }
}
