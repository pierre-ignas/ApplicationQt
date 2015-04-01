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
    QGraphicsScene * ma_scene;
    ma_scene = new QGraphicsScene();
    QGraphicsPixmapItem * mon_item;

    piece * tableau [5][5];


    QPixmap * mon_image = new QPixmap(":/index.jpeg");
    // Mettre les autres images
    //

    for (int j=0; j<5; ++j)
    {
        for (i=0; i<5; ++i)
        {
            tableau [j][i] = new piece ();
            tableau [j][i] = setPixmap(* mon_image);
            ma_scene -> addItem(tableau [j][i]);
            tableau [j][i]-> setPos(i*45, j*45);
        }
    }
    ui ->ma_vue->setScene(ma_scene);
}

JeuQuizo::~JeuQuizo()
{
    delete ui;
}

void JeuQuizo::on_pushButton_clicked()
{
    qApp -> quit();
}
