#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsPixmapItem>

class Piece : public QGraphicsPixmapItem
{
public:

    enum couleurPiece {pieceNeutre=0, PieceRond, pieceCroix};
    explicit Piece();
    explicit Piece(couleurPiece _couleur, int16_t _x, int16_t _y);
    bool Selectionnable();
    int16_t x;
    int16_t y;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent*event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

private:
    std::vector<QPixmap *> collection;
    couleurPiece couleur;


};

#endif // PIECE_H
