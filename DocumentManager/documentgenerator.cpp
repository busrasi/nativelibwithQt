#include "documentgenerator.h"
#include <PDFWriter/PDFWriter.h>
#include <iostream>

namespace kyc_engine {
    DocumentGenerator::DocumentGenerator(const std::string &path)
        :m_path(path)
    {

    }

    bool DocumentGenerator::generateDocument()
    {
        PDFWriter pdfWriter;

       // pdfWriter.StartPDF(m_path,ePDFVersion13);
        pdfWriter.StartPDF("/Users/busrasirin/Source/DocumentManager/XObjectContent.pdf",ePDFVersion13);

        for(auto it = m_pages.begin(); it != m_pages.end(); it++){

            auto page = (*it).getPage();

            m_contentContext = pdfWriter.StartPageContentContext(page);

        }
        if(pdfWriter.EndPageContentContext(m_contentContext) == false){
            std::cout<< "failed to end page content context\n";
            return false;
        }
        else return true;

    }
    void DocumentGenerator::addPage(const DocumentPage& page)
    {
        m_pages.push_back(page);
    }
}


