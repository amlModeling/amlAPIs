// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/CaexFactoryImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <caex/CaexFactory.hpp>
#include <caex/CaexPackage.hpp>
#include <caex/AttributeFamily.hpp>
#include <caex/AttributeNameMapping.hpp>
#include <caex/Attribute.hpp>
#include <caex/AttributeLib.hpp>
#include <caex/AttributeValueRequirement.hpp>
#include <caex/CAEXBasicObject.hpp>
#include <caex/CAEXFile.hpp>
#include <caex/CAEXObject.hpp>
#include <caex/DocumentRoot.hpp>
#include <caex/ExternalInterface.hpp>
#include <caex/ExternalReference.hpp>
#include <caex/InstanceHierarchy.hpp>
#include <caex/InterfaceClassLib.hpp>
#include <caex/InterfaceClass.hpp>
#include <caex/InterfaceFamily.hpp>
#include <caex/InterfaceIDMapping.hpp>
#include <caex/InternalElement.hpp>
#include <caex/InternalLink.hpp>
#include <caex/Mapping.hpp>
#include <caex/NominalScaled.hpp>
#include <caex/OrdinalScaled.hpp>
#include <caex/RefSemantic.hpp>
#include <caex/RoleClassLib.hpp>
#include <caex/RoleClass.hpp>
#include <caex/RoleFamily.hpp>
#include <caex/RoleRequirements.hpp>
#include <caex/SourceDocumentInformation.hpp>
#include <caex/SupportedRoleClass.hpp>
#include <caex/SystemUnitClassLib.hpp>
#include <caex/SystemUnitClass.hpp>
#include <caex/SystemUnitFamily.hpp>
#include <caex/UnknownType.hpp>
#include <caex/Copyright.hpp>
#include <caex/Description.hpp>
#include <caex/Revision.hpp>
#include <caex/Version.hpp>
#include <caex/AdditionalInformation.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

CaexFactory::CaexFactory()
{
    s_instance.reset(this);
}

::ecore::EObject_ptr CaexFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case CaexPackage::ATTRIBUTEFAMILY:
        return createAttributeFamily();
    case CaexPackage::ATTRIBUTENAMEMAPPING:
        return createAttributeNameMapping();
    case CaexPackage::ATTRIBUTE:
        return createAttribute();
    case CaexPackage::ATTRIBUTELIB:
        return createAttributeLib();
    case CaexPackage::ATTRIBUTEVALUEREQUIREMENT:
        return createAttributeValueRequirement();
    case CaexPackage::CAEXBASICOBJECT:
        return createCAEXBasicObject();
    case CaexPackage::CAEXFILE:
        return createCAEXFile();
    case CaexPackage::CAEXOBJECT:
        return createCAEXObject();
    case CaexPackage::DOCUMENTROOT:
        return createDocumentRoot();
    case CaexPackage::EXTERNALINTERFACE:
        return createExternalInterface();
    case CaexPackage::EXTERNALREFERENCE:
        return createExternalReference();
    case CaexPackage::INSTANCEHIERARCHY:
        return createInstanceHierarchy();
    case CaexPackage::INTERFACECLASSLIB:
        return createInterfaceClassLib();
    case CaexPackage::INTERFACECLASS:
        return createInterfaceClass();
    case CaexPackage::INTERFACEFAMILY:
        return createInterfaceFamily();
    case CaexPackage::INTERFACEIDMAPPING:
        return createInterfaceIDMapping();
    case CaexPackage::INTERNALELEMENT:
        return createInternalElement();
    case CaexPackage::INTERNALLINK:
        return createInternalLink();
    case CaexPackage::MAPPING:
        return createMapping();
    case CaexPackage::NOMINALSCALED:
        return createNominalScaled();
    case CaexPackage::ORDINALSCALED:
        return createOrdinalScaled();
    case CaexPackage::REFSEMANTIC:
        return createRefSemantic();
    case CaexPackage::ROLECLASSLIB:
        return createRoleClassLib();
    case CaexPackage::ROLECLASS:
        return createRoleClass();
    case CaexPackage::ROLEFAMILY:
        return createRoleFamily();
    case CaexPackage::ROLEREQUIREMENTS:
        return createRoleRequirements();
    case CaexPackage::SOURCEDOCUMENTINFORMATION:
        return createSourceDocumentInformation();
    case CaexPackage::SUPPORTEDROLECLASS:
        return createSupportedRoleClass();
    case CaexPackage::SYSTEMUNITCLASSLIB:
        return createSystemUnitClassLib();
    case CaexPackage::SYSTEMUNITCLASS:
        return createSystemUnitClass();
    case CaexPackage::SYSTEMUNITFAMILY:
        return createSystemUnitFamily();
    case CaexPackage::UNKNOWNTYPE:
        return createUnknownType();
    case CaexPackage::COPYRIGHT:
        return createCopyright();
    case CaexPackage::DESCRIPTION:
        return createDescription();
    case CaexPackage::REVISION:
        return createRevision();
    case CaexPackage::VERSION:
        return createVersion();
    case CaexPackage::ADDITIONALINFORMATION:
        return createAdditionalInformation();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject CaexFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    case CaexPackage::ATTRIBUTEDATATYPE:
        return ::ecorecpp::mapping::string_traits < ::caex::AttributeDataType
                > ::fromString(_literalValue);
    case CaexPackage::CHANGEMODE:
    {
        ::ecore::EJavaObject _any;
        CaexPackage_ptr _epkg =
                dynamic_cast< ::caex::CaexPackage_ptr >(getEPackage());
        return _epkg->getChangeMode()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case CaexPackage::CHANGEMODEOBJECT:
        return ::ecorecpp::mapping::string_traits < ::caex::ChangeModeObject
                > ::fromString(_literalValue);
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString CaexFactory::convertToString(::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    case CaexPackage::ATTRIBUTEDATATYPE:
        return ::ecorecpp::mapping::string_traits < ::caex::AttributeDataType
                > ::toString(_instanceValue);
    case CaexPackage::CHANGEMODE:
    {
        CaexPackage_ptr _epkg = ::caex::instanceOf < ::caex::CaexPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getChangeMode()->getEEnumLiteral(_value)->getName();
    }
    case CaexPackage::CHANGEMODEOBJECT:
        return ::ecorecpp::mapping::string_traits < ::caex::ChangeModeObject
                > ::toString(_instanceValue);
    default:
        throw "IllegalArgumentException";
    }
}

