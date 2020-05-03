#include <QApplication>
#include <QLabel>

int main(int argc, char **argv)
{
    QApplication app(argc,argv);
    QLabel lbl("<h1> Hello <font color=red> world! </font> <h1>");

    lbl.show();

    return app.exec();
}
