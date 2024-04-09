#include <QCoreApplication>
#include <filewatcher.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    FileWatcher fileWatcher1;
    fileWatcher1.addFile("C:/PreloadLog.LOG");
    fileWatcher1.addFile("C:/Users/Ramina/Desktop/test.docx");
    while (true){
        fileWatcher1.checkChangesInFiles();
    }
    return a.exec();
}
