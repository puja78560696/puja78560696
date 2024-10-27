// // // // #include <QCoreApplication>
// // // // #include <QCoreApplication>
// // // // #include <QDomDocument>
// // // // #include <QFile>
// // // // #include <QTextStream>
// // // // #include <QDebug>

// // // #include <QCoreApplication>
// // // #include <QDomDocument>
// // // #include <QFile>
// // // #include <QTextStream>
// // // #include <QDebug>

// // // int main(int argc, char *argv[]) {
// // //     QCoreApplication a(argc, argv);

// // //     QDomDocument document;

// // //     // Create the root element
// // //     QDomElement root = document.createElement("Root");
// // //     document.appendChild(root);

// // //     // Create a child element
// // //     QDomElement child = document.createElement("Child");
// // //     child.setAttribute("attribute", "value");
// // //     child.appendChild(document.createTextNode("This is a child element."));
// // //     root.appendChild(child);

// // //     // Add another child element
// // //     QDomElement anotherChild = document.createElement("AnotherChild");
// // //     anotherChild.appendChild(document.createTextNode("Another child element text."));
// // //     root.appendChild(anotherChild);

// // //     // Specify the file path
// // //     QString filePath = "output.xml";

// // //     // Open the file for writing
// // //     QFile file(filePath);
// // //     if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
// // //         qWarning() << "Failed to open file for writing:" << file.errorString();
// // //         return -1;
// // //     }

// // //     // Create a QTextStream to write text to the file
// // //     QTextStream stream(&file);

// // //     // Write the XML document to the file
// // //     stream << document.toString();

// // //     // Close the file
// // //     file.close();

// // //     return a.exec();
// // // }


// // // // #include <QCoreApplication>
// // // // #include <QDomDocument>
// // // // #include <QFile>
// // // // #include <QDebug>

// // // // int main(int argc, char *argv[]) {
// // // //     QCoreApplication a(argc, argv);
// // // //     QFile file("output.xml");
// // // //     QDomDocument doc;

// // // //     doc.setContent(&file);

// // // //     QDomElement root=doc.documentElement();
// // // //     //qDebug()<<"root="<<root;

// // // //   QDomNodeList child  =doc.elementsByTagName("Weapon Engag");
// // // //     for(int i=0;i<=child.count();++i)
// // // //   {

// // // //       QDomElement childelement= child.at(i).toElement();
// // // //         QString str= childelement.text();

// // // //       qDebug()<<"str="<<str;



// // // //   }




// // // //     return a.exec();
// // // // }



/**************** this code fore read and write xml file**********************/





// // #include <QCoreApplication>
// // #include <QDomDocument>
// // #include <QFile>
// // #include <QDebug>
// // #include <string>
// // #include <sstream>
// // #include <iostream>
// // #include <unordered_map>
// // #include <stdlib.h>
// // #include <stdio.h>
// // //#include<QString>
// // class A{

// // };
// // void charccount(std::string & str);
// // int main(int argc, char *argv[]) {
// //     // QCoreApplication a(argc, argv);

// //     // QDomDocument document;
// //     // QFile file("input.xml"); // Specify the path to your XML file

// //     // // Open the file for reading
// //     // if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
// //     //     qWarning() << "Failed to open file for reading:" << file.errorString();
// //     //     return -1;
// //     // }

// //     // // Read the file content into QDomDocument
// //     // // if (!document.setContent(&file)) {
// //     // //     qWarning() << "Failed to parse XML content.";
// //     // //     file.close();
// //     // //     return -1;
// //     // // }

// //     // // Close the file
// //     // //file.close();


// //     // document.setContent(&file);

// //     // // Get the root element
// //     // QDomElement root = document.documentElement();

// //     // // Traverse and read elements
// //     // QDomNodeList children = root.elementsByTagName("Child");
// //     // for (int i = 0; i < children.count(); ++i) {
// //     //     QDomElement childElement = children.at(i).toElement();
// //     //     QString attributeValue = childElement.attribute("attribute");
// //     //     QString textValue = childElement.text();

// //     //     qDebug() << "Child element attribute:" << attributeValue;
// //     //     qDebug() << "Child element text:" << textValue;
// //     // }

// //     // // Read other elements
// //     // QDomNodeList anotherChildren = root.elementsByTagName("AnotherChild");
// //     // for (int i = 0; i < anotherChildren.count(); ++i) {
// //     //     QDomElement anotherChildElement = anotherChildren.at(i).toElement();
// //     //     QString anotherChildText = anotherChildElement.text();

// //     //     qDebug() << "AnotherChild element text:" << anotherChildText;
// //     // }

// //     // return a.exec();

