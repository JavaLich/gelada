#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>

class Application : public QApplication {
    public:
        Application(int& argc, char** argv) : QApplication(argc, argv) {}

        virtual bool notify(QObject* reciever, QEvent* event) override;
};

#endif
