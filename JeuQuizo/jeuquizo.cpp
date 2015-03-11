#include "jeuquizo.h"
#include "ui_jeuquizo.h"
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

JeuQuizo::JeuQuizo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::JeuQuizo)
{
    ui->setupUi(this);
    QPixmap * mon_image = new QPixmap(":/index.jpeg");
    QGraphicsPixmapItem*mon_item = new QGraphicsPixmapItem(*mon_image);
    QGraphicsScene*ma_scene = new QGraphicsScene();
    ma_scene -> addItem(mon_item);
    ui->ma_vue->setScene(ma_scene);}

JeuQuizo::~JeuQuizo()
{
    delete ui;
}

void JeuQuizo::on_pushButton_clicked()
{
    qApp -> quit();
}
