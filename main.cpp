#include <QCoreApplication>
#include <filewatcher.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Russian"); //установка русской локали
    FileWatcher fileWatcher1; //создание обьекта класса FileWatcher
    fileWatcher1.addFile("C:/PreloadLog.LOG"); //добавление файла для отслеживание
    fileWatcher1.addFile("C:/Users/Ramina/Desktop/test.txt"); //добавление файла для отслеживание

    //бессконечный цикл для проверки изменений в файлах
    while (true){
        fileWatcher1.checkChangesInFiles(); //проверка изменений в файлах
    }
}
