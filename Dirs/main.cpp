#include <QCoreApplication>
#include <Qdebug>
#include <QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString mPath = "C:/Datos/Descargas";
    QDir mDir(mPath);


    foreach(QFileInfo mitm, mDir.entryInfoList())
    {

        //qDebug() << mitm.absoluteFilePath();
        if(mitm.isDir()) qDebug() << "Dir: " << mitm.absoluteFilePath();
        if(mitm.isFile()) qDebug() << "File: " << mitm.absoluteFilePath();
    }



    /*
    if(!mDir.exists(mPath))
    {
        mDir.mkpath(mPath);
        qDebug() << "Created";
    }
    else
    {
        qDebug() << "Already Exists";
    }
    */
    /*
    foreach (QFileInfo mItm, mDir.drives())
    {
        qDebug() << mItm.absoluteDir();
    }*/

    return a.exec();
}
