#ifndef RUOPLAYER_PLAYER_H
#define RUOPLAYER_PLAYER_H

#include <QWidget>

class Player : public QWidget {
    Q_OBJECT

   public:
    explicit Player(QWidget *parent = nullptr);

    ~Player() = default;
};

#endif  // RUOPLAYER_PLAYER_H
