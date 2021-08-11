// main.cpp
// QXlsx // MIT License // https://github.com/j2doll/QXlsx
//

#include <QtGlobal>
#include <QCoreApplication>
#include <QtCore>
#include <QString>
#include <QVariant>
#include <QDir>
#include <QDebug>

#include <iostream>
using namespace std;

// [0] include QXlsx headers
#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
using namespace QXlsx;

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    Document doc(":/broker.xlsx");
    if (!doc.load())
    {
        qDebug() << "[debug][error] failed to load xlsx file.";
        return (-1);
    }

    qDebug() << "[debug] success to load xlsx file.";
    return 0;
}
