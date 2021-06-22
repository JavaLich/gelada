#pragma once

#include <QWidget>

#include "WebView.h"

class Window : public QWidget {
    public:
        explicit Window(QWidget* parent = 0);
    protected:
        virtual void keyPressEvent(QKeyEvent* event) override;
    private:
        WebView* view;
};
