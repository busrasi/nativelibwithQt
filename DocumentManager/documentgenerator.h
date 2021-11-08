#ifndef DOCUMENTGENERATOR_H
#define DOCUMENTGENERATOR_H

#include <vector>

#include "documentpage.h"

namespace kyc_engine {

    class DocumentGenerator
    {
        public:
            DocumentGenerator(const std::string &path);

            bool generateDocument();
            void addPage(const DocumentPage &page);

        private:


            std::vector<DocumentPage> m_pages{};
            std::string m_path;
            PageContentContext* m_contentContext;
           // DocumentPage m_thisPage;

    };
}

#endif // DOCUMENTGENERATOR_H
