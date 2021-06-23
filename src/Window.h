#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QLineEdit>

#include "WebView.h"

class Window : public QWidget {
    public:
        Window(QWidget* parent = 0);
    protected:
        virtual void keyPressEvent(QKeyEvent* event) override;
    public slots:
        void go();
    private:
        WebView* view;

        QLineEdit* url;
};

#endif
