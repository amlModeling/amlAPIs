
#
# caex.cmake
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

set(caex_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/caex.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CaexPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CaexFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CaexPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CaexFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeFamily.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeFamilyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeNameMapping.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeNameMappingImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/Attribute.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeLib.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeLibImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeValueRequirement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeValueRequirementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CAEXBasicObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CAEXBasicObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CAEXFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CAEXFileImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CAEXObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CAEXObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/DocumentRoot.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/DocumentRootImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/ExternalInterface.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/ExternalInterfaceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/ExternalReference.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/ExternalReferenceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InstanceHierarchy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InstanceHierarchyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceClassLib.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceClassLibImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceClass.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceClassImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceFamily.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceFamilyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceIDMapping.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceIDMappingImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InternalElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InternalElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InternalLink.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InternalLinkImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/Mapping.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/MappingImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/NominalScaled.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/NominalScaledImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/OrdinalScaled.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/OrdinalScaledImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RefSemantic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RefSemanticImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleClassLib.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleClassLibImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleClass.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleClassImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleFamily.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleFamilyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleRequirements.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleRequirementsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SourceDocumentInformation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SourceDocumentInformationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SupportedRoleClass.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SupportedRoleClassImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SystemUnitClassLib.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SystemUnitClassLibImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SystemUnitClass.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SystemUnitClassImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SystemUnitFamily.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SystemUnitFamilyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/UnknownType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/UnknownTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/Copyright.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CopyrightImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/Description.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/DescriptionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/Revision.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RevisionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/Version.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/VersionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AdditionalInformation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AdditionalInformationImpl.cpp
   )
   
set(caex_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/caex.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CaexPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CaexFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeFamily.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeNameMapping.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/Attribute.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeLib.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeValueRequirement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CAEXBasicObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CAEXFile.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/CAEXObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/DocumentRoot.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/ExternalInterface.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/ExternalReference.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InstanceHierarchy.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceClassLib.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceClass.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceFamily.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceIDMapping.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InternalElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/InternalLink.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/Mapping.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/NominalScaled.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/OrdinalScaled.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RefSemantic.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleClassLib.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleClass.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleFamily.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleRequirements.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SourceDocumentInformation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SupportedRoleClass.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SystemUnitClassLib.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SystemUnitClass.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/SystemUnitFamily.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/UnknownType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/Copyright.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/Description.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/Revision.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/Version.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/caex/AdditionalInformation.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/CaexFactory.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/CaexPackage.hpp DESTINATION include/emf4cpp/caex)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeFamily.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeNameMapping.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/Attribute.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeLib.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/AttributeValueRequirement.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/CAEXBasicObject.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/CAEXFile.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/CAEXObject.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/DocumentRoot.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/ExternalInterface.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/ExternalReference.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/InstanceHierarchy.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceClassLib.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceClass.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceFamily.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/InterfaceIDMapping.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/InternalElement.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/InternalLink.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/Mapping.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/NominalScaled.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/OrdinalScaled.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/RefSemantic.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleClassLib.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleClass.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleFamily.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/RoleRequirements.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/SourceDocumentInformation.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/SupportedRoleClass.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/SystemUnitClassLib.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/SystemUnitClass.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/SystemUnitFamily.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/UnknownType.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/Copyright.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/Description.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/Revision.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/Version.hpp DESTINATION include/emf4cpp/caex)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/caex/AdditionalInformation.hpp DESTINATION include/emf4cpp/caex)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR}  )

add_library(emf4cpp-caex SHARED ${caex_HEADERS} ${caex_SOURCES})
set_target_properties(emf4cpp-caex PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-caex DESTINATION lib)