AttributeFamily_ptr CaexFactory::createAttributeFamily()
{
    return new AttributeFamily();
}
AttributeNameMapping_ptr CaexFactory::createAttributeNameMapping()
{
    return new AttributeNameMapping();
}
Attribute_ptr CaexFactory::createAttribute()
{
    return new Attribute();
}
AttributeLib_ptr CaexFactory::createAttributeLib()
{
    return new AttributeLib();
}
AttributeValueRequirement_ptr CaexFactory::createAttributeValueRequirement()
{
    return new AttributeValueRequirement();
}
CAEXBasicObject_ptr CaexFactory::createCAEXBasicObject()
{
    return new CAEXBasicObject();
}
CAEXFile_ptr CaexFactory::createCAEXFile()
{
    return new CAEXFile();
}
CAEXObject_ptr CaexFactory::createCAEXObject()
{
    return new CAEXObject();
}
DocumentRoot_ptr CaexFactory::createDocumentRoot()
{
    return new DocumentRoot();
}
ExternalInterface_ptr CaexFactory::createExternalInterface()
{
    return new ExternalInterface();
}
ExternalReference_ptr CaexFactory::createExternalReference()
{
    return new ExternalReference();
}
InstanceHierarchy_ptr CaexFactory::createInstanceHierarchy()
{
    return new InstanceHierarchy();
}
InterfaceClassLib_ptr CaexFactory::createInterfaceClassLib()
{
    return new InterfaceClassLib();
}
InterfaceClass_ptr CaexFactory::createInterfaceClass()
{
    return new InterfaceClass();
}
InterfaceFamily_ptr CaexFactory::createInterfaceFamily()
{
    return new InterfaceFamily();
}
InterfaceIDMapping_ptr CaexFactory::createInterfaceIDMapping()
{
    return new InterfaceIDMapping();
}
InternalElement_ptr CaexFactory::createInternalElement()
{
    return new InternalElement();
}
InternalLink_ptr CaexFactory::createInternalLink()
{
    return new InternalLink();
}
Mapping_ptr CaexFactory::createMapping()
{
    return new Mapping();
}
NominalScaled_ptr CaexFactory::createNominalScaled()
{
    return new NominalScaled();
}
OrdinalScaled_ptr CaexFactory::createOrdinalScaled()
{
    return new OrdinalScaled();
}
RefSemantic_ptr CaexFactory::createRefSemantic()
{
    return new RefSemantic();
}
RoleClassLib_ptr CaexFactory::createRoleClassLib()
{
    return new RoleClassLib();
}
RoleClass_ptr CaexFactory::createRoleClass()
{
    return new RoleClass();
}
RoleFamily_ptr CaexFactory::createRoleFamily()
{
    return new RoleFamily();
}
RoleRequirements_ptr CaexFactory::createRoleRequirements()
{
    return new RoleRequirements();
}
SourceDocumentInformation_ptr CaexFactory::createSourceDocumentInformation()
{
    return new SourceDocumentInformation();
}
SupportedRoleClass_ptr CaexFactory::createSupportedRoleClass()
{
    return new SupportedRoleClass();
}
SystemUnitClassLib_ptr CaexFactory::createSystemUnitClassLib()
{
    return new SystemUnitClassLib();
}
SystemUnitClass_ptr CaexFactory::createSystemUnitClass()
{
    return new SystemUnitClass();
}
SystemUnitFamily_ptr CaexFactory::createSystemUnitFamily()
{
    return new SystemUnitFamily();
}
UnknownType_ptr CaexFactory::createUnknownType()
{
    return new UnknownType();
}
Copyright_ptr CaexFactory::createCopyright()
{
    return new Copyright();
}
Description_ptr CaexFactory::createDescription()
{
    return new Description();
}
Revision_ptr CaexFactory::createRevision()
{
    return new Revision();
}
Version_ptr CaexFactory::createVersion()
{
    return new Version();
}
AdditionalInformation_ptr CaexFactory::createAdditionalInformation()
{
    return new AdditionalInformation();
}

