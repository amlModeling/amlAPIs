
#
# anytype.cmake
# This file was created by EMF4CPP 1.1.0 and is copyrighted by the
# respective user and/or provider of the processed ECORE model.
#
# EMF4CPP is free software. You can obtain it from
# https://github.com/catedrasaes-umu/emf4cpp
#
#


set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS_DEBUG "-Wall -g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O3 -funroll-loops")

set(anytype_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/AnytypePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/AnytypeFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/AnytypePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/AnytypeFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/Element.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/ElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/GenericElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/GenericElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/GenericAttribute.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/GenericAttributeImpl.cpp
   )
   
set(anytype_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/AnytypePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/AnytypeFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/Element.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/GenericElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/anytype/GenericAttribute.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/anytype.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/anytype_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/anytype/AnytypeFactory.hpp DESTINATION include/emf4cpp/anytype)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/anytype/AnytypePackage.hpp DESTINATION include/emf4cpp/anytype)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/anytype/Element.hpp DESTINATION include/emf4cpp/anytype)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/anytype/GenericElement.hpp DESTINATION include/emf4cpp/anytype)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/anytype/GenericAttribute.hpp DESTINATION include/emf4cpp/anytype)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR}  )

add_library(emf4cpp-anytype SHARED ${anytype_HEADERS} ${anytype_SOURCES})
set_target_properties(emf4cpp-anytype PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-anytype DESTINATION lib)

