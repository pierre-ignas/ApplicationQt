#include "piece.h"
#include <QGraphicsPixmapItem>
#include "jeuquizo.h"


Piece::Piece() :
{
    QGraphicsPixmapItem();
    x=0;
    y=0;
    this -> setFlags(ItemIsMovable);
    couleur=pieceNeutre;
}

bool Piece::estJouable(couleurPiece joueur, couleurPiece pieceSelect)
    {
        if(pieceSelect == joueur || pieceSelect == pieceNeutre)
        {
             return true ;
        }
else
return false;

    }
void mouseClickEvent(QGraphicsSceneMouseEvent*event)
{

}
