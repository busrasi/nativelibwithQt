#include <QCoreApplication>

#include "documentpage.h"
#include "documentgenerator.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //pathleri main
    //
    kyc_engine::DocumentGenerator* document;
    kyc_engine::DocumentPage *documentPage;


    kyc_engine::DocumentGenerator("/Users/busrasirin/Source/DocumentManager/pdf_out.pdf");
     documentPage->getPage();


    return a.exec();
}
