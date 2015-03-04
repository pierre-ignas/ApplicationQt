#include "jeuquizo.h"
#include "ui_jeuquizo.h"

JeuQuizo::JeuQuizo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::JeuQuizo)
{
    ui->setupUi(this);
}

JeuQuizo::~JeuQuizo()
{
    delete ui;
}
