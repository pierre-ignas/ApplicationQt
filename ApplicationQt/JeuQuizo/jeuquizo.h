#ifndef JEUQUIZO_H
#define JEUQUIZO_H

#include <QMainWindow>

namespace Ui {
class JeuQuizo;
}

class JeuQuizo : public QMainWindow
{
    Q_OBJECT

public:
    explicit JeuQuizo(QWidget *parent = 0);
    ~JeuQuizo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::JeuQuizo *ui;
};

#endif // JEUQUIZO_H
