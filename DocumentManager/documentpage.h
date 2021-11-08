#ifndef DOCUMENTPAGE_H
#define DOCUMENTPAGE_H

#include <memory>
#include <PDFWriter/PDFPage.h>

namespace kyc_engine {

    enum PageType {
        Vertical,
        Horizontal
    };

    class DocumentPage
    {
        public:
            DocumentPage();
            ~DocumentPage() = default;

             PDFPage* getPage();
           //PDFPage* getPage();

        private:
            std::unique_ptr<PDFPage> m_page{};

    };

} //namespace kyc_engine

#endif // DOCUMENTPAGE_H
