#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsPixmapItem>

class Piece : public QGraphicsPixmapItem
{
public:
    Piece(int x,int y);
    enum couleurPiece {pieceNeutre=0, PieceRond=1, pieceCroix=2};
    explicit Piece();
   // explicit Piece(couleurPiece _couleur, int16_t _x, int16_t _y);
    bool estJouable(couleurPiece joueur, couleurPiece pieceSelect);
    int16_t x;
    int16_t y;

protected:
    void mouseClickEvent(QGraphicsSceneMouseEvent*event);
    //void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

private:
    std::vector<QPixmap *> collection;
    couleurPiece couleur;


};

#endif // PIECE_H
