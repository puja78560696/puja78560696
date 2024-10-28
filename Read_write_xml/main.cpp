
/**************** this code fore read and write xml file**********************/

#include <QCoreApplication>
#include <QXmlStreamReader>
#include <QString>
#include <QFile>

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    // Replace "your_xml_file.xml" with the actual path to your XML file
    QString fileName = "output.xml";

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Error opening file: " << file.errorString();
        return 1;
    }

    QXmlStreamReader xml(&file);

    while (!xml.atEnd()) {
        xml.readNext();

        if (xml.hasError()) {
            qDebug() << "Error reading XML: " << xml.errorString();
            return 1;
        }

        if (xml.tokenType() == QXmlStreamReader::StartElement) {
            QString elementName = xml.name().toString();

            if (elementName == "child1") {
                // Process child1 element
                QString id = xml.attributes().value("id").toString();
                qDebug() << "child1 id: " << id;
                while (!xml.atEnd() && xml.readNextStartElement()) {
                    if (xml.name().toString() == "name") {
                        QString name = xml.readElementText();
                        qDebug() << "child1 name: " << name;
                    } else {
                        xml.skipCurrentElement();
                    }
                }
            }
            else if (elementName == "child2") {
                // Process child2 element
                QString link = xml.attributes().value("link").toString();
                while (!xml.atEnd() && xml.readNextStartElement()) {
                    if (xml.name().toString() == "name") {
                        QString name = xml.readElementText();
                        qDebug() << "child1 name: " << name;
                    } else {
                        xml.skipCurrentElement();
                    }
                }
                qDebug() << "child2 link: " << link;
            }
        }
    }

    file.close();

    return a.exec();
}
