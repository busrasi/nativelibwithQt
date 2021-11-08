#include "documentpage.h"

namespace PageGeometry {
    constexpr int const inLowerLeftX{0};
    constexpr int const inLowerLeftY{0};
    constexpr int const inUpperRightX{595};
    constexpr int const inUpperRightY{842};
}

namespace kyc_engine {

    DocumentPage::DocumentPage()
        : m_page(std::make_unique<PDFPage>())
    {
        m_page.get()->SetMediaBox(PDFRectangle(PageGeometry::inLowerLeftX, PageGeometry::inLowerLeftY,
                                       PageGeometry::inUpperRightX, PageGeometry::inUpperRightY));
    }


    PDFPage* DocumentPage::getPage()
    {
        return m_page.get();
    }


} //namespace kyc_engine

