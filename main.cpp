#include <QApplication>

#include "Player.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QCoreApplication::setApplicationName("RuoPlayer");
    QCoreApplication::setOrganizationName("https://github.com/Ruomenger");
    QCoreApplication::setApplicationVersion("0.0.1");

    Player player;
    player.show();

    return QApplication::exec();
}
