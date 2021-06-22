#pragma once

#include <QWebEngineView>
#include <QKeyEvent>

class WebView : public QWebEngineView {
    public:
        WebView(QWidget* parent = 0) : QWebEngineView(parent) {}
};
