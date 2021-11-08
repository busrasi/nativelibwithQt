#ifndef DOCUMENTCONTENTMANAGER_H
#define DOCUMENTCONTENTMANAGER_H
#include <iostream>


enum ContentType {
    Image,
    PDF,
    Text
};

class DocumentContentManager
{
    public:
        DocumentContentManager();

        static void addContent(const ContentType content = ContentType::Image);

    private:

        static void addImageContent(std::string imagePath,std::string targetPDFPath);
        //        addPDFContent

        std::string m_contentImagePath;
        std::string m_targetPDFPath;


};

#endif // DOCUMENTCONTENTMANAGER_H
