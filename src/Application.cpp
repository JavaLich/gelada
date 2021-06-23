#include "Application.h"

#include <QKeyEvent>

#include <iostream>

bool Application::notify(QObject* reciever, QEvent* event) {
    if (event->type() == QEvent::KeyPress && ((QKeyEvent*) event)->key() == Qt::Key_Escape) {
        std::cout << reciever->isWindowType() << std::endl;

        return true;
    }

    return QApplication::notify(reciever, event);
}
