cmake_minimum_required(VERSION 3.14)

project(DocumentManager LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

set(LIB_PATH "/Users/busrasirin/Development/lib")
set(INCLUDE_PATH "/Users/busrasirin/Development/include")

add_executable(${CMAKE_PROJECT_NAME}
  main.cpp

  documentpage.cpp
  document_content_manager.cpp
  documentgenerator.cpp

  documentpage.h
  document_content_manager.h
  documentgenerator.h
  XObjectContent.pdf
)
target_link_libraries(${CMAKE_PROJECT_NAME} Qt${QT_VERSION_MAJOR}::Core
    ${LIB_PATH}/libFreeType.a
    ${LIB_PATH}/libLibAesgm.a
    ${LIB_PATH}/libLibJpeg.a
    ${LIB_PATH}/libLibPng.a
    ${LIB_PATH}/libLibTiff.a
    ${LIB_PATH}/libPDFWriter.a
    ${LIB_PATH}/libZlib.a


    )
target_include_directories(${CMAKE_PROJECT_NAME}
    PUBLIC ${INCLUDE_PATH})
