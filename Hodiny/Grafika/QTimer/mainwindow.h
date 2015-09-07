#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void vykresli();


private:
    Ui::MainWindow *ui;
    QGraphicsScene scene;
    QTimer *timer;
    int krok;
};

#endif // MAINWINDOW_H