// //    // A a;
// //    // qDebug()<<sizeof(a);
// //      //std::string str;
// //    // int str;
// //  //   std::cout<<"enter string"<<std::endl;
// //  //    std::cin>>str;
// //    // getline(std::cin,str);
// //    // charccount(str);

// // //   int count   =0;
// // //     int counth   =0;
// // //   int counto   =0;
// // //     for(int i=0;i<=str.length();i++)
// // //  {
// // //         if(str[i]=='l')
// // //         {
// // //             count++;
// // //         }
// // //         if(str[i]=='h')
// // //         {
// // //             counth++;
// // //         }
// // //         if(str[i]=='o')
// // //         {
// // //             counto++;
// // //         }

// // // }

// //      /*     ***************convert int into string*************  */

// //      std::string str1=  std::to_string(str);

// //      std::cout<<"str1="<<str1.c_str()<<std::endl;


// //      /********** dynamically memory in 2D array *****************/


// //      int row=2, col=2, count=0;
// //      int* a = new int[row*col];
// //      //std::cout<<"*a="<<sizeof(a)<<std::endl;
// //      int i,j;
// //      for( i=0;i<=row;i++)
// //      {
// //        for( j=0;j<=col;j++)
// //          {
// //              std::cout<<"i="<<i<<"j="<<j<<"col="<<col<<std::endl;
// //              std::cout<<*a<<std::endl;
// //            // (a+i*col+j);

// //              count++;

// //              std::cout<<" *(a+i*col+j)"  << i*col+j<<std::endl;
// //              std::cout<<"count="<<count<<std::endl;




// //          }
// //   std::cout<<"j="<<j<<std::endl;

// //      }


// //      int f,b,c;
// //      char *s= "6544";
// //      char c1='a';

// //     // sscanf(s,%d , &amp; a);

// //      b=atoi(s);
// //      std::cout<<"b="<<b<<s<<std::endl;

// //      c= (int)c1;

// //      std::cout<<"b="<<b<<""<<c<<std::endl;






// //  return 0;
// // }
// // //count alphabet occurence
// // /* void charccount(std::string& str)
// // {
// //     std::unordered_map<char ,int> count;
// //     for(char ch:str){
// //         if(std::isalpha(ch))
// //         {
// //             ch=std::tolower(ch);
// //             count[ch]++;
// //         }
// //     }


// //     //qDebug()<<"count="<<count;
// //     //  qDebug()<<"count="<<counth;
// //     // qDebug()<<"count="<<counto;

// //     for(auto& pair:count)
// //     {
// //         std::cout<< pair.first <<pair.second <<std::endl;

// //     }
// // }


// // */



// #include <QCoreApplication>
// #include <QDomDocument>
// #include <QFile>
// #include <QTextStream>
// #include <QDebug>
// #include <QDateTime>

// void appendToXml(const QString &filePath) {
//     QDomDocument doc;
//     QFile file(filePath);

//     // Check if the file exists
//     if (file.exists()) {
//         if (!file.open(QIODevice::ReadOnly)) {
//             qWarning() << "Failed to open file for reading.";
//             return;
//         }
//         // Load the existing XML
//         if (!doc.setContent(&file)) {
//             file.close();
//             qWarning() << "Failed to parse XML.";
//             return;
//         }
//         file.close();
//     } else {
//         // Create the root element if the file doesn't exist
//         QDomElement root = doc.createElement("Root");
//         doc.appendChild(root);
//     }

//     // Get the root element
//     QDomElement root = doc.documentElement();

//     QDomElement rootnewItem = doc.createElement("rootItem");
//     root.appendChild(rootnewItem);
//     // Create a new item element with a unique timestamp
//     QDomElement newItem = doc.createElement("Item");

//     QString uniqueText = QString("New item added at run time! [%1]").arg(QDateTime::currentDateTime().toString());
//     newItem.appendChild(doc.createTextNode(uniqueText));
//       rootnewItem.appendChild(newItem);
//     QDomElement newItem1 = doc.createElement("Item1");
//       QString uniqueText1 = QString("New item added at run time! [%1]").arg(QDateTime::currentDateTime().toString());
//       newItem1.appendChild(doc.createTextNode(uniqueText1));
//     rootnewItem.appendChild(newItem1);
//     // Append the new item to the root


//     // Save the XML back to the file
//     if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
//         qWarning() << "Failed to open file for writing.";
//         return;
//     }

//     QTextStream stream(&file);
//     stream << doc.toString();
//     file.close();
// }

// int main(int argc, char *argv[]) {
//     QCoreApplication a(argc, argv);

//     QString xmlFilePath = "data.xml";
//     appendToXml(xmlFilePath);

//     return a.exec();
// }
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
