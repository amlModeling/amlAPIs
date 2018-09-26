// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/CaexPackageImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <caex/CaexPackage.hpp>
#include <caex/CaexFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <type/TypePackage.hpp>
#include <ecore/EcorePackage.hpp>
#include <anytype/AnytypePackage.hpp>
#include <ecore/EStringToStringMapEntry.hpp>
#include <anytype/GenericElement.hpp>
#include <anytype/GenericAttribute.hpp>

using namespace ::caex;

CaexPackage::CaexPackage()
{

    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = CaexFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // AttributeFamily
    m_AttributeFamilyEClass = new ::ecore::EClass();
    m_AttributeFamilyEClass->setClassifierID(ATTRIBUTEFAMILY);
    m_AttributeFamilyEClass->setEPackage(this);
    getEClassifiers().push_back(m_AttributeFamilyEClass);

    // AttributeNameMapping
    m_AttributeNameMappingEClass = new ::ecore::EClass();
    m_AttributeNameMappingEClass->setClassifierID(ATTRIBUTENAMEMAPPING);
    m_AttributeNameMappingEClass->setEPackage(this);
    getEClassifiers().push_back(m_AttributeNameMappingEClass);
    m_AttributeNameMapping__roleAttributeName = new ::ecore::EAttribute();
    m_AttributeNameMapping__roleAttributeName->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__ROLEATTRIBUTENAME);
    m_AttributeNameMappingEClass->getEStructuralFeatures().push_back(
            m_AttributeNameMapping__roleAttributeName);

    ::ecore::addAnnotation(m_AttributeNameMapping__roleAttributeName,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_AttributeNameMapping__roleAttributeName,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "RoleAttributeName");
    m_AttributeNameMapping__systemUnitAttributeName = new ::ecore::EAttribute();
    m_AttributeNameMapping__systemUnitAttributeName->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__SYSTEMUNITATTRIBUTENAME);
    m_AttributeNameMappingEClass->getEStructuralFeatures().push_back(
            m_AttributeNameMapping__systemUnitAttributeName);

    ::ecore::addAnnotation(m_AttributeNameMapping__systemUnitAttributeName,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_AttributeNameMapping__systemUnitAttributeName,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "SystemUnitAttributeName");
    m_AttributeNameMapping__roleAttribute = new ::ecore::EReference();
    m_AttributeNameMapping__roleAttribute->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__ROLEATTRIBUTE);
    m_AttributeNameMappingEClass->getEStructuralFeatures().push_back(
            m_AttributeNameMapping__roleAttribute);
    m_AttributeNameMapping__systemUnitAttribute = new ::ecore::EReference();
    m_AttributeNameMapping__systemUnitAttribute->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__SYSTEMUNITATTRIBUTE);
    m_AttributeNameMappingEClass->getEStructuralFeatures().push_back(
            m_AttributeNameMapping__systemUnitAttribute);

    // Attribute
    m_AttributeEClass = new ::ecore::EClass();
    m_AttributeEClass->setClassifierID(ATTRIBUTE);
    m_AttributeEClass->setEPackage(this);
    getEClassifiers().push_back(m_AttributeEClass);
    m_Attribute__defaultValue = new ::ecore::EAttribute();
    m_Attribute__defaultValue->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTE__DEFAULTVALUE);
    m_AttributeEClass->getEStructuralFeatures().push_back(
            m_Attribute__defaultValue);

    ::ecore::addAnnotation(m_Attribute__defaultValue,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "A predefined default value for an attribute.");
    ::ecore::addAnnotation(m_Attribute__defaultValue,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "element");
    ::ecore::addAnnotation(m_Attribute__defaultValue,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "DefaultValue");
    ::ecore::addAnnotation(m_Attribute__defaultValue,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "namespace",
            "##targetNamespace");
    m_Attribute__value = new ::ecore::EAttribute();
    m_Attribute__value->setFeatureID(::caex::CaexPackage::ATTRIBUTE__VALUE);
    m_AttributeEClass->getEStructuralFeatures().push_back(m_Attribute__value);

    ::ecore::addAnnotation(m_Attribute__value,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Element describing the value of an attribute.");
    ::ecore::addAnnotation(m_Attribute__value,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "element");
    ::ecore::addAnnotation(m_Attribute__value,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "Value");
    ::ecore::addAnnotation(m_Attribute__value,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "namespace",
            "##targetNamespace");
    m_Attribute__attributeDataType = new ::ecore::EAttribute();
    m_Attribute__attributeDataType->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTE__ATTRIBUTEDATATYPE);
    m_AttributeEClass->getEStructuralFeatures().push_back(
            m_Attribute__attributeDataType);

    ::ecore::addAnnotation(m_Attribute__attributeDataType,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Describes the data type of the attribute using XML notation.");
    ::ecore::addAnnotation(m_Attribute__attributeDataType,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_Attribute__attributeDataType,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "AttributeDataType");
    m_Attribute__refAttributeType = new ::ecore::EAttribute();
    m_Attribute__refAttributeType->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTE__REFATTRIBUTETYPE);
    m_AttributeEClass->getEStructuralFeatures().push_back(
            m_Attribute__refAttributeType);

    ::ecore::addAnnotation(m_Attribute__refAttributeType,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Refences an attribute type in the attribute library.");
    ::ecore::addAnnotation(m_Attribute__refAttributeType,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_Attribute__refAttributeType,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "RefAttributeType");
    m_Attribute__unit = new ::ecore::EAttribute();
    m_Attribute__unit->setFeatureID(::caex::CaexPackage::ATTRIBUTE__UNIT);
    m_AttributeEClass->getEStructuralFeatures().push_back(m_Attribute__unit);

    ::ecore::addAnnotation(m_Attribute__unit,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Describes the unit of the attribute.");
    ::ecore::addAnnotation(m_Attribute__unit,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_Attribute__unit,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "Unit");
    m_Attribute__refSemantic = new ::ecore::EReference();
    m_Attribute__refSemantic->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTE__REFSEMANTIC);
    m_AttributeEClass->getEStructuralFeatures().push_back(
            m_Attribute__refSemantic);
    m_Attribute__constraint = new ::ecore::EReference();
    m_Attribute__constraint->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTE__CONSTRAINT);
    m_AttributeEClass->getEStructuralFeatures().push_back(
            m_Attribute__constraint);
    m_Attribute__attribute = new ::ecore::EReference();
    m_Attribute__attribute->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTE__ATTRIBUTE);
    m_AttributeEClass->getEStructuralFeatures().push_back(
            m_Attribute__attribute);
    m_Attribute__referenceAttribute = new ::ecore::EReference();
    m_Attribute__referenceAttribute->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTE__REFERENCEATTRIBUTE);
    m_AttributeEClass->getEStructuralFeatures().push_back(
            m_Attribute__referenceAttribute);

    // AttributeLib
    m_AttributeLibEClass = new ::ecore::EClass();
    m_AttributeLibEClass->setClassifierID(ATTRIBUTELIB);
    m_AttributeLibEClass->setEPackage(this);
    getEClassifiers().push_back(m_AttributeLibEClass);
    m_AttributeLib__attributeType = new ::ecore::EReference();
    m_AttributeLib__attributeType->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTELIB__ATTRIBUTETYPE);
    m_AttributeLibEClass->getEStructuralFeatures().push_back(
            m_AttributeLib__attributeType);

    // AttributeValueRequirement
    m_AttributeValueRequirementEClass = new ::ecore::EClass();
    m_AttributeValueRequirementEClass->setClassifierID(
            ATTRIBUTEVALUEREQUIREMENT);
    m_AttributeValueRequirementEClass->setEPackage(this);
    getEClassifiers().push_back(m_AttributeValueRequirementEClass);
    m_AttributeValueRequirement__name = new ::ecore::EAttribute();
    m_AttributeValueRequirement__name->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__NAME);
    m_AttributeValueRequirementEClass->getEStructuralFeatures().push_back(
            m_AttributeValueRequirement__name);

    ::ecore::addAnnotation(m_AttributeValueRequirement__name,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Describes the name of the contraint.");
    ::ecore::addAnnotation(m_AttributeValueRequirement__name,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_AttributeValueRequirement__name,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "Name");
    m_AttributeValueRequirement__ordinalScaledType = new ::ecore::EReference();
    m_AttributeValueRequirement__ordinalScaledType->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__ORDINALSCALEDTYPE);
    m_AttributeValueRequirementEClass->getEStructuralFeatures().push_back(
            m_AttributeValueRequirement__ordinalScaledType);
    m_AttributeValueRequirement__nominalScaledType = new ::ecore::EReference();
    m_AttributeValueRequirement__nominalScaledType->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__NOMINALSCALEDTYPE);
    m_AttributeValueRequirementEClass->getEStructuralFeatures().push_back(
            m_AttributeValueRequirement__nominalScaledType);
    m_AttributeValueRequirement__unknownType = new ::ecore::EReference();
    m_AttributeValueRequirement__unknownType->setFeatureID(
            ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__UNKNOWNTYPE);
    m_AttributeValueRequirementEClass->getEStructuralFeatures().push_back(
            m_AttributeValueRequirement__unknownType);

    // CAEXBasicObject
    m_CAEXBasicObjectEClass = new ::ecore::EClass();
    m_CAEXBasicObjectEClass->setClassifierID(CAEXBASICOBJECT);
    m_CAEXBasicObjectEClass->setEPackage(this);
    getEClassifiers().push_back(m_CAEXBasicObjectEClass);
    m_CAEXBasicObject__changeMode = new ::ecore::EAttribute();
    m_CAEXBasicObject__changeMode->setFeatureID(
            ::caex::CaexPackage::CAEXBASICOBJECT__CHANGEMODE);
    m_CAEXBasicObjectEClass->getEStructuralFeatures().push_back(
            m_CAEXBasicObject__changeMode);

    ::ecore::addAnnotation(m_CAEXBasicObject__changeMode,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Optionally describes the change state of a CAEX object. If used, the ChangeMode shall have the following value range: state, create, delete and change. This information should be used for further change management applications.");
    ::ecore::addAnnotation(m_CAEXBasicObject__changeMode,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_CAEXBasicObject__changeMode,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "ChangeMode");
    m_CAEXBasicObject__description = new ::ecore::EReference();
    m_CAEXBasicObject__description->setFeatureID(
            ::caex::CaexPackage::CAEXBASICOBJECT__DESCRIPTION);
    m_CAEXBasicObjectEClass->getEStructuralFeatures().push_back(
            m_CAEXBasicObject__description);
    m_CAEXBasicObject__version = new ::ecore::EReference();
    m_CAEXBasicObject__version->setFeatureID(
            ::caex::CaexPackage::CAEXBASICOBJECT__VERSION);
    m_CAEXBasicObjectEClass->getEStructuralFeatures().push_back(
            m_CAEXBasicObject__version);
    m_CAEXBasicObject__revision = new ::ecore::EReference();
    m_CAEXBasicObject__revision->setFeatureID(
            ::caex::CaexPackage::CAEXBASICOBJECT__REVISION);
    m_CAEXBasicObjectEClass->getEStructuralFeatures().push_back(
            m_CAEXBasicObject__revision);
    m_CAEXBasicObject__copyright = new ::ecore::EReference();
    m_CAEXBasicObject__copyright->setFeatureID(
            ::caex::CaexPackage::CAEXBASICOBJECT__COPYRIGHT);
    m_CAEXBasicObjectEClass->getEStructuralFeatures().push_back(
            m_CAEXBasicObject__copyright);
    m_CAEXBasicObject__additionalInformation = new ::ecore::EReference();
    m_CAEXBasicObject__additionalInformation->setFeatureID(
            ::caex::CaexPackage::CAEXBASICOBJECT__ADDITIONALINFORMATION);
    m_CAEXBasicObjectEClass->getEStructuralFeatures().push_back(
            m_CAEXBasicObject__additionalInformation);

    // CAEXFile
    m_CAEXFileEClass = new ::ecore::EClass();
    m_CAEXFileEClass->setClassifierID(CAEXFILE);
    m_CAEXFileEClass->setEPackage(this);
    getEClassifiers().push_back(m_CAEXFileEClass);
    m_CAEXFile__superiorStandardVersion = new ::ecore::EAttribute();
    m_CAEXFile__superiorStandardVersion->setFeatureID(
            ::caex::CaexPackage::CAEXFILE__SUPERIORSTANDARDVERSION);
    m_CAEXFileEClass->getEStructuralFeatures().push_back(
            m_CAEXFile__superiorStandardVersion);

    ::ecore::addAnnotation(m_CAEXFile__superiorStandardVersion,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Describes the version of a superior standard, e.g. AutomationML x.y. The version string is defined in the superior standard.");
    ::ecore::addAnnotation(m_CAEXFile__superiorStandardVersion,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "element");
    ::ecore::addAnnotation(m_CAEXFile__superiorStandardVersion,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "SuperiorStandardVersion");
    ::ecore::addAnnotation(m_CAEXFile__superiorStandardVersion,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "namespace",
            "##targetNamespace");
    m_CAEXFile__fileName = new ::ecore::EAttribute();
    m_CAEXFile__fileName->setFeatureID(::caex::CaexPackage::CAEXFILE__FILENAME);
    m_CAEXFileEClass->getEStructuralFeatures().push_back(m_CAEXFile__fileName);

    ::ecore::addAnnotation(m_CAEXFile__fileName,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Describes the name of the CAEX file.");
    ::ecore::addAnnotation(m_CAEXFile__fileName,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_CAEXFile__fileName,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "FileName");
    m_CAEXFile__schemaVersion = new ::ecore::EAttribute();
    m_CAEXFile__schemaVersion->setFeatureID(
            ::caex::CaexPackage::CAEXFILE__SCHEMAVERSION);
    m_CAEXFileEClass->getEStructuralFeatures().push_back(
            m_CAEXFile__schemaVersion);

    ::ecore::addAnnotation(m_CAEXFile__schemaVersion,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Describes the version of the schema. Each CAEX document must specify which CAEX version it requires. The version number of a CAEX document must fit to the version number specified in the CAEX schema file. ");
    ::ecore::addAnnotation(m_CAEXFile__schemaVersion,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_CAEXFile__schemaVersion,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "SchemaVersion");
    m_CAEXFile__sourceDocumentInformation = new ::ecore::EReference();
    m_CAEXFile__sourceDocumentInformation->setFeatureID(
            ::caex::CaexPackage::CAEXFILE__SOURCEDOCUMENTINFORMATION);
    m_CAEXFileEClass->getEStructuralFeatures().push_back(
            m_CAEXFile__sourceDocumentInformation);
    m_CAEXFile__externalReference = new ::ecore::EReference();
    m_CAEXFile__externalReference->setFeatureID(
            ::caex::CaexPackage::CAEXFILE__EXTERNALREFERENCE);
    m_CAEXFileEClass->getEStructuralFeatures().push_back(
            m_CAEXFile__externalReference);
    m_CAEXFile__instanceHierarchy = new ::ecore::EReference();
    m_CAEXFile__instanceHierarchy->setFeatureID(
            ::caex::CaexPackage::CAEXFILE__INSTANCEHIERARCHY);
    m_CAEXFileEClass->getEStructuralFeatures().push_back(
            m_CAEXFile__instanceHierarchy);
    m_CAEXFile__interfaceClassLib = new ::ecore::EReference();
    m_CAEXFile__interfaceClassLib->setFeatureID(
            ::caex::CaexPackage::CAEXFILE__INTERFACECLASSLIB);
    m_CAEXFileEClass->getEStructuralFeatures().push_back(
            m_CAEXFile__interfaceClassLib);
    m_CAEXFile__roleClassLib = new ::ecore::EReference();
    m_CAEXFile__roleClassLib->setFeatureID(
            ::caex::CaexPackage::CAEXFILE__ROLECLASSLIB);
    m_CAEXFileEClass->getEStructuralFeatures().push_back(
            m_CAEXFile__roleClassLib);
    m_CAEXFile__systemUnitClassLib = new ::ecore::EReference();
    m_CAEXFile__systemUnitClassLib->setFeatureID(
            ::caex::CaexPackage::CAEXFILE__SYSTEMUNITCLASSLIB);
    m_CAEXFileEClass->getEStructuralFeatures().push_back(
            m_CAEXFile__systemUnitClassLib);
    m_CAEXFile__attributeTypeLib = new ::ecore::EReference();
    m_CAEXFile__attributeTypeLib->setFeatureID(
            ::caex::CaexPackage::CAEXFILE__ATTRIBUTETYPELIB);
    m_CAEXFileEClass->getEStructuralFeatures().push_back(
            m_CAEXFile__attributeTypeLib);

    // CAEXObject
    m_CAEXObjectEClass = new ::ecore::EClass();
    m_CAEXObjectEClass->setClassifierID(CAEXOBJECT);
    m_CAEXObjectEClass->setEPackage(this);
    getEClassifiers().push_back(m_CAEXObjectEClass);
    m_CAEXObject__iD = new ::ecore::EAttribute();
    m_CAEXObject__iD->setFeatureID(::caex::CaexPackage::CAEXOBJECT__ID);
    m_CAEXObjectEClass->getEStructuralFeatures().push_back(m_CAEXObject__iD);

    ::ecore::addAnnotation(m_CAEXObject__iD,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Optional attribute that describes a unique identifier of the CAEX object.");
    ::ecore::addAnnotation(m_CAEXObject__iD,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_CAEXObject__iD,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "ID");
    m_CAEXObject__name = new ::ecore::EAttribute();
    m_CAEXObject__name->setFeatureID(::caex::CaexPackage::CAEXOBJECT__NAME);
    m_CAEXObjectEClass->getEStructuralFeatures().push_back(m_CAEXObject__name);

    ::ecore::addAnnotation(m_CAEXObject__name,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Describes the name of the CAEX object.");
    ::ecore::addAnnotation(m_CAEXObject__name,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_CAEXObject__name,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "Name");

    // DocumentRoot
    m_DocumentRootEClass = new ::ecore::EClass();
    m_DocumentRootEClass->setClassifierID(DOCUMENTROOT);
    m_DocumentRootEClass->setEPackage(this);
    getEClassifiers().push_back(m_DocumentRootEClass);
    m_DocumentRoot__mixed = new ::ecore::EAttribute();
    m_DocumentRoot__mixed->setFeatureID(
            ::caex::CaexPackage::DOCUMENTROOT__MIXED);
    m_DocumentRootEClass->getEStructuralFeatures().push_back(
            m_DocumentRoot__mixed);

    ::ecore::addAnnotation(m_DocumentRoot__mixed,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "elementWildcard");
    ::ecore::addAnnotation(m_DocumentRoot__mixed,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            ":mixed");
    m_DocumentRoot__xMLNSPrefixMap = new ::ecore::EReference();
    m_DocumentRoot__xMLNSPrefixMap->setFeatureID(
            ::caex::CaexPackage::DOCUMENTROOT__XMLNSPREFIXMAP);
    m_DocumentRootEClass->getEStructuralFeatures().push_back(
            m_DocumentRoot__xMLNSPrefixMap);
    m_DocumentRoot__xSISchemaLocation = new ::ecore::EReference();
    m_DocumentRoot__xSISchemaLocation->setFeatureID(
            ::caex::CaexPackage::DOCUMENTROOT__XSISCHEMALOCATION);
    m_DocumentRootEClass->getEStructuralFeatures().push_back(
            m_DocumentRoot__xSISchemaLocation);
    m_DocumentRoot__cAEXFile = new ::ecore::EReference();
    m_DocumentRoot__cAEXFile->setFeatureID(
            ::caex::CaexPackage::DOCUMENTROOT__CAEXFILE);
    m_DocumentRootEClass->getEStructuralFeatures().push_back(
            m_DocumentRoot__cAEXFile);

    // ExternalInterface
    m_ExternalInterfaceEClass = new ::ecore::EClass();
    m_ExternalInterfaceEClass->setClassifierID(EXTERNALINTERFACE);
    m_ExternalInterfaceEClass->setEPackage(this);
    getEClassifiers().push_back(m_ExternalInterfaceEClass);

    // ExternalReference
    m_ExternalReferenceEClass = new ::ecore::EClass();
    m_ExternalReferenceEClass->setClassifierID(EXTERNALREFERENCE);
    m_ExternalReferenceEClass->setEPackage(this);
    getEClassifiers().push_back(m_ExternalReferenceEClass);
    m_ExternalReference__alias = new ::ecore::EAttribute();
    m_ExternalReference__alias->setFeatureID(
            ::caex::CaexPackage::EXTERNALREFERENCE__ALIAS);
    m_ExternalReferenceEClass->getEStructuralFeatures().push_back(
            m_ExternalReference__alias);

    ::ecore::addAnnotation(m_ExternalReference__alias,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Describes the alias name of an external CAEX file to enable referencing elements of the external CAEX file.");
    ::ecore::addAnnotation(m_ExternalReference__alias,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_ExternalReference__alias,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "Alias");
    m_ExternalReference__path = new ::ecore::EAttribute();
    m_ExternalReference__path->setFeatureID(
            ::caex::CaexPackage::EXTERNALREFERENCE__PATH);
    m_ExternalReferenceEClass->getEStructuralFeatures().push_back(
            m_ExternalReference__path);

    ::ecore::addAnnotation(m_ExternalReference__path,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Describes the path of the external CAEX file. Absolute and relative paths are allowed.");
    ::ecore::addAnnotation(m_ExternalReference__path,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_ExternalReference__path,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "Path");

    // InstanceHierarchy
    m_InstanceHierarchyEClass = new ::ecore::EClass();
    m_InstanceHierarchyEClass->setClassifierID(INSTANCEHIERARCHY);
    m_InstanceHierarchyEClass->setEPackage(this);
    getEClassifiers().push_back(m_InstanceHierarchyEClass);
    m_InstanceHierarchy__internalElement = new ::ecore::EReference();
    m_InstanceHierarchy__internalElement->setFeatureID(
            ::caex::CaexPackage::INSTANCEHIERARCHY__INTERNALELEMENT);
    m_InstanceHierarchyEClass->getEStructuralFeatures().push_back(
            m_InstanceHierarchy__internalElement);

    // InterfaceClassLib
    m_InterfaceClassLibEClass = new ::ecore::EClass();
    m_InterfaceClassLibEClass->setClassifierID(INTERFACECLASSLIB);
    m_InterfaceClassLibEClass->setEPackage(this);
    getEClassifiers().push_back(m_InterfaceClassLibEClass);
    m_InterfaceClassLib__interfaceClass = new ::ecore::EReference();
    m_InterfaceClassLib__interfaceClass->setFeatureID(
            ::caex::CaexPackage::INTERFACECLASSLIB__INTERFACECLASS);
    m_InterfaceClassLibEClass->getEStructuralFeatures().push_back(
            m_InterfaceClassLib__interfaceClass);

    // InterfaceClass
    m_InterfaceClassEClass = new ::ecore::EClass();
    m_InterfaceClassEClass->setClassifierID(INTERFACECLASS);
    m_InterfaceClassEClass->setEPackage(this);
    getEClassifiers().push_back(m_InterfaceClassEClass);
    m_InterfaceClass__refBaseClassPath = new ::ecore::EAttribute();
    m_InterfaceClass__refBaseClassPath->setFeatureID(
            ::caex::CaexPackage::INTERFACECLASS__REFBASECLASSPATH);
    m_InterfaceClassEClass->getEStructuralFeatures().push_back(
            m_InterfaceClass__refBaseClassPath);

    ::ecore::addAnnotation(m_InterfaceClass__refBaseClassPath,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Stores the reference of a class to its base class. References contain the full path to the refered class object.");
    ::ecore::addAnnotation(m_InterfaceClass__refBaseClassPath,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_InterfaceClass__refBaseClassPath,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "RefBaseClassPath");
    m_InterfaceClass__attribute = new ::ecore::EReference();
    m_InterfaceClass__attribute->setFeatureID(
            ::caex::CaexPackage::INTERFACECLASS__ATTRIBUTE);
    m_InterfaceClassEClass->getEStructuralFeatures().push_back(
            m_InterfaceClass__attribute);
    m_InterfaceClass__baseClass = new ::ecore::EReference();
    m_InterfaceClass__baseClass->setFeatureID(
            ::caex::CaexPackage::INTERFACECLASS__BASECLASS);
    m_InterfaceClassEClass->getEStructuralFeatures().push_back(
            m_InterfaceClass__baseClass);
    m_InterfaceClass__interfaceClass = new ::ecore::EReference();
    m_InterfaceClass__interfaceClass->setFeatureID(
            ::caex::CaexPackage::INTERFACECLASS__INTERFACECLASS);
    m_InterfaceClassEClass->getEStructuralFeatures().push_back(
            m_InterfaceClass__interfaceClass);
    m_InterfaceClass__externalInterface = new ::ecore::EReference();
    m_InterfaceClass__externalInterface->setFeatureID(
            ::caex::CaexPackage::INTERFACECLASS__EXTERNALINTERFACE);
    m_InterfaceClassEClass->getEStructuralFeatures().push_back(
            m_InterfaceClass__externalInterface);

    // InterfaceFamily
    m_InterfaceFamilyEClass = new ::ecore::EClass();
    m_InterfaceFamilyEClass->setClassifierID(INTERFACEFAMILY);
    m_InterfaceFamilyEClass->setEPackage(this);
    getEClassifiers().push_back(m_InterfaceFamilyEClass);

    // InterfaceIDMapping
    m_InterfaceIDMappingEClass = new ::ecore::EClass();
    m_InterfaceIDMappingEClass->setClassifierID(INTERFACEIDMAPPING);
    m_InterfaceIDMappingEClass->setEPackage(this);
    getEClassifiers().push_back(m_InterfaceIDMappingEClass);
    m_InterfaceIDMapping__roleInterfaceID = new ::ecore::EAttribute();
    m_InterfaceIDMapping__roleInterfaceID->setFeatureID(
            ::caex::CaexPackage::INTERFACEIDMAPPING__ROLEINTERFACEID);
    m_InterfaceIDMappingEClass->getEStructuralFeatures().push_back(
            m_InterfaceIDMapping__roleInterfaceID);

    ::ecore::addAnnotation(m_InterfaceIDMapping__roleInterfaceID,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_InterfaceIDMapping__roleInterfaceID,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "RoleInterfaceID");
    m_InterfaceIDMapping__systemUnitInterfaceID = new ::ecore::EAttribute();
    m_InterfaceIDMapping__systemUnitInterfaceID->setFeatureID(
            ::caex::CaexPackage::INTERFACEIDMAPPING__SYSTEMUNITINTERFACEID);
    m_InterfaceIDMappingEClass->getEStructuralFeatures().push_back(
            m_InterfaceIDMapping__systemUnitInterfaceID);

    ::ecore::addAnnotation(m_InterfaceIDMapping__systemUnitInterfaceID,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_InterfaceIDMapping__systemUnitInterfaceID,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "SystemUnitInterfaceID");
    m_InterfaceIDMapping__roleInterface = new ::ecore::EReference();
    m_InterfaceIDMapping__roleInterface->setFeatureID(
            ::caex::CaexPackage::INTERFACEIDMAPPING__ROLEINTERFACE);
    m_InterfaceIDMappingEClass->getEStructuralFeatures().push_back(
            m_InterfaceIDMapping__roleInterface);
    m_InterfaceIDMapping__systemUnitInterface = new ::ecore::EReference();
    m_InterfaceIDMapping__systemUnitInterface->setFeatureID(
            ::caex::CaexPackage::INTERFACEIDMAPPING__SYSTEMUNITINTERFACE);
    m_InterfaceIDMappingEClass->getEStructuralFeatures().push_back(
            m_InterfaceIDMapping__systemUnitInterface);

    // InternalElement
    m_InternalElementEClass = new ::ecore::EClass();
    m_InternalElementEClass->setClassifierID(INTERNALELEMENT);
    m_InternalElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_InternalElementEClass);
    m_InternalElement__refBaseSystemUnitPath = new ::ecore::EAttribute();
    m_InternalElement__refBaseSystemUnitPath->setFeatureID(
            ::caex::CaexPackage::INTERNALELEMENT__REFBASESYSTEMUNITPATH);
    m_InternalElementEClass->getEStructuralFeatures().push_back(
            m_InternalElement__refBaseSystemUnitPath);

    ::ecore::addAnnotation(m_InternalElement__refBaseSystemUnitPath,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Stores the reference of an InternalElement to a class or instance definition. References contain the full path information. ");
    ::ecore::addAnnotation(m_InternalElement__refBaseSystemUnitPath,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_InternalElement__refBaseSystemUnitPath,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "RefBaseSystemUnitPath");
    m_InternalElement__roleRequirements = new ::ecore::EReference();
    m_InternalElement__roleRequirements->setFeatureID(
            ::caex::CaexPackage::INTERNALELEMENT__ROLEREQUIREMENTS);
    m_InternalElementEClass->getEStructuralFeatures().push_back(
            m_InternalElement__roleRequirements);
    m_InternalElement__baseSystemUnit = new ::ecore::EReference();
    m_InternalElement__baseSystemUnit->setFeatureID(
            ::caex::CaexPackage::INTERNALELEMENT__BASESYSTEMUNIT);
    m_InternalElementEClass->getEStructuralFeatures().push_back(
            m_InternalElement__baseSystemUnit);

    // InternalLink
    m_InternalLinkEClass = new ::ecore::EClass();
    m_InternalLinkEClass->setClassifierID(INTERNALLINK);
    m_InternalLinkEClass->setEPackage(this);
    getEClassifiers().push_back(m_InternalLinkEClass);
    m_InternalLink__refPartnerSideA = new ::ecore::EAttribute();
    m_InternalLink__refPartnerSideA->setFeatureID(
            ::caex::CaexPackage::INTERNALLINK__REFPARTNERSIDEA);
    m_InternalLinkEClass->getEStructuralFeatures().push_back(
            m_InternalLink__refPartnerSideA);

    ::ecore::addAnnotation(m_InternalLink__refPartnerSideA,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_InternalLink__refPartnerSideA,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "RefPartnerSideA");
    m_InternalLink__refPartnerSideB = new ::ecore::EAttribute();
    m_InternalLink__refPartnerSideB->setFeatureID(
            ::caex::CaexPackage::INTERNALLINK__REFPARTNERSIDEB);
    m_InternalLinkEClass->getEStructuralFeatures().push_back(
            m_InternalLink__refPartnerSideB);

    ::ecore::addAnnotation(m_InternalLink__refPartnerSideB,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_InternalLink__refPartnerSideB,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "RefPartnerSideB");
    m_InternalLink__partnerSideA = new ::ecore::EReference();
    m_InternalLink__partnerSideA->setFeatureID(
            ::caex::CaexPackage::INTERNALLINK__PARTNERSIDEA);
    m_InternalLinkEClass->getEStructuralFeatures().push_back(
            m_InternalLink__partnerSideA);
    m_InternalLink__partnerSideB = new ::ecore::EReference();
    m_InternalLink__partnerSideB->setFeatureID(
            ::caex::CaexPackage::INTERNALLINK__PARTNERSIDEB);
    m_InternalLinkEClass->getEStructuralFeatures().push_back(
            m_InternalLink__partnerSideB);

    // Mapping
    m_MappingEClass = new ::ecore::EClass();
    m_MappingEClass->setClassifierID(MAPPING);
    m_MappingEClass->setEPackage(this);
    getEClassifiers().push_back(m_MappingEClass);
    m_Mapping__attributeNameMapping = new ::ecore::EReference();
    m_Mapping__attributeNameMapping->setFeatureID(
            ::caex::CaexPackage::MAPPING__ATTRIBUTENAMEMAPPING);
    m_MappingEClass->getEStructuralFeatures().push_back(
            m_Mapping__attributeNameMapping);
    m_Mapping__interfaceIDMapping = new ::ecore::EReference();
    m_Mapping__interfaceIDMapping->setFeatureID(
            ::caex::CaexPackage::MAPPING__INTERFACEIDMAPPING);
    m_MappingEClass->getEStructuralFeatures().push_back(
            m_Mapping__interfaceIDMapping);

    // NominalScaled
    m_NominalScaledEClass = new ::ecore::EClass();
    m_NominalScaledEClass->setClassifierID(NOMINALSCALED);
    m_NominalScaledEClass->setEPackage(this);
    getEClassifiers().push_back(m_NominalScaledEClass);
    m_NominalScaled__requiredValue = new ::ecore::EAttribute();
    m_NominalScaled__requiredValue->setFeatureID(
            ::caex::CaexPackage::NOMINALSCALED__REQUIREDVALUE);
    m_NominalScaledEClass->getEStructuralFeatures().push_back(
            m_NominalScaled__requiredValue);

    // OrdinalScaled
    m_OrdinalScaledEClass = new ::ecore::EClass();
    m_OrdinalScaledEClass->setClassifierID(ORDINALSCALED);
    m_OrdinalScaledEClass->setEPackage(this);
    getEClassifiers().push_back(m_OrdinalScaledEClass);
    m_OrdinalScaled__requiredMaxValue = new ::ecore::EAttribute();
    m_OrdinalScaled__requiredMaxValue->setFeatureID(
            ::caex::CaexPackage::ORDINALSCALED__REQUIREDMAXVALUE);
    m_OrdinalScaledEClass->getEStructuralFeatures().push_back(
            m_OrdinalScaled__requiredMaxValue);

    m_OrdinalScaled__requiredValue = new ::ecore::EAttribute();
    m_OrdinalScaled__requiredValue->setFeatureID(
            ::caex::CaexPackage::ORDINALSCALED__REQUIREDVALUE);
    m_OrdinalScaledEClass->getEStructuralFeatures().push_back(
            m_OrdinalScaled__requiredValue);

    m_OrdinalScaled__requiredMinValue = new ::ecore::EAttribute();
    m_OrdinalScaled__requiredMinValue->setFeatureID(
            ::caex::CaexPackage::ORDINALSCALED__REQUIREDMINVALUE);
    m_OrdinalScaledEClass->getEStructuralFeatures().push_back(
            m_OrdinalScaled__requiredMinValue);

    // RefSemantic
    m_RefSemanticEClass = new ::ecore::EClass();
    m_RefSemanticEClass->setClassifierID(REFSEMANTIC);
    m_RefSemanticEClass->setEPackage(this);
    getEClassifiers().push_back(m_RefSemanticEClass);
    m_RefSemantic__correspondingAttributePath = new ::ecore::EAttribute();
    m_RefSemantic__correspondingAttributePath->setFeatureID(
            ::caex::CaexPackage::REFSEMANTIC__CORRESPONDINGATTRIBUTEPATH);
    m_RefSemanticEClass->getEStructuralFeatures().push_back(
            m_RefSemantic__correspondingAttributePath);

    ::ecore::addAnnotation(m_RefSemantic__correspondingAttributePath,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_RefSemantic__correspondingAttributePath,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "CorrespondingAttributePath");

    // RoleClassLib
    m_RoleClassLibEClass = new ::ecore::EClass();
    m_RoleClassLibEClass->setClassifierID(ROLECLASSLIB);
    m_RoleClassLibEClass->setEPackage(this);
    getEClassifiers().push_back(m_RoleClassLibEClass);
    m_RoleClassLib__roleClass = new ::ecore::EReference();
    m_RoleClassLib__roleClass->setFeatureID(
            ::caex::CaexPackage::ROLECLASSLIB__ROLECLASS);
    m_RoleClassLibEClass->getEStructuralFeatures().push_back(
            m_RoleClassLib__roleClass);

    // RoleClass
    m_RoleClassEClass = new ::ecore::EClass();
    m_RoleClassEClass->setClassifierID(ROLECLASS);
    m_RoleClassEClass->setEPackage(this);
    getEClassifiers().push_back(m_RoleClassEClass);
    m_RoleClass__refBaseClassPath = new ::ecore::EAttribute();
    m_RoleClass__refBaseClassPath->setFeatureID(
            ::caex::CaexPackage::ROLECLASS__REFBASECLASSPATH);
    m_RoleClassEClass->getEStructuralFeatures().push_back(
            m_RoleClass__refBaseClassPath);

    ::ecore::addAnnotation(m_RoleClass__refBaseClassPath,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Stores the reference of a class to its base class. References contain the full path to the refered class object.");
    ::ecore::addAnnotation(m_RoleClass__refBaseClassPath,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_RoleClass__refBaseClassPath,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "RefBaseClassPath");
    m_RoleClass__attribute = new ::ecore::EReference();
    m_RoleClass__attribute->setFeatureID(
            ::caex::CaexPackage::ROLECLASS__ATTRIBUTE);
    m_RoleClassEClass->getEStructuralFeatures().push_back(
            m_RoleClass__attribute);
    m_RoleClass__externalInterface = new ::ecore::EReference();
    m_RoleClass__externalInterface->setFeatureID(
            ::caex::CaexPackage::ROLECLASS__EXTERNALINTERFACE);
    m_RoleClassEClass->getEStructuralFeatures().push_back(
            m_RoleClass__externalInterface);
    m_RoleClass__baseClass = new ::ecore::EReference();
    m_RoleClass__baseClass->setFeatureID(
            ::caex::CaexPackage::ROLECLASS__BASECLASS);
    m_RoleClassEClass->getEStructuralFeatures().push_back(
            m_RoleClass__baseClass);
    m_RoleClass__roleClass = new ::ecore::EReference();
    m_RoleClass__roleClass->setFeatureID(
            ::caex::CaexPackage::ROLECLASS__ROLECLASS);
    m_RoleClassEClass->getEStructuralFeatures().push_back(
            m_RoleClass__roleClass);

    // RoleFamily
    m_RoleFamilyEClass = new ::ecore::EClass();
    m_RoleFamilyEClass->setClassifierID(ROLEFAMILY);
    m_RoleFamilyEClass->setEPackage(this);
    getEClassifiers().push_back(m_RoleFamilyEClass);

    // RoleRequirements
    m_RoleRequirementsEClass = new ::ecore::EClass();
    m_RoleRequirementsEClass->setClassifierID(ROLEREQUIREMENTS);
    m_RoleRequirementsEClass->setEPackage(this);
    getEClassifiers().push_back(m_RoleRequirementsEClass);
    m_RoleRequirements__refBaseRoleClassPath = new ::ecore::EAttribute();
    m_RoleRequirements__refBaseRoleClassPath->setFeatureID(
            ::caex::CaexPackage::ROLEREQUIREMENTS__REFBASEROLECLASSPATH);
    m_RoleRequirementsEClass->getEStructuralFeatures().push_back(
            m_RoleRequirements__refBaseRoleClassPath);

    ::ecore::addAnnotation(m_RoleRequirements__refBaseRoleClassPath,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_RoleRequirements__refBaseRoleClassPath,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "RefBaseRoleClassPath");
    m_RoleRequirements__attribute = new ::ecore::EReference();
    m_RoleRequirements__attribute->setFeatureID(
            ::caex::CaexPackage::ROLEREQUIREMENTS__ATTRIBUTE);
    m_RoleRequirementsEClass->getEStructuralFeatures().push_back(
            m_RoleRequirements__attribute);
    m_RoleRequirements__externalInterface = new ::ecore::EReference();
    m_RoleRequirements__externalInterface->setFeatureID(
            ::caex::CaexPackage::ROLEREQUIREMENTS__EXTERNALINTERFACE);
    m_RoleRequirementsEClass->getEStructuralFeatures().push_back(
            m_RoleRequirements__externalInterface);
    m_RoleRequirements__mappingObject = new ::ecore::EReference();
    m_RoleRequirements__mappingObject->setFeatureID(
            ::caex::CaexPackage::ROLEREQUIREMENTS__MAPPINGOBJECT);
    m_RoleRequirementsEClass->getEStructuralFeatures().push_back(
            m_RoleRequirements__mappingObject);
    m_RoleRequirements__roleClass = new ::ecore::EReference();
    m_RoleRequirements__roleClass->setFeatureID(
            ::caex::CaexPackage::ROLEREQUIREMENTS__ROLECLASS);
    m_RoleRequirementsEClass->getEStructuralFeatures().push_back(
            m_RoleRequirements__roleClass);

    // SourceDocumentInformation
    m_SourceDocumentInformationEClass = new ::ecore::EClass();
    m_SourceDocumentInformationEClass->setClassifierID(
            SOURCEDOCUMENTINFORMATION);
    m_SourceDocumentInformationEClass->setEPackage(this);
    getEClassifiers().push_back(m_SourceDocumentInformationEClass);
    m_SourceDocumentInformation__lastWritingDateTime =
            new ::ecore::EAttribute();
    m_SourceDocumentInformation__lastWritingDateTime->setFeatureID(
            ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__LASTWRITINGDATETIME);
    m_SourceDocumentInformationEClass->getEStructuralFeatures().push_back(
            m_SourceDocumentInformation__lastWritingDateTime);

    ::ecore::addAnnotation(m_SourceDocumentInformation__lastWritingDateTime,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Date and time of the creation of the CAEX document.");
    ::ecore::addAnnotation(m_SourceDocumentInformation__lastWritingDateTime,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_SourceDocumentInformation__lastWritingDateTime,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "LastWritingDateTime");
    m_SourceDocumentInformation__originID = new ::ecore::EAttribute();
    m_SourceDocumentInformation__originID->setFeatureID(
            ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINID);
    m_SourceDocumentInformationEClass->getEStructuralFeatures().push_back(
            m_SourceDocumentInformation__originID);

    ::ecore::addAnnotation(m_SourceDocumentInformation__originID,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Unique identifier of the origin of the CAEX document, e.g. a unique identifier of a source engineering tool or an exporter software. The ID shall not change even if the origin gets renamed. ");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originID,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originID,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "OriginID");
    m_SourceDocumentInformation__originName = new ::ecore::EAttribute();
    m_SourceDocumentInformation__originName->setFeatureID(
            ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINNAME);
    m_SourceDocumentInformationEClass->getEStructuralFeatures().push_back(
            m_SourceDocumentInformation__originName);

    ::ecore::addAnnotation(m_SourceDocumentInformation__originName,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Name of the origin of the CAEX document, e.g. the source engineering tool or an exporter software");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originName,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originName,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "OriginName");
    m_SourceDocumentInformation__originProjectID = new ::ecore::EAttribute();
    m_SourceDocumentInformation__originProjectID->setFeatureID(
            ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINPROJECTID);
    m_SourceDocumentInformationEClass->getEStructuralFeatures().push_back(
            m_SourceDocumentInformation__originProjectID);

    ::ecore::addAnnotation(m_SourceDocumentInformation__originProjectID,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Optional: a unique identifier of the corresponding source project");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originProjectID,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originProjectID,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "OriginProjectID");
    m_SourceDocumentInformation__originProjectTitle = new ::ecore::EAttribute();
    m_SourceDocumentInformation__originProjectTitle->setFeatureID(
            ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINPROJECTTITLE);
    m_SourceDocumentInformationEClass->getEStructuralFeatures().push_back(
            m_SourceDocumentInformation__originProjectTitle);

    ::ecore::addAnnotation(m_SourceDocumentInformation__originProjectTitle,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Optional: the title of the corresponding source project");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originProjectTitle,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originProjectTitle,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "OriginProjectTitle");
    m_SourceDocumentInformation__originRelease = new ::ecore::EAttribute();
    m_SourceDocumentInformation__originRelease->setFeatureID(
            ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINRELEASE);
    m_SourceDocumentInformationEClass->getEStructuralFeatures().push_back(
            m_SourceDocumentInformation__originRelease);

    ::ecore::addAnnotation(m_SourceDocumentInformation__originRelease,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Optional: release information of the origin of the CAEX document, e.g. the version of the source engineering tool or the exporter software.");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originRelease,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originRelease,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "OriginRelease");
    m_SourceDocumentInformation__originVendor = new ::ecore::EAttribute();
    m_SourceDocumentInformation__originVendor->setFeatureID(
            ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINVENDOR);
    m_SourceDocumentInformationEClass->getEStructuralFeatures().push_back(
            m_SourceDocumentInformation__originVendor);

    ::ecore::addAnnotation(m_SourceDocumentInformation__originVendor,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Optional: the vendor of the data source of the CAEX document");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originVendor,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originVendor,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "OriginVendor");
    m_SourceDocumentInformation__originVendorURL = new ::ecore::EAttribute();
    m_SourceDocumentInformation__originVendorURL->setFeatureID(
            ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINVENDORURL);
    m_SourceDocumentInformationEClass->getEStructuralFeatures().push_back(
            m_SourceDocumentInformation__originVendorURL);

    ::ecore::addAnnotation(m_SourceDocumentInformation__originVendorURL,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Optional: the vendors URL of the data source of the CAEX document");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originVendorURL,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originVendorURL,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "OriginVendorURL");
    m_SourceDocumentInformation__originVersion = new ::ecore::EAttribute();
    m_SourceDocumentInformation__originVersion->setFeatureID(
            ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINVERSION);
    m_SourceDocumentInformationEClass->getEStructuralFeatures().push_back(
            m_SourceDocumentInformation__originVersion);

    ::ecore::addAnnotation(m_SourceDocumentInformation__originVersion,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Version of the origin of the CAEX document, e.g. the version of the source engineering tool or the exporter software.");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originVersion,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_SourceDocumentInformation__originVersion,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "OriginVersion");

    // SupportedRoleClass
    m_SupportedRoleClassEClass = new ::ecore::EClass();
    m_SupportedRoleClassEClass->setClassifierID(SUPPORTEDROLECLASS);
    m_SupportedRoleClassEClass->setEPackage(this);
    getEClassifiers().push_back(m_SupportedRoleClassEClass);
    m_SupportedRoleClass__refRoleClassPath = new ::ecore::EAttribute();
    m_SupportedRoleClass__refRoleClassPath->setFeatureID(
            ::caex::CaexPackage::SUPPORTEDROLECLASS__REFROLECLASSPATH);
    m_SupportedRoleClassEClass->getEStructuralFeatures().push_back(
            m_SupportedRoleClass__refRoleClassPath);

    ::ecore::addAnnotation(m_SupportedRoleClass__refRoleClassPath,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_SupportedRoleClass__refRoleClassPath,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "RefRoleClassPath");
    m_SupportedRoleClass__mappingObject = new ::ecore::EReference();
    m_SupportedRoleClass__mappingObject->setFeatureID(
            ::caex::CaexPackage::SUPPORTEDROLECLASS__MAPPINGOBJECT);
    m_SupportedRoleClassEClass->getEStructuralFeatures().push_back(
            m_SupportedRoleClass__mappingObject);
    m_SupportedRoleClass__roleClass = new ::ecore::EReference();
    m_SupportedRoleClass__roleClass->setFeatureID(
            ::caex::CaexPackage::SUPPORTEDROLECLASS__ROLECLASS);
    m_SupportedRoleClassEClass->getEStructuralFeatures().push_back(
            m_SupportedRoleClass__roleClass);

    // SystemUnitClassLib
    m_SystemUnitClassLibEClass = new ::ecore::EClass();
    m_SystemUnitClassLibEClass->setClassifierID(SYSTEMUNITCLASSLIB);
    m_SystemUnitClassLibEClass->setEPackage(this);
    getEClassifiers().push_back(m_SystemUnitClassLibEClass);
    m_SystemUnitClassLib__systemUnitClass = new ::ecore::EReference();
    m_SystemUnitClassLib__systemUnitClass->setFeatureID(
            ::caex::CaexPackage::SYSTEMUNITCLASSLIB__SYSTEMUNITCLASS);
    m_SystemUnitClassLibEClass->getEStructuralFeatures().push_back(
            m_SystemUnitClassLib__systemUnitClass);

    // SystemUnitClass
    m_SystemUnitClassEClass = new ::ecore::EClass();
    m_SystemUnitClassEClass->setClassifierID(SYSTEMUNITCLASS);
    m_SystemUnitClassEClass->setEPackage(this);
    getEClassifiers().push_back(m_SystemUnitClassEClass);
    m_SystemUnitClass__refBaseClassPath = new ::ecore::EAttribute();
    m_SystemUnitClass__refBaseClassPath->setFeatureID(
            ::caex::CaexPackage::SYSTEMUNITCLASS__REFBASECLASSPATH);
    m_SystemUnitClassEClass->getEStructuralFeatures().push_back(
            m_SystemUnitClass__refBaseClassPath);

    m_SystemUnitClass__attribute = new ::ecore::EReference();
    m_SystemUnitClass__attribute->setFeatureID(
            ::caex::CaexPackage::SYSTEMUNITCLASS__ATTRIBUTE);
    m_SystemUnitClassEClass->getEStructuralFeatures().push_back(
            m_SystemUnitClass__attribute);
    m_SystemUnitClass__externalInterface = new ::ecore::EReference();
    m_SystemUnitClass__externalInterface->setFeatureID(
            ::caex::CaexPackage::SYSTEMUNITCLASS__EXTERNALINTERFACE);
    m_SystemUnitClassEClass->getEStructuralFeatures().push_back(
            m_SystemUnitClass__externalInterface);
    m_SystemUnitClass__internalElement = new ::ecore::EReference();
    m_SystemUnitClass__internalElement->setFeatureID(
            ::caex::CaexPackage::SYSTEMUNITCLASS__INTERNALELEMENT);
    m_SystemUnitClassEClass->getEStructuralFeatures().push_back(
            m_SystemUnitClass__internalElement);
    m_SystemUnitClass__supportedRoleClass = new ::ecore::EReference();
    m_SystemUnitClass__supportedRoleClass->setFeatureID(
            ::caex::CaexPackage::SYSTEMUNITCLASS__SUPPORTEDROLECLASS);
    m_SystemUnitClassEClass->getEStructuralFeatures().push_back(
            m_SystemUnitClass__supportedRoleClass);
    m_SystemUnitClass__internalLink = new ::ecore::EReference();
    m_SystemUnitClass__internalLink->setFeatureID(
            ::caex::CaexPackage::SYSTEMUNITCLASS__INTERNALLINK);
    m_SystemUnitClassEClass->getEStructuralFeatures().push_back(
            m_SystemUnitClass__internalLink);
    m_SystemUnitClass__baseClass = new ::ecore::EReference();
    m_SystemUnitClass__baseClass->setFeatureID(
            ::caex::CaexPackage::SYSTEMUNITCLASS__BASECLASS);
    m_SystemUnitClassEClass->getEStructuralFeatures().push_back(
            m_SystemUnitClass__baseClass);
    m_SystemUnitClass__systemUnitClass = new ::ecore::EReference();
    m_SystemUnitClass__systemUnitClass->setFeatureID(
            ::caex::CaexPackage::SYSTEMUNITCLASS__SYSTEMUNITCLASS);
    m_SystemUnitClassEClass->getEStructuralFeatures().push_back(
            m_SystemUnitClass__systemUnitClass);

    // SystemUnitFamily
    m_SystemUnitFamilyEClass = new ::ecore::EClass();
    m_SystemUnitFamilyEClass->setClassifierID(SYSTEMUNITFAMILY);
    m_SystemUnitFamilyEClass->setEPackage(this);
    getEClassifiers().push_back(m_SystemUnitFamilyEClass);

    // UnknownType
    m_UnknownTypeEClass = new ::ecore::EClass();
    m_UnknownTypeEClass->setClassifierID(UNKNOWNTYPE);
    m_UnknownTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_UnknownTypeEClass);
    m_UnknownType__requirements = new ::ecore::EAttribute();
    m_UnknownType__requirements->setFeatureID(
            ::caex::CaexPackage::UNKNOWNTYPE__REQUIREMENTS);
    m_UnknownTypeEClass->getEStructuralFeatures().push_back(
            m_UnknownType__requirements);

    ::ecore::addAnnotation(m_UnknownType__requirements,
            "http://www.eclipse.org/emf/2002/GenModel", "documentation",
            "Defines informative requirements as a constraint for an attribute value.");
    ::ecore::addAnnotation(m_UnknownType__requirements,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "element");
    ::ecore::addAnnotation(m_UnknownType__requirements,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "Requirements");
    ::ecore::addAnnotation(m_UnknownType__requirements,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "namespace",
            "##targetNamespace");

    // Copyright
    m_CopyrightEClass = new ::ecore::EClass();
    m_CopyrightEClass->setClassifierID(COPYRIGHT);
    m_CopyrightEClass->setEPackage(this);
    getEClassifiers().push_back(m_CopyrightEClass);
    m_Copyright__value = new ::ecore::EAttribute();
    m_Copyright__value->setFeatureID(::caex::CaexPackage::COPYRIGHT__VALUE);
    m_CopyrightEClass->getEStructuralFeatures().push_back(m_Copyright__value);

    ::ecore::addAnnotation(m_Copyright__value,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            ":0");
    ::ecore::addAnnotation(m_Copyright__value,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "simple");
    m_Copyright__changeMode = new ::ecore::EAttribute();
    m_Copyright__changeMode->setFeatureID(
            ::caex::CaexPackage::COPYRIGHT__CHANGEMODE);
    m_CopyrightEClass->getEStructuralFeatures().push_back(
            m_Copyright__changeMode);

    ::ecore::addAnnotation(m_Copyright__changeMode,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_Copyright__changeMode,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "ChangeMode");
    ::ecore::addAnnotation(m_Copyright__changeMode,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "namespace",
            "##targetNamespace");

    // Description
    m_DescriptionEClass = new ::ecore::EClass();
    m_DescriptionEClass->setClassifierID(DESCRIPTION);
    m_DescriptionEClass->setEPackage(this);
    getEClassifiers().push_back(m_DescriptionEClass);
    m_Description__value = new ::ecore::EAttribute();
    m_Description__value->setFeatureID(::caex::CaexPackage::DESCRIPTION__VALUE);
    m_DescriptionEClass->getEStructuralFeatures().push_back(
            m_Description__value);

    ::ecore::addAnnotation(m_Description__value,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            ":0");
    ::ecore::addAnnotation(m_Description__value,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "simple");
    m_Description__changeMode = new ::ecore::EAttribute();
    m_Description__changeMode->setFeatureID(
            ::caex::CaexPackage::DESCRIPTION__CHANGEMODE);
    m_DescriptionEClass->getEStructuralFeatures().push_back(
            m_Description__changeMode);

    ::ecore::addAnnotation(m_Description__changeMode,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_Description__changeMode,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "ChangeMode");
    ::ecore::addAnnotation(m_Description__changeMode,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "namespace",
            "##targetNamespace");

    // Revision
    m_RevisionEClass = new ::ecore::EClass();
    m_RevisionEClass->setClassifierID(REVISION);
    m_RevisionEClass->setEPackage(this);
    getEClassifiers().push_back(m_RevisionEClass);
    m_Revision__revisionDate = new ::ecore::EAttribute();
    m_Revision__revisionDate->setFeatureID(
            ::caex::CaexPackage::REVISION__REVISIONDATE);
    m_RevisionEClass->getEStructuralFeatures().push_back(
            m_Revision__revisionDate);

    ::ecore::addAnnotation(m_Revision__revisionDate,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "element");
    ::ecore::addAnnotation(m_Revision__revisionDate,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "RevisionDate");
    ::ecore::addAnnotation(m_Revision__revisionDate,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "namespace",
            "##targetNamespace");
    m_Revision__oldVersion = new ::ecore::EAttribute();
    m_Revision__oldVersion->setFeatureID(
            ::caex::CaexPackage::REVISION__OLDVERSION);
    m_RevisionEClass->getEStructuralFeatures().push_back(
            m_Revision__oldVersion);

    ::ecore::addAnnotation(m_Revision__oldVersion,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "element");
    ::ecore::addAnnotation(m_Revision__oldVersion,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "OldVersion");
    ::ecore::addAnnotation(m_Revision__oldVersion,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "namespace",
            "##targetNamespace");
    m_Revision__newVersion = new ::ecore::EAttribute();
    m_Revision__newVersion->setFeatureID(
            ::caex::CaexPackage::REVISION__NEWVERSION);
    m_RevisionEClass->getEStructuralFeatures().push_back(
            m_Revision__newVersion);

    ::ecore::addAnnotation(m_Revision__newVersion,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "element");
    ::ecore::addAnnotation(m_Revision__newVersion,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "NewVersion");
    ::ecore::addAnnotation(m_Revision__newVersion,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "namespace",
            "##targetNamespace");
    m_Revision__authorName = new ::ecore::EAttribute();
    m_Revision__authorName->setFeatureID(
            ::caex::CaexPackage::REVISION__AUTHORNAME);
    m_RevisionEClass->getEStructuralFeatures().push_back(
            m_Revision__authorName);

    ::ecore::addAnnotation(m_Revision__authorName,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "element");
    ::ecore::addAnnotation(m_Revision__authorName,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "AuthorName");
    ::ecore::addAnnotation(m_Revision__authorName,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "namespace",
            "##targetNamespace");
    m_Revision__comment = new ::ecore::EAttribute();
    m_Revision__comment->setFeatureID(::caex::CaexPackage::REVISION__COMMENT);
    m_RevisionEClass->getEStructuralFeatures().push_back(m_Revision__comment);

    ::ecore::addAnnotation(m_Revision__comment,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "element");
    ::ecore::addAnnotation(m_Revision__comment,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "Comment");
    ::ecore::addAnnotation(m_Revision__comment,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "namespace",
            "##targetNamespace");

    // Version
    m_VersionEClass = new ::ecore::EClass();
    m_VersionEClass->setClassifierID(VERSION);
    m_VersionEClass->setEPackage(this);
    getEClassifiers().push_back(m_VersionEClass);
    m_Version__value = new ::ecore::EAttribute();
    m_Version__value->setFeatureID(::caex::CaexPackage::VERSION__VALUE);
    m_VersionEClass->getEStructuralFeatures().push_back(m_Version__value);

    ::ecore::addAnnotation(m_Version__value,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            ":0");
    ::ecore::addAnnotation(m_Version__value,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "simple");
    m_Version__changeMode = new ::ecore::EAttribute();
    m_Version__changeMode->setFeatureID(
            ::caex::CaexPackage::VERSION__CHANGEMODE);
    m_VersionEClass->getEStructuralFeatures().push_back(m_Version__changeMode);

    ::ecore::addAnnotation(m_Version__changeMode,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    ::ecore::addAnnotation(m_Version__changeMode,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            "ChangeMode");
    ::ecore::addAnnotation(m_Version__changeMode,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "namespace",
            "##targetNamespace");

    // AdditionalInformation
    m_AdditionalInformationEClass = new ::ecore::EClass();
    m_AdditionalInformationEClass->setClassifierID(ADDITIONALINFORMATION);
    m_AdditionalInformationEClass->setEPackage(this);
    getEClassifiers().push_back(m_AdditionalInformationEClass);

    // Create enums

    m_ChangeModeEEnum = new ::ecore::EEnum();
    m_ChangeModeEEnum->setClassifierID(CHANGEMODE);
    m_ChangeModeEEnum->setEPackage(this);
    getEClassifiers().push_back(m_ChangeModeEEnum);

    // Create data types

    m_AttributeDataTypeEDataType = new ::ecore::EDataType();
    m_AttributeDataTypeEDataType->setClassifierID(ATTRIBUTEDATATYPE);
    m_AttributeDataTypeEDataType->setEPackage(this);
    getEClassifiers().push_back(m_AttributeDataTypeEDataType);

    m_ChangeModeObjectEDataType = new ::ecore::EDataType();
    m_ChangeModeObjectEDataType->setClassifierID(CHANGEMODEOBJECT);
    m_ChangeModeObjectEDataType->setEPackage(this);
    getEClassifiers().push_back(m_ChangeModeObjectEDataType);

    // Initialize package
    setName("caex");
    setNsPrefix("caex");
    setNsURI("http://www.dke.de/CAEX/300");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_AttributeFamilyEClass->getESuperTypes().push_back(m_AttributeEClass);
    m_AttributeNameMappingEClass->getESuperTypes().push_back(
            m_CAEXBasicObjectEClass);
    m_AttributeEClass->getESuperTypes().push_back(m_CAEXObjectEClass);
    m_AttributeLibEClass->getESuperTypes().push_back(m_CAEXObjectEClass);
    m_AttributeValueRequirementEClass->getESuperTypes().push_back(
            m_CAEXBasicObjectEClass);
    m_CAEXFileEClass->getESuperTypes().push_back(m_CAEXBasicObjectEClass);
    m_CAEXObjectEClass->getESuperTypes().push_back(m_CAEXBasicObjectEClass);
    m_ExternalInterfaceEClass->getESuperTypes().push_back(
            m_InterfaceClassEClass);
    m_ExternalReferenceEClass->getESuperTypes().push_back(
            m_CAEXBasicObjectEClass);
    m_InstanceHierarchyEClass->getESuperTypes().push_back(m_CAEXObjectEClass);
    m_InterfaceClassLibEClass->getESuperTypes().push_back(m_CAEXObjectEClass);
    m_InterfaceClassEClass->getESuperTypes().push_back(m_CAEXObjectEClass);
    m_InterfaceFamilyEClass->getESuperTypes().push_back(m_InterfaceClassEClass);
    m_InterfaceIDMappingEClass->getESuperTypes().push_back(
            m_CAEXBasicObjectEClass);
    m_InternalElementEClass->getESuperTypes().push_back(
            m_SystemUnitClassEClass);
    m_InternalLinkEClass->getESuperTypes().push_back(m_CAEXObjectEClass);
    m_MappingEClass->getESuperTypes().push_back(m_CAEXBasicObjectEClass);
    m_RefSemanticEClass->getESuperTypes().push_back(m_CAEXBasicObjectEClass);
    m_RoleClassLibEClass->getESuperTypes().push_back(m_CAEXObjectEClass);
    m_RoleClassEClass->getESuperTypes().push_back(m_CAEXObjectEClass);
    m_RoleFamilyEClass->getESuperTypes().push_back(m_RoleClassEClass);
    m_RoleRequirementsEClass->getESuperTypes().push_back(
            m_CAEXBasicObjectEClass);
    m_SupportedRoleClassEClass->getESuperTypes().push_back(
            m_CAEXBasicObjectEClass);
    m_SystemUnitClassLibEClass->getESuperTypes().push_back(m_CAEXObjectEClass);
    m_SystemUnitClassEClass->getESuperTypes().push_back(m_CAEXObjectEClass);
    m_SystemUnitFamilyEClass->getESuperTypes().push_back(
            m_SystemUnitClassEClass);
    m_RevisionEClass->getESuperTypes().push_back(m_CAEXBasicObjectEClass);
    m_AdditionalInformationEClass->getESuperTypes().push_back(
            dynamic_cast< ::anytype::AnytypePackage* >(::anytype::AnytypePackage::_instance())->getGenericElement());

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // AttributeFamily
    m_AttributeFamilyEClass->setName("AttributeFamily");
    m_AttributeFamilyEClass->setAbstract(false);
    m_AttributeFamilyEClass->setInterface(false);
    // AttributeNameMapping
    m_AttributeNameMappingEClass->setName("AttributeNameMapping");
    m_AttributeNameMappingEClass->setAbstract(false);
    m_AttributeNameMappingEClass->setInterface(false);
    m_AttributeNameMapping__roleAttributeName->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_AttributeNameMapping__roleAttributeName->setName("roleAttributeName");
    m_AttributeNameMapping__roleAttributeName->setDefaultValueLiteral("");
    m_AttributeNameMapping__roleAttributeName->setLowerBound(1);
    m_AttributeNameMapping__roleAttributeName->setUpperBound(1);
    m_AttributeNameMapping__roleAttributeName->setTransient(false);
    m_AttributeNameMapping__roleAttributeName->setVolatile(false);
    m_AttributeNameMapping__roleAttributeName->setChangeable(true);
    m_AttributeNameMapping__roleAttributeName->setUnsettable(false);
    m_AttributeNameMapping__roleAttributeName->setID(false);
    m_AttributeNameMapping__roleAttributeName->setUnique(true);
    m_AttributeNameMapping__roleAttributeName->setDerived(false);
    m_AttributeNameMapping__roleAttributeName->setOrdered(true);
    m_AttributeNameMapping__systemUnitAttributeName->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_AttributeNameMapping__systemUnitAttributeName->setName(
            "systemUnitAttributeName");
    m_AttributeNameMapping__systemUnitAttributeName->setDefaultValueLiteral("");
    m_AttributeNameMapping__systemUnitAttributeName->setLowerBound(1);
    m_AttributeNameMapping__systemUnitAttributeName->setUpperBound(1);
    m_AttributeNameMapping__systemUnitAttributeName->setTransient(false);
    m_AttributeNameMapping__systemUnitAttributeName->setVolatile(false);
    m_AttributeNameMapping__systemUnitAttributeName->setChangeable(true);
    m_AttributeNameMapping__systemUnitAttributeName->setUnsettable(false);
    m_AttributeNameMapping__systemUnitAttributeName->setID(false);
    m_AttributeNameMapping__systemUnitAttributeName->setUnique(true);
    m_AttributeNameMapping__systemUnitAttributeName->setDerived(false);
    m_AttributeNameMapping__systemUnitAttributeName->setOrdered(true);
    m_AttributeNameMapping__roleAttribute->setEType(m_AttributeEClass);
    m_AttributeNameMapping__roleAttribute->setName("roleAttribute");
    m_AttributeNameMapping__roleAttribute->setDefaultValueLiteral("");
    m_AttributeNameMapping__roleAttribute->setLowerBound(1);
    m_AttributeNameMapping__roleAttribute->setUpperBound(1);
    m_AttributeNameMapping__roleAttribute->setTransient(false);
    m_AttributeNameMapping__roleAttribute->setVolatile(false);
    m_AttributeNameMapping__roleAttribute->setChangeable(true);
    m_AttributeNameMapping__roleAttribute->setContainment(false);
    m_AttributeNameMapping__roleAttribute->setResolveProxies(true);
    m_AttributeNameMapping__roleAttribute->setUnique(true);
    m_AttributeNameMapping__roleAttribute->setDerived(false);
    m_AttributeNameMapping__roleAttribute->setOrdered(true);
    m_AttributeNameMapping__systemUnitAttribute->setEType(m_AttributeEClass);
    m_AttributeNameMapping__systemUnitAttribute->setName("systemUnitAttribute");
    m_AttributeNameMapping__systemUnitAttribute->setDefaultValueLiteral("");
    m_AttributeNameMapping__systemUnitAttribute->setLowerBound(1);
    m_AttributeNameMapping__systemUnitAttribute->setUpperBound(1);
    m_AttributeNameMapping__systemUnitAttribute->setTransient(false);
    m_AttributeNameMapping__systemUnitAttribute->setVolatile(false);
    m_AttributeNameMapping__systemUnitAttribute->setChangeable(true);
    m_AttributeNameMapping__systemUnitAttribute->setContainment(false);
    m_AttributeNameMapping__systemUnitAttribute->setResolveProxies(true);
    m_AttributeNameMapping__systemUnitAttribute->setUnique(true);
    m_AttributeNameMapping__systemUnitAttribute->setDerived(false);
    m_AttributeNameMapping__systemUnitAttribute->setOrdered(true);
    // Attribute
    m_AttributeEClass->setName("Attribute");
    m_AttributeEClass->setAbstract(false);
    m_AttributeEClass->setInterface(false);
    m_Attribute__defaultValue->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_Attribute__defaultValue->setName("defaultValue");
    m_Attribute__defaultValue->setDefaultValueLiteral("");
    m_Attribute__defaultValue->setLowerBound(0);
    m_Attribute__defaultValue->setUpperBound(1);
    m_Attribute__defaultValue->setTransient(false);
    m_Attribute__defaultValue->setVolatile(false);
    m_Attribute__defaultValue->setChangeable(true);
    m_Attribute__defaultValue->setUnsettable(false);
    m_Attribute__defaultValue->setID(false);
    m_Attribute__defaultValue->setUnique(true);
    m_Attribute__defaultValue->setDerived(false);
    m_Attribute__defaultValue->setOrdered(true);
    m_Attribute__value->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_Attribute__value->setName("value");
    m_Attribute__value->setDefaultValueLiteral("");
    m_Attribute__value->setLowerBound(0);
    m_Attribute__value->setUpperBound(1);
    m_Attribute__value->setTransient(false);
    m_Attribute__value->setVolatile(false);
    m_Attribute__value->setChangeable(true);
    m_Attribute__value->setUnsettable(false);
    m_Attribute__value->setID(false);
    m_Attribute__value->setUnique(true);
    m_Attribute__value->setDerived(false);
    m_Attribute__value->setOrdered(true);
    m_Attribute__attributeDataType->setEType(m_AttributeDataTypeEDataType);
    m_Attribute__attributeDataType->setName("attributeDataType");
    m_Attribute__attributeDataType->setDefaultValueLiteral("");
    m_Attribute__attributeDataType->setLowerBound(0);
    m_Attribute__attributeDataType->setUpperBound(1);
    m_Attribute__attributeDataType->setTransient(false);
    m_Attribute__attributeDataType->setVolatile(false);
    m_Attribute__attributeDataType->setChangeable(true);
    m_Attribute__attributeDataType->setUnsettable(false);
    m_Attribute__attributeDataType->setID(false);
    m_Attribute__attributeDataType->setUnique(true);
    m_Attribute__attributeDataType->setDerived(false);
    m_Attribute__attributeDataType->setOrdered(true);
    m_Attribute__refAttributeType->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_Attribute__refAttributeType->setName("refAttributeType");
    m_Attribute__refAttributeType->setDefaultValueLiteral("");
    m_Attribute__refAttributeType->setLowerBound(0);
    m_Attribute__refAttributeType->setUpperBound(1);
    m_Attribute__refAttributeType->setTransient(false);
    m_Attribute__refAttributeType->setVolatile(false);
    m_Attribute__refAttributeType->setChangeable(true);
    m_Attribute__refAttributeType->setUnsettable(false);
    m_Attribute__refAttributeType->setID(false);
    m_Attribute__refAttributeType->setUnique(true);
    m_Attribute__refAttributeType->setDerived(false);
    m_Attribute__refAttributeType->setOrdered(true);
    m_Attribute__unit->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_Attribute__unit->setName("unit");
    m_Attribute__unit->setDefaultValueLiteral("");
    m_Attribute__unit->setLowerBound(0);
    m_Attribute__unit->setUpperBound(1);
    m_Attribute__unit->setTransient(false);
    m_Attribute__unit->setVolatile(false);
    m_Attribute__unit->setChangeable(true);
    m_Attribute__unit->setUnsettable(false);
    m_Attribute__unit->setID(false);
    m_Attribute__unit->setUnique(true);
    m_Attribute__unit->setDerived(false);
    m_Attribute__unit->setOrdered(true);
    m_Attribute__refSemantic->setEType(m_RefSemanticEClass);
    m_Attribute__refSemantic->setName("refSemantic");
    m_Attribute__refSemantic->setDefaultValueLiteral("");
    m_Attribute__refSemantic->setLowerBound(0);
    m_Attribute__refSemantic->setUpperBound(-1);
    m_Attribute__refSemantic->setTransient(false);
    m_Attribute__refSemantic->setVolatile(false);
    m_Attribute__refSemantic->setChangeable(true);
    m_Attribute__refSemantic->setContainment(true);
    m_Attribute__refSemantic->setResolveProxies(false);
    m_Attribute__refSemantic->setUnique(true);
    m_Attribute__refSemantic->setDerived(false);
    m_Attribute__refSemantic->setOrdered(true);
    m_Attribute__constraint->setEType(m_AttributeValueRequirementEClass);
    m_Attribute__constraint->setName("constraint");
    m_Attribute__constraint->setDefaultValueLiteral("");
    m_Attribute__constraint->setLowerBound(0);
    m_Attribute__constraint->setUpperBound(-1);
    m_Attribute__constraint->setTransient(false);
    m_Attribute__constraint->setVolatile(false);
    m_Attribute__constraint->setChangeable(true);
    m_Attribute__constraint->setContainment(true);
    m_Attribute__constraint->setResolveProxies(false);
    m_Attribute__constraint->setUnique(true);
    m_Attribute__constraint->setDerived(false);
    m_Attribute__constraint->setOrdered(true);
    m_Attribute__attribute->setEType(m_AttributeEClass);
    m_Attribute__attribute->setName("attribute");
    m_Attribute__attribute->setDefaultValueLiteral("");
    m_Attribute__attribute->setLowerBound(0);
    m_Attribute__attribute->setUpperBound(-1);
    m_Attribute__attribute->setTransient(false);
    m_Attribute__attribute->setVolatile(false);
    m_Attribute__attribute->setChangeable(true);
    m_Attribute__attribute->setContainment(true);
    m_Attribute__attribute->setResolveProxies(false);
    m_Attribute__attribute->setUnique(true);
    m_Attribute__attribute->setDerived(false);
    m_Attribute__attribute->setOrdered(true);
    m_Attribute__referenceAttribute->setEType(m_AttributeEClass);
    m_Attribute__referenceAttribute->setName("referenceAttribute");
    m_Attribute__referenceAttribute->setDefaultValueLiteral("");
    m_Attribute__referenceAttribute->setLowerBound(0);
    m_Attribute__referenceAttribute->setUpperBound(1);
    m_Attribute__referenceAttribute->setTransient(false);
    m_Attribute__referenceAttribute->setVolatile(false);
    m_Attribute__referenceAttribute->setChangeable(true);
    m_Attribute__referenceAttribute->setContainment(false);
    m_Attribute__referenceAttribute->setResolveProxies(true);
    m_Attribute__referenceAttribute->setUnique(true);
    m_Attribute__referenceAttribute->setDerived(false);
    m_Attribute__referenceAttribute->setOrdered(true);
    // AttributeLib
    m_AttributeLibEClass->setName("AttributeLib");
    m_AttributeLibEClass->setAbstract(false);
    m_AttributeLibEClass->setInterface(false);
    m_AttributeLib__attributeType->setEType(m_AttributeEClass);
    m_AttributeLib__attributeType->setName("attributeType");
    m_AttributeLib__attributeType->setDefaultValueLiteral("");
    m_AttributeLib__attributeType->setLowerBound(0);
    m_AttributeLib__attributeType->setUpperBound(-1);
    m_AttributeLib__attributeType->setTransient(false);
    m_AttributeLib__attributeType->setVolatile(false);
    m_AttributeLib__attributeType->setChangeable(true);
    m_AttributeLib__attributeType->setContainment(true);
    m_AttributeLib__attributeType->setResolveProxies(false);
    m_AttributeLib__attributeType->setUnique(true);
    m_AttributeLib__attributeType->setDerived(false);
    m_AttributeLib__attributeType->setOrdered(true);
    // AttributeValueRequirement
    m_AttributeValueRequirementEClass->setName("AttributeValueRequirement");
    m_AttributeValueRequirementEClass->setAbstract(false);
    m_AttributeValueRequirementEClass->setInterface(false);
    m_AttributeValueRequirement__name->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_AttributeValueRequirement__name->setName("name");
    m_AttributeValueRequirement__name->setDefaultValueLiteral("");
    m_AttributeValueRequirement__name->setLowerBound(1);
    m_AttributeValueRequirement__name->setUpperBound(1);
    m_AttributeValueRequirement__name->setTransient(false);
    m_AttributeValueRequirement__name->setVolatile(false);
    m_AttributeValueRequirement__name->setChangeable(true);
    m_AttributeValueRequirement__name->setUnsettable(false);
    m_AttributeValueRequirement__name->setID(false);
    m_AttributeValueRequirement__name->setUnique(true);
    m_AttributeValueRequirement__name->setDerived(false);
    m_AttributeValueRequirement__name->setOrdered(true);
    m_AttributeValueRequirement__ordinalScaledType->setEType(
            m_OrdinalScaledEClass);
    m_AttributeValueRequirement__ordinalScaledType->setName(
            "ordinalScaledType");
    m_AttributeValueRequirement__ordinalScaledType->setDefaultValueLiteral("");
    m_AttributeValueRequirement__ordinalScaledType->setLowerBound(0);
    m_AttributeValueRequirement__ordinalScaledType->setUpperBound(1);
    m_AttributeValueRequirement__ordinalScaledType->setTransient(false);
    m_AttributeValueRequirement__ordinalScaledType->setVolatile(false);
    m_AttributeValueRequirement__ordinalScaledType->setChangeable(true);
    m_AttributeValueRequirement__ordinalScaledType->setContainment(true);
    m_AttributeValueRequirement__ordinalScaledType->setResolveProxies(false);
    m_AttributeValueRequirement__ordinalScaledType->setUnique(true);
    m_AttributeValueRequirement__ordinalScaledType->setDerived(false);
    m_AttributeValueRequirement__ordinalScaledType->setOrdered(true);
    m_AttributeValueRequirement__nominalScaledType->setEType(
            m_NominalScaledEClass);
    m_AttributeValueRequirement__nominalScaledType->setName(
            "nominalScaledType");
    m_AttributeValueRequirement__nominalScaledType->setDefaultValueLiteral("");
    m_AttributeValueRequirement__nominalScaledType->setLowerBound(0);
    m_AttributeValueRequirement__nominalScaledType->setUpperBound(1);
    m_AttributeValueRequirement__nominalScaledType->setTransient(false);
    m_AttributeValueRequirement__nominalScaledType->setVolatile(false);
    m_AttributeValueRequirement__nominalScaledType->setChangeable(true);
    m_AttributeValueRequirement__nominalScaledType->setContainment(true);
    m_AttributeValueRequirement__nominalScaledType->setResolveProxies(false);
    m_AttributeValueRequirement__nominalScaledType->setUnique(true);
    m_AttributeValueRequirement__nominalScaledType->setDerived(false);
    m_AttributeValueRequirement__nominalScaledType->setOrdered(true);
    m_AttributeValueRequirement__unknownType->setEType(m_UnknownTypeEClass);
    m_AttributeValueRequirement__unknownType->setName("unknownType");
    m_AttributeValueRequirement__unknownType->setDefaultValueLiteral("");
    m_AttributeValueRequirement__unknownType->setLowerBound(0);
    m_AttributeValueRequirement__unknownType->setUpperBound(1);
    m_AttributeValueRequirement__unknownType->setTransient(false);
    m_AttributeValueRequirement__unknownType->setVolatile(false);
    m_AttributeValueRequirement__unknownType->setChangeable(true);
    m_AttributeValueRequirement__unknownType->setContainment(true);
    m_AttributeValueRequirement__unknownType->setResolveProxies(false);
    m_AttributeValueRequirement__unknownType->setUnique(true);
    m_AttributeValueRequirement__unknownType->setDerived(false);
    m_AttributeValueRequirement__unknownType->setOrdered(true);
    // CAEXBasicObject
    m_CAEXBasicObjectEClass->setName("CAEXBasicObject");
    m_CAEXBasicObjectEClass->setAbstract(false);
    m_CAEXBasicObjectEClass->setInterface(false);
    m_CAEXBasicObject__changeMode->setEType(m_ChangeModeEEnum);
    m_CAEXBasicObject__changeMode->setName("changeMode");
    m_CAEXBasicObject__changeMode->setDefaultValueLiteral("state");
    m_CAEXBasicObject__changeMode->setLowerBound(0);
    m_CAEXBasicObject__changeMode->setUpperBound(1);
    m_CAEXBasicObject__changeMode->setTransient(false);
    m_CAEXBasicObject__changeMode->setVolatile(false);
    m_CAEXBasicObject__changeMode->setChangeable(true);
    m_CAEXBasicObject__changeMode->setUnsettable(true);
    m_CAEXBasicObject__changeMode->setID(false);
    m_CAEXBasicObject__changeMode->setUnique(true);
    m_CAEXBasicObject__changeMode->setDerived(false);
    m_CAEXBasicObject__changeMode->setOrdered(true);
    m_CAEXBasicObject__description->setEType(m_DescriptionEClass);
    m_CAEXBasicObject__description->setName("description");
    m_CAEXBasicObject__description->setDefaultValueLiteral("");
    m_CAEXBasicObject__description->setLowerBound(0);
    m_CAEXBasicObject__description->setUpperBound(1);
    m_CAEXBasicObject__description->setTransient(false);
    m_CAEXBasicObject__description->setVolatile(false);
    m_CAEXBasicObject__description->setChangeable(true);
    m_CAEXBasicObject__description->setContainment(true);
    m_CAEXBasicObject__description->setResolveProxies(true);
    m_CAEXBasicObject__description->setUnique(true);
    m_CAEXBasicObject__description->setDerived(false);
    m_CAEXBasicObject__description->setOrdered(true);
    m_CAEXBasicObject__version->setEType(m_VersionEClass);
    m_CAEXBasicObject__version->setName("version");
    m_CAEXBasicObject__version->setDefaultValueLiteral("");
    m_CAEXBasicObject__version->setLowerBound(0);
    m_CAEXBasicObject__version->setUpperBound(1);
    m_CAEXBasicObject__version->setTransient(false);
    m_CAEXBasicObject__version->setVolatile(false);
    m_CAEXBasicObject__version->setChangeable(true);
    m_CAEXBasicObject__version->setContainment(true);
    m_CAEXBasicObject__version->setResolveProxies(true);
    m_CAEXBasicObject__version->setUnique(true);
    m_CAEXBasicObject__version->setDerived(false);
    m_CAEXBasicObject__version->setOrdered(true);
    m_CAEXBasicObject__revision->setEType(m_RevisionEClass);
    m_CAEXBasicObject__revision->setName("revision");
    m_CAEXBasicObject__revision->setDefaultValueLiteral("");
    m_CAEXBasicObject__revision->setLowerBound(0);
    m_CAEXBasicObject__revision->setUpperBound(-1);
    m_CAEXBasicObject__revision->setTransient(false);
    m_CAEXBasicObject__revision->setVolatile(false);
    m_CAEXBasicObject__revision->setChangeable(true);
    m_CAEXBasicObject__revision->setContainment(true);
    m_CAEXBasicObject__revision->setResolveProxies(true);
    m_CAEXBasicObject__revision->setUnique(true);
    m_CAEXBasicObject__revision->setDerived(false);
    m_CAEXBasicObject__revision->setOrdered(true);
    m_CAEXBasicObject__copyright->setEType(m_CopyrightEClass);
    m_CAEXBasicObject__copyright->setName("copyright");
    m_CAEXBasicObject__copyright->setDefaultValueLiteral("");
    m_CAEXBasicObject__copyright->setLowerBound(0);
    m_CAEXBasicObject__copyright->setUpperBound(1);
    m_CAEXBasicObject__copyright->setTransient(false);
    m_CAEXBasicObject__copyright->setVolatile(false);
    m_CAEXBasicObject__copyright->setChangeable(true);
    m_CAEXBasicObject__copyright->setContainment(true);
    m_CAEXBasicObject__copyright->setResolveProxies(true);
    m_CAEXBasicObject__copyright->setUnique(true);
    m_CAEXBasicObject__copyright->setDerived(false);
    m_CAEXBasicObject__copyright->setOrdered(true);
    m_CAEXBasicObject__additionalInformation->setEType(
            m_AdditionalInformationEClass);
    m_CAEXBasicObject__additionalInformation->setName("additionalInformation");
    m_CAEXBasicObject__additionalInformation->setDefaultValueLiteral("");
    m_CAEXBasicObject__additionalInformation->setLowerBound(0);
    m_CAEXBasicObject__additionalInformation->setUpperBound(-1);
    m_CAEXBasicObject__additionalInformation->setTransient(false);
    m_CAEXBasicObject__additionalInformation->setVolatile(false);
    m_CAEXBasicObject__additionalInformation->setChangeable(true);
    m_CAEXBasicObject__additionalInformation->setContainment(true);
    m_CAEXBasicObject__additionalInformation->setResolveProxies(true);
    m_CAEXBasicObject__additionalInformation->setUnique(true);
    m_CAEXBasicObject__additionalInformation->setDerived(false);
    m_CAEXBasicObject__additionalInformation->setOrdered(true);
    // CAEXFile
    m_CAEXFileEClass->setName("CAEXFile");
    m_CAEXFileEClass->setAbstract(false);
    m_CAEXFileEClass->setInterface(false);
    m_CAEXFile__superiorStandardVersion->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_CAEXFile__superiorStandardVersion->setName("superiorStandardVersion");
    m_CAEXFile__superiorStandardVersion->setDefaultValueLiteral("");
    m_CAEXFile__superiorStandardVersion->setLowerBound(0);
    m_CAEXFile__superiorStandardVersion->setUpperBound(-1);
    m_CAEXFile__superiorStandardVersion->setTransient(false);
    m_CAEXFile__superiorStandardVersion->setVolatile(false);
    m_CAEXFile__superiorStandardVersion->setChangeable(true);
    m_CAEXFile__superiorStandardVersion->setUnsettable(false);
    m_CAEXFile__superiorStandardVersion->setID(false);
    m_CAEXFile__superiorStandardVersion->setUnique(false);
    m_CAEXFile__superiorStandardVersion->setDerived(false);
    m_CAEXFile__superiorStandardVersion->setOrdered(true);
    m_CAEXFile__fileName->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_CAEXFile__fileName->setName("fileName");
    m_CAEXFile__fileName->setDefaultValueLiteral("");
    m_CAEXFile__fileName->setLowerBound(1);
    m_CAEXFile__fileName->setUpperBound(1);
    m_CAEXFile__fileName->setTransient(false);
    m_CAEXFile__fileName->setVolatile(false);
    m_CAEXFile__fileName->setChangeable(true);
    m_CAEXFile__fileName->setUnsettable(false);
    m_CAEXFile__fileName->setID(false);
    m_CAEXFile__fileName->setUnique(true);
    m_CAEXFile__fileName->setDerived(false);
    m_CAEXFile__fileName->setOrdered(true);
    m_CAEXFile__schemaVersion->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_CAEXFile__schemaVersion->setName("schemaVersion");
    m_CAEXFile__schemaVersion->setDefaultValueLiteral("3.00");
    m_CAEXFile__schemaVersion->setLowerBound(1);
    m_CAEXFile__schemaVersion->setUpperBound(1);
    m_CAEXFile__schemaVersion->setTransient(false);
    m_CAEXFile__schemaVersion->setVolatile(false);
    m_CAEXFile__schemaVersion->setChangeable(true);
    m_CAEXFile__schemaVersion->setUnsettable(true);
    m_CAEXFile__schemaVersion->setID(false);
    m_CAEXFile__schemaVersion->setUnique(true);
    m_CAEXFile__schemaVersion->setDerived(false);
    m_CAEXFile__schemaVersion->setOrdered(true);
    m_CAEXFile__sourceDocumentInformation->setEType(
            m_SourceDocumentInformationEClass);
    m_CAEXFile__sourceDocumentInformation->setName("sourceDocumentInformation");
    m_CAEXFile__sourceDocumentInformation->setDefaultValueLiteral("");
    m_CAEXFile__sourceDocumentInformation->setLowerBound(1);
    m_CAEXFile__sourceDocumentInformation->setUpperBound(-1);
    m_CAEXFile__sourceDocumentInformation->setTransient(false);
    m_CAEXFile__sourceDocumentInformation->setVolatile(false);
    m_CAEXFile__sourceDocumentInformation->setChangeable(true);
    m_CAEXFile__sourceDocumentInformation->setContainment(true);
    m_CAEXFile__sourceDocumentInformation->setResolveProxies(false);
    m_CAEXFile__sourceDocumentInformation->setUnique(true);
    m_CAEXFile__sourceDocumentInformation->setDerived(false);
    m_CAEXFile__sourceDocumentInformation->setOrdered(true);
    m_CAEXFile__externalReference->setEType(m_ExternalReferenceEClass);
    m_CAEXFile__externalReference->setName("externalReference");
    m_CAEXFile__externalReference->setDefaultValueLiteral("");
    m_CAEXFile__externalReference->setLowerBound(0);
    m_CAEXFile__externalReference->setUpperBound(-1);
    m_CAEXFile__externalReference->setTransient(false);
    m_CAEXFile__externalReference->setVolatile(false);
    m_CAEXFile__externalReference->setChangeable(true);
    m_CAEXFile__externalReference->setContainment(true);
    m_CAEXFile__externalReference->setResolveProxies(false);
    m_CAEXFile__externalReference->setUnique(true);
    m_CAEXFile__externalReference->setDerived(false);
    m_CAEXFile__externalReference->setOrdered(true);
    m_CAEXFile__instanceHierarchy->setEType(m_InstanceHierarchyEClass);
    m_CAEXFile__instanceHierarchy->setName("instanceHierarchy");
    m_CAEXFile__instanceHierarchy->setDefaultValueLiteral("");
    m_CAEXFile__instanceHierarchy->setLowerBound(0);
    m_CAEXFile__instanceHierarchy->setUpperBound(-1);
    m_CAEXFile__instanceHierarchy->setTransient(false);
    m_CAEXFile__instanceHierarchy->setVolatile(false);
    m_CAEXFile__instanceHierarchy->setChangeable(true);
    m_CAEXFile__instanceHierarchy->setContainment(true);
    m_CAEXFile__instanceHierarchy->setResolveProxies(false);
    m_CAEXFile__instanceHierarchy->setUnique(true);
    m_CAEXFile__instanceHierarchy->setDerived(false);
    m_CAEXFile__instanceHierarchy->setOrdered(true);
    m_CAEXFile__interfaceClassLib->setEType(m_InterfaceClassLibEClass);
    m_CAEXFile__interfaceClassLib->setName("interfaceClassLib");
    m_CAEXFile__interfaceClassLib->setDefaultValueLiteral("");
    m_CAEXFile__interfaceClassLib->setLowerBound(0);
    m_CAEXFile__interfaceClassLib->setUpperBound(-1);
    m_CAEXFile__interfaceClassLib->setTransient(false);
    m_CAEXFile__interfaceClassLib->setVolatile(false);
    m_CAEXFile__interfaceClassLib->setChangeable(true);
    m_CAEXFile__interfaceClassLib->setContainment(true);
    m_CAEXFile__interfaceClassLib->setResolveProxies(false);
    m_CAEXFile__interfaceClassLib->setUnique(true);
    m_CAEXFile__interfaceClassLib->setDerived(false);
    m_CAEXFile__interfaceClassLib->setOrdered(true);
    m_CAEXFile__roleClassLib->setEType(m_RoleClassLibEClass);
    m_CAEXFile__roleClassLib->setName("roleClassLib");
    m_CAEXFile__roleClassLib->setDefaultValueLiteral("");
    m_CAEXFile__roleClassLib->setLowerBound(0);
    m_CAEXFile__roleClassLib->setUpperBound(-1);
    m_CAEXFile__roleClassLib->setTransient(false);
    m_CAEXFile__roleClassLib->setVolatile(false);
    m_CAEXFile__roleClassLib->setChangeable(true);
    m_CAEXFile__roleClassLib->setContainment(true);
    m_CAEXFile__roleClassLib->setResolveProxies(false);
    m_CAEXFile__roleClassLib->setUnique(true);
    m_CAEXFile__roleClassLib->setDerived(false);
    m_CAEXFile__roleClassLib->setOrdered(true);
    m_CAEXFile__systemUnitClassLib->setEType(m_SystemUnitClassLibEClass);
    m_CAEXFile__systemUnitClassLib->setName("systemUnitClassLib");
    m_CAEXFile__systemUnitClassLib->setDefaultValueLiteral("");
    m_CAEXFile__systemUnitClassLib->setLowerBound(0);
    m_CAEXFile__systemUnitClassLib->setUpperBound(-1);
    m_CAEXFile__systemUnitClassLib->setTransient(false);
    m_CAEXFile__systemUnitClassLib->setVolatile(false);
    m_CAEXFile__systemUnitClassLib->setChangeable(true);
    m_CAEXFile__systemUnitClassLib->setContainment(true);
    m_CAEXFile__systemUnitClassLib->setResolveProxies(false);
    m_CAEXFile__systemUnitClassLib->setUnique(true);
    m_CAEXFile__systemUnitClassLib->setDerived(false);
    m_CAEXFile__systemUnitClassLib->setOrdered(true);
    m_CAEXFile__attributeTypeLib->setEType(m_AttributeLibEClass);
    m_CAEXFile__attributeTypeLib->setName("attributeTypeLib");
    m_CAEXFile__attributeTypeLib->setDefaultValueLiteral("");
    m_CAEXFile__attributeTypeLib->setLowerBound(0);
    m_CAEXFile__attributeTypeLib->setUpperBound(-1);
    m_CAEXFile__attributeTypeLib->setTransient(false);
    m_CAEXFile__attributeTypeLib->setVolatile(false);
    m_CAEXFile__attributeTypeLib->setChangeable(true);
    m_CAEXFile__attributeTypeLib->setContainment(true);
    m_CAEXFile__attributeTypeLib->setResolveProxies(false);
    m_CAEXFile__attributeTypeLib->setUnique(true);
    m_CAEXFile__attributeTypeLib->setDerived(false);
    m_CAEXFile__attributeTypeLib->setOrdered(true);
    // CAEXObject
    m_CAEXObjectEClass->setName("CAEXObject");
    m_CAEXObjectEClass->setAbstract(false);
    m_CAEXObjectEClass->setInterface(false);
    m_CAEXObject__iD->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_CAEXObject__iD->setName("iD");
    m_CAEXObject__iD->setDefaultValueLiteral("");
    m_CAEXObject__iD->setLowerBound(0);
    m_CAEXObject__iD->setUpperBound(1);
    m_CAEXObject__iD->setTransient(false);
    m_CAEXObject__iD->setVolatile(false);
    m_CAEXObject__iD->setChangeable(true);
    m_CAEXObject__iD->setUnsettable(false);
    m_CAEXObject__iD->setID(false);
    m_CAEXObject__iD->setUnique(true);
    m_CAEXObject__iD->setDerived(false);
    m_CAEXObject__iD->setOrdered(true);
    m_CAEXObject__name->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_CAEXObject__name->setName("name");
    m_CAEXObject__name->setDefaultValueLiteral("");
    m_CAEXObject__name->setLowerBound(1);
    m_CAEXObject__name->setUpperBound(1);
    m_CAEXObject__name->setTransient(false);
    m_CAEXObject__name->setVolatile(false);
    m_CAEXObject__name->setChangeable(true);
    m_CAEXObject__name->setUnsettable(false);
    m_CAEXObject__name->setID(false);
    m_CAEXObject__name->setUnique(true);
    m_CAEXObject__name->setDerived(false);
    m_CAEXObject__name->setOrdered(true);
    // DocumentRoot
    m_DocumentRootEClass->setName("DocumentRoot");
    m_DocumentRootEClass->setAbstract(false);
    m_DocumentRootEClass->setInterface(false);
    m_DocumentRoot__mixed->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEFeatureMapEntry());
    m_DocumentRoot__mixed->setName("mixed");
    m_DocumentRoot__mixed->setDefaultValueLiteral("");
    m_DocumentRoot__mixed->setLowerBound(0);
    m_DocumentRoot__mixed->setUpperBound(-1);
    m_DocumentRoot__mixed->setTransient(false);
    m_DocumentRoot__mixed->setVolatile(false);
    m_DocumentRoot__mixed->setChangeable(true);
    m_DocumentRoot__mixed->setUnsettable(false);
    m_DocumentRoot__mixed->setID(false);
    m_DocumentRoot__mixed->setUnique(false);
    m_DocumentRoot__mixed->setDerived(false);
    m_DocumentRoot__mixed->setOrdered(true);
    m_DocumentRoot__xMLNSPrefixMap->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEStringToStringMapEntry());
    m_DocumentRoot__xMLNSPrefixMap->setName("xMLNSPrefixMap");
    m_DocumentRoot__xMLNSPrefixMap->setDefaultValueLiteral("");
    m_DocumentRoot__xMLNSPrefixMap->setLowerBound(0);
    m_DocumentRoot__xMLNSPrefixMap->setUpperBound(-1);
    m_DocumentRoot__xMLNSPrefixMap->setTransient(true);
    m_DocumentRoot__xMLNSPrefixMap->setVolatile(false);
    m_DocumentRoot__xMLNSPrefixMap->setChangeable(true);
    m_DocumentRoot__xMLNSPrefixMap->setContainment(true);
    m_DocumentRoot__xMLNSPrefixMap->setResolveProxies(false);
    m_DocumentRoot__xMLNSPrefixMap->setUnique(true);
    m_DocumentRoot__xMLNSPrefixMap->setDerived(false);
    m_DocumentRoot__xMLNSPrefixMap->setOrdered(true);
    m_DocumentRoot__xSISchemaLocation->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEStringToStringMapEntry());
    m_DocumentRoot__xSISchemaLocation->setName("xSISchemaLocation");
    m_DocumentRoot__xSISchemaLocation->setDefaultValueLiteral("");
    m_DocumentRoot__xSISchemaLocation->setLowerBound(0);
    m_DocumentRoot__xSISchemaLocation->setUpperBound(-1);
    m_DocumentRoot__xSISchemaLocation->setTransient(true);
    m_DocumentRoot__xSISchemaLocation->setVolatile(false);
    m_DocumentRoot__xSISchemaLocation->setChangeable(true);
    m_DocumentRoot__xSISchemaLocation->setContainment(true);
    m_DocumentRoot__xSISchemaLocation->setResolveProxies(false);
    m_DocumentRoot__xSISchemaLocation->setUnique(true);
    m_DocumentRoot__xSISchemaLocation->setDerived(false);
    m_DocumentRoot__xSISchemaLocation->setOrdered(true);
    m_DocumentRoot__cAEXFile->setEType(m_CAEXFileEClass);
    m_DocumentRoot__cAEXFile->setName("cAEXFile");
    m_DocumentRoot__cAEXFile->setDefaultValueLiteral("");
    m_DocumentRoot__cAEXFile->setLowerBound(0);
    m_DocumentRoot__cAEXFile->setUpperBound(-2);
    m_DocumentRoot__cAEXFile->setTransient(true);
    m_DocumentRoot__cAEXFile->setVolatile(true);
    m_DocumentRoot__cAEXFile->setChangeable(true);
    m_DocumentRoot__cAEXFile->setContainment(true);
    m_DocumentRoot__cAEXFile->setResolveProxies(false);
    m_DocumentRoot__cAEXFile->setUnique(true);
    m_DocumentRoot__cAEXFile->setDerived(true);
    m_DocumentRoot__cAEXFile->setOrdered(true);
    // ExternalInterface
    m_ExternalInterfaceEClass->setName("ExternalInterface");
    m_ExternalInterfaceEClass->setAbstract(false);
    m_ExternalInterfaceEClass->setInterface(false);
    // ExternalReference
    m_ExternalReferenceEClass->setName("ExternalReference");
    m_ExternalReferenceEClass->setAbstract(false);
    m_ExternalReferenceEClass->setInterface(false);
    m_ExternalReference__alias->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_ExternalReference__alias->setName("alias");
    m_ExternalReference__alias->setDefaultValueLiteral("");
    m_ExternalReference__alias->setLowerBound(1);
    m_ExternalReference__alias->setUpperBound(1);
    m_ExternalReference__alias->setTransient(false);
    m_ExternalReference__alias->setVolatile(false);
    m_ExternalReference__alias->setChangeable(true);
    m_ExternalReference__alias->setUnsettable(false);
    m_ExternalReference__alias->setID(false);
    m_ExternalReference__alias->setUnique(true);
    m_ExternalReference__alias->setDerived(false);
    m_ExternalReference__alias->setOrdered(true);
    m_ExternalReference__path->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_ExternalReference__path->setName("path");
    m_ExternalReference__path->setDefaultValueLiteral("");
    m_ExternalReference__path->setLowerBound(1);
    m_ExternalReference__path->setUpperBound(1);
    m_ExternalReference__path->setTransient(false);
    m_ExternalReference__path->setVolatile(false);
    m_ExternalReference__path->setChangeable(true);
    m_ExternalReference__path->setUnsettable(false);
    m_ExternalReference__path->setID(false);
    m_ExternalReference__path->setUnique(true);
    m_ExternalReference__path->setDerived(false);
    m_ExternalReference__path->setOrdered(true);
    // InstanceHierarchy
    m_InstanceHierarchyEClass->setName("InstanceHierarchy");
    m_InstanceHierarchyEClass->setAbstract(false);
    m_InstanceHierarchyEClass->setInterface(false);
    m_InstanceHierarchy__internalElement->setEType(m_InternalElementEClass);
    m_InstanceHierarchy__internalElement->setName("internalElement");
    m_InstanceHierarchy__internalElement->setDefaultValueLiteral("");
    m_InstanceHierarchy__internalElement->setLowerBound(0);
    m_InstanceHierarchy__internalElement->setUpperBound(-1);
    m_InstanceHierarchy__internalElement->setTransient(false);
    m_InstanceHierarchy__internalElement->setVolatile(false);
    m_InstanceHierarchy__internalElement->setChangeable(true);
    m_InstanceHierarchy__internalElement->setContainment(true);
    m_InstanceHierarchy__internalElement->setResolveProxies(false);
    m_InstanceHierarchy__internalElement->setUnique(true);
    m_InstanceHierarchy__internalElement->setDerived(false);
    m_InstanceHierarchy__internalElement->setOrdered(true);
    // InterfaceClassLib
    m_InterfaceClassLibEClass->setName("InterfaceClassLib");
    m_InterfaceClassLibEClass->setAbstract(false);
    m_InterfaceClassLibEClass->setInterface(false);
    m_InterfaceClassLib__interfaceClass->setEType(m_InterfaceClassEClass);
    m_InterfaceClassLib__interfaceClass->setName("interfaceClass");
    m_InterfaceClassLib__interfaceClass->setDefaultValueLiteral("");
    m_InterfaceClassLib__interfaceClass->setLowerBound(0);
    m_InterfaceClassLib__interfaceClass->setUpperBound(-1);
    m_InterfaceClassLib__interfaceClass->setTransient(false);
    m_InterfaceClassLib__interfaceClass->setVolatile(false);
    m_InterfaceClassLib__interfaceClass->setChangeable(true);
    m_InterfaceClassLib__interfaceClass->setContainment(true);
    m_InterfaceClassLib__interfaceClass->setResolveProxies(false);
    m_InterfaceClassLib__interfaceClass->setUnique(true);
    m_InterfaceClassLib__interfaceClass->setDerived(false);
    m_InterfaceClassLib__interfaceClass->setOrdered(true);
    // InterfaceClass
    m_InterfaceClassEClass->setName("InterfaceClass");
    m_InterfaceClassEClass->setAbstract(false);
    m_InterfaceClassEClass->setInterface(false);
    m_InterfaceClass__refBaseClassPath->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_InterfaceClass__refBaseClassPath->setName("refBaseClassPath");
    m_InterfaceClass__refBaseClassPath->setDefaultValueLiteral("");
    m_InterfaceClass__refBaseClassPath->setLowerBound(0);
    m_InterfaceClass__refBaseClassPath->setUpperBound(1);
    m_InterfaceClass__refBaseClassPath->setTransient(false);
    m_InterfaceClass__refBaseClassPath->setVolatile(false);
    m_InterfaceClass__refBaseClassPath->setChangeable(true);
    m_InterfaceClass__refBaseClassPath->setUnsettable(false);
    m_InterfaceClass__refBaseClassPath->setID(false);
    m_InterfaceClass__refBaseClassPath->setUnique(true);
    m_InterfaceClass__refBaseClassPath->setDerived(false);
    m_InterfaceClass__refBaseClassPath->setOrdered(true);
    m_InterfaceClass__attribute->setEType(m_AttributeEClass);
    m_InterfaceClass__attribute->setName("attribute");
    m_InterfaceClass__attribute->setDefaultValueLiteral("");
    m_InterfaceClass__attribute->setLowerBound(0);
    m_InterfaceClass__attribute->setUpperBound(-1);
    m_InterfaceClass__attribute->setTransient(false);
    m_InterfaceClass__attribute->setVolatile(false);
    m_InterfaceClass__attribute->setChangeable(true);
    m_InterfaceClass__attribute->setContainment(true);
    m_InterfaceClass__attribute->setResolveProxies(false);
    m_InterfaceClass__attribute->setUnique(true);
    m_InterfaceClass__attribute->setDerived(false);
    m_InterfaceClass__attribute->setOrdered(true);
    m_InterfaceClass__baseClass->setEType(m_InterfaceClassEClass);
    m_InterfaceClass__baseClass->setName("baseClass");
    m_InterfaceClass__baseClass->setDefaultValueLiteral("");
    m_InterfaceClass__baseClass->setLowerBound(0);
    m_InterfaceClass__baseClass->setUpperBound(1);
    m_InterfaceClass__baseClass->setTransient(false);
    m_InterfaceClass__baseClass->setVolatile(false);
    m_InterfaceClass__baseClass->setChangeable(true);
    m_InterfaceClass__baseClass->setContainment(false);
    m_InterfaceClass__baseClass->setResolveProxies(true);
    m_InterfaceClass__baseClass->setUnique(true);
    m_InterfaceClass__baseClass->setDerived(false);
    m_InterfaceClass__baseClass->setOrdered(true);
    m_InterfaceClass__interfaceClass->setEType(m_InterfaceClassEClass);
    m_InterfaceClass__interfaceClass->setName("interfaceClass");
    m_InterfaceClass__interfaceClass->setDefaultValueLiteral("");
    m_InterfaceClass__interfaceClass->setLowerBound(0);
    m_InterfaceClass__interfaceClass->setUpperBound(-1);
    m_InterfaceClass__interfaceClass->setTransient(false);
    m_InterfaceClass__interfaceClass->setVolatile(false);
    m_InterfaceClass__interfaceClass->setChangeable(true);
    m_InterfaceClass__interfaceClass->setContainment(true);
    m_InterfaceClass__interfaceClass->setResolveProxies(true);
    m_InterfaceClass__interfaceClass->setUnique(true);
    m_InterfaceClass__interfaceClass->setDerived(false);
    m_InterfaceClass__interfaceClass->setOrdered(true);
    m_InterfaceClass__externalInterface->setEType(m_InterfaceClassEClass);
    m_InterfaceClass__externalInterface->setName("externalInterface");
    m_InterfaceClass__externalInterface->setDefaultValueLiteral("");
    m_InterfaceClass__externalInterface->setLowerBound(0);
    m_InterfaceClass__externalInterface->setUpperBound(-1);
    m_InterfaceClass__externalInterface->setTransient(false);
    m_InterfaceClass__externalInterface->setVolatile(false);
    m_InterfaceClass__externalInterface->setChangeable(true);
    m_InterfaceClass__externalInterface->setContainment(true);
    m_InterfaceClass__externalInterface->setResolveProxies(false);
    m_InterfaceClass__externalInterface->setUnique(true);
    m_InterfaceClass__externalInterface->setDerived(false);
    m_InterfaceClass__externalInterface->setOrdered(true);
    // InterfaceFamily
    m_InterfaceFamilyEClass->setName("InterfaceFamily");
    m_InterfaceFamilyEClass->setAbstract(false);
    m_InterfaceFamilyEClass->setInterface(false);
    // InterfaceIDMapping
    m_InterfaceIDMappingEClass->setName("InterfaceIDMapping");
    m_InterfaceIDMappingEClass->setAbstract(false);
    m_InterfaceIDMappingEClass->setInterface(false);
    m_InterfaceIDMapping__roleInterfaceID->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_InterfaceIDMapping__roleInterfaceID->setName("roleInterfaceID");
    m_InterfaceIDMapping__roleInterfaceID->setDefaultValueLiteral("");
    m_InterfaceIDMapping__roleInterfaceID->setLowerBound(1);
    m_InterfaceIDMapping__roleInterfaceID->setUpperBound(1);
    m_InterfaceIDMapping__roleInterfaceID->setTransient(false);
    m_InterfaceIDMapping__roleInterfaceID->setVolatile(false);
    m_InterfaceIDMapping__roleInterfaceID->setChangeable(true);
    m_InterfaceIDMapping__roleInterfaceID->setUnsettable(false);
    m_InterfaceIDMapping__roleInterfaceID->setID(false);
    m_InterfaceIDMapping__roleInterfaceID->setUnique(true);
    m_InterfaceIDMapping__roleInterfaceID->setDerived(false);
    m_InterfaceIDMapping__roleInterfaceID->setOrdered(true);
    m_InterfaceIDMapping__systemUnitInterfaceID->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_InterfaceIDMapping__systemUnitInterfaceID->setName(
            "systemUnitInterfaceID");
    m_InterfaceIDMapping__systemUnitInterfaceID->setDefaultValueLiteral("");
    m_InterfaceIDMapping__systemUnitInterfaceID->setLowerBound(1);
    m_InterfaceIDMapping__systemUnitInterfaceID->setUpperBound(1);
    m_InterfaceIDMapping__systemUnitInterfaceID->setTransient(false);
    m_InterfaceIDMapping__systemUnitInterfaceID->setVolatile(false);
    m_InterfaceIDMapping__systemUnitInterfaceID->setChangeable(true);
    m_InterfaceIDMapping__systemUnitInterfaceID->setUnsettable(false);
    m_InterfaceIDMapping__systemUnitInterfaceID->setID(false);
    m_InterfaceIDMapping__systemUnitInterfaceID->setUnique(true);
    m_InterfaceIDMapping__systemUnitInterfaceID->setDerived(false);
    m_InterfaceIDMapping__systemUnitInterfaceID->setOrdered(true);
    m_InterfaceIDMapping__roleInterface->setEType(m_ExternalInterfaceEClass);
    m_InterfaceIDMapping__roleInterface->setName("roleInterface");
    m_InterfaceIDMapping__roleInterface->setDefaultValueLiteral("");
    m_InterfaceIDMapping__roleInterface->setLowerBound(1);
    m_InterfaceIDMapping__roleInterface->setUpperBound(1);
    m_InterfaceIDMapping__roleInterface->setTransient(false);
    m_InterfaceIDMapping__roleInterface->setVolatile(false);
    m_InterfaceIDMapping__roleInterface->setChangeable(true);
    m_InterfaceIDMapping__roleInterface->setContainment(false);
    m_InterfaceIDMapping__roleInterface->setResolveProxies(true);
    m_InterfaceIDMapping__roleInterface->setUnique(true);
    m_InterfaceIDMapping__roleInterface->setDerived(false);
    m_InterfaceIDMapping__roleInterface->setOrdered(true);
    m_InterfaceIDMapping__systemUnitInterface->setEType(
            m_ExternalInterfaceEClass);
    m_InterfaceIDMapping__systemUnitInterface->setName("systemUnitInterface");
    m_InterfaceIDMapping__systemUnitInterface->setDefaultValueLiteral("");
    m_InterfaceIDMapping__systemUnitInterface->setLowerBound(1);
    m_InterfaceIDMapping__systemUnitInterface->setUpperBound(1);
    m_InterfaceIDMapping__systemUnitInterface->setTransient(false);
    m_InterfaceIDMapping__systemUnitInterface->setVolatile(false);
    m_InterfaceIDMapping__systemUnitInterface->setChangeable(true);
    m_InterfaceIDMapping__systemUnitInterface->setContainment(false);
    m_InterfaceIDMapping__systemUnitInterface->setResolveProxies(true);
    m_InterfaceIDMapping__systemUnitInterface->setUnique(true);
    m_InterfaceIDMapping__systemUnitInterface->setDerived(false);
    m_InterfaceIDMapping__systemUnitInterface->setOrdered(true);
    // InternalElement
    m_InternalElementEClass->setName("InternalElement");
    m_InternalElementEClass->setAbstract(false);
    m_InternalElementEClass->setInterface(false);
    m_InternalElement__refBaseSystemUnitPath->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_InternalElement__refBaseSystemUnitPath->setName("refBaseSystemUnitPath");
    m_InternalElement__refBaseSystemUnitPath->setDefaultValueLiteral("");
    m_InternalElement__refBaseSystemUnitPath->setLowerBound(0);
    m_InternalElement__refBaseSystemUnitPath->setUpperBound(1);
    m_InternalElement__refBaseSystemUnitPath->setTransient(false);
    m_InternalElement__refBaseSystemUnitPath->setVolatile(false);
    m_InternalElement__refBaseSystemUnitPath->setChangeable(true);
    m_InternalElement__refBaseSystemUnitPath->setUnsettable(false);
    m_InternalElement__refBaseSystemUnitPath->setID(false);
    m_InternalElement__refBaseSystemUnitPath->setUnique(true);
    m_InternalElement__refBaseSystemUnitPath->setDerived(false);
    m_InternalElement__refBaseSystemUnitPath->setOrdered(true);
    m_InternalElement__roleRequirements->setEType(m_RoleRequirementsEClass);
    m_InternalElement__roleRequirements->setName("roleRequirements");
    m_InternalElement__roleRequirements->setDefaultValueLiteral("");
    m_InternalElement__roleRequirements->setLowerBound(0);
    m_InternalElement__roleRequirements->setUpperBound(-1);
    m_InternalElement__roleRequirements->setTransient(false);
    m_InternalElement__roleRequirements->setVolatile(false);
    m_InternalElement__roleRequirements->setChangeable(true);
    m_InternalElement__roleRequirements->setContainment(true);
    m_InternalElement__roleRequirements->setResolveProxies(false);
    m_InternalElement__roleRequirements->setUnique(true);
    m_InternalElement__roleRequirements->setDerived(false);
    m_InternalElement__roleRequirements->setOrdered(true);
    m_InternalElement__baseSystemUnit->setEType(m_SystemUnitClassEClass);
    m_InternalElement__baseSystemUnit->setName("baseSystemUnit");
    m_InternalElement__baseSystemUnit->setDefaultValueLiteral("");
    m_InternalElement__baseSystemUnit->setLowerBound(0);
    m_InternalElement__baseSystemUnit->setUpperBound(1);
    m_InternalElement__baseSystemUnit->setTransient(false);
    m_InternalElement__baseSystemUnit->setVolatile(false);
    m_InternalElement__baseSystemUnit->setChangeable(true);
    m_InternalElement__baseSystemUnit->setContainment(false);
    m_InternalElement__baseSystemUnit->setResolveProxies(true);
    m_InternalElement__baseSystemUnit->setUnique(true);
    m_InternalElement__baseSystemUnit->setDerived(false);
    m_InternalElement__baseSystemUnit->setOrdered(true);
    // InternalLink
    m_InternalLinkEClass->setName("InternalLink");
    m_InternalLinkEClass->setAbstract(false);
    m_InternalLinkEClass->setInterface(false);
    m_InternalLink__refPartnerSideA->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_InternalLink__refPartnerSideA->setName("refPartnerSideA");
    m_InternalLink__refPartnerSideA->setDefaultValueLiteral("");
    m_InternalLink__refPartnerSideA->setLowerBound(1);
    m_InternalLink__refPartnerSideA->setUpperBound(1);
    m_InternalLink__refPartnerSideA->setTransient(false);
    m_InternalLink__refPartnerSideA->setVolatile(false);
    m_InternalLink__refPartnerSideA->setChangeable(true);
    m_InternalLink__refPartnerSideA->setUnsettable(false);
    m_InternalLink__refPartnerSideA->setID(false);
    m_InternalLink__refPartnerSideA->setUnique(true);
    m_InternalLink__refPartnerSideA->setDerived(false);
    m_InternalLink__refPartnerSideA->setOrdered(true);
    m_InternalLink__refPartnerSideB->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_InternalLink__refPartnerSideB->setName("refPartnerSideB");
    m_InternalLink__refPartnerSideB->setDefaultValueLiteral("");
    m_InternalLink__refPartnerSideB->setLowerBound(1);
    m_InternalLink__refPartnerSideB->setUpperBound(1);
    m_InternalLink__refPartnerSideB->setTransient(false);
    m_InternalLink__refPartnerSideB->setVolatile(false);
    m_InternalLink__refPartnerSideB->setChangeable(true);
    m_InternalLink__refPartnerSideB->setUnsettable(false);
    m_InternalLink__refPartnerSideB->setID(false);
    m_InternalLink__refPartnerSideB->setUnique(true);
    m_InternalLink__refPartnerSideB->setDerived(false);
    m_InternalLink__refPartnerSideB->setOrdered(true);
    m_InternalLink__partnerSideA->setEType(m_InterfaceClassEClass);
    m_InternalLink__partnerSideA->setName("partnerSideA");
    m_InternalLink__partnerSideA->setDefaultValueLiteral("");
    m_InternalLink__partnerSideA->setLowerBound(1);
    m_InternalLink__partnerSideA->setUpperBound(1);
    m_InternalLink__partnerSideA->setTransient(false);
    m_InternalLink__partnerSideA->setVolatile(false);
    m_InternalLink__partnerSideA->setChangeable(true);
    m_InternalLink__partnerSideA->setContainment(false);
    m_InternalLink__partnerSideA->setResolveProxies(true);
    m_InternalLink__partnerSideA->setUnique(true);
    m_InternalLink__partnerSideA->setDerived(false);
    m_InternalLink__partnerSideA->setOrdered(true);
    m_InternalLink__partnerSideB->setEType(m_InterfaceClassEClass);
    m_InternalLink__partnerSideB->setName("partnerSideB");
    m_InternalLink__partnerSideB->setDefaultValueLiteral("");
    m_InternalLink__partnerSideB->setLowerBound(1);
    m_InternalLink__partnerSideB->setUpperBound(1);
    m_InternalLink__partnerSideB->setTransient(false);
    m_InternalLink__partnerSideB->setVolatile(false);
    m_InternalLink__partnerSideB->setChangeable(true);
    m_InternalLink__partnerSideB->setContainment(false);
    m_InternalLink__partnerSideB->setResolveProxies(true);
    m_InternalLink__partnerSideB->setUnique(true);
    m_InternalLink__partnerSideB->setDerived(false);
    m_InternalLink__partnerSideB->setOrdered(true);
    // Mapping
    m_MappingEClass->setName("Mapping");
    m_MappingEClass->setAbstract(false);
    m_MappingEClass->setInterface(false);
    m_Mapping__attributeNameMapping->setEType(m_AttributeNameMappingEClass);
    m_Mapping__attributeNameMapping->setName("attributeNameMapping");
    m_Mapping__attributeNameMapping->setDefaultValueLiteral("");
    m_Mapping__attributeNameMapping->setLowerBound(0);
    m_Mapping__attributeNameMapping->setUpperBound(-1);
    m_Mapping__attributeNameMapping->setTransient(false);
    m_Mapping__attributeNameMapping->setVolatile(false);
    m_Mapping__attributeNameMapping->setChangeable(true);
    m_Mapping__attributeNameMapping->setContainment(true);
    m_Mapping__attributeNameMapping->setResolveProxies(false);
    m_Mapping__attributeNameMapping->setUnique(true);
    m_Mapping__attributeNameMapping->setDerived(false);
    m_Mapping__attributeNameMapping->setOrdered(true);
    m_Mapping__interfaceIDMapping->setEType(m_InterfaceIDMappingEClass);
    m_Mapping__interfaceIDMapping->setName("interfaceIDMapping");
    m_Mapping__interfaceIDMapping->setDefaultValueLiteral("");
    m_Mapping__interfaceIDMapping->setLowerBound(0);
    m_Mapping__interfaceIDMapping->setUpperBound(-1);
    m_Mapping__interfaceIDMapping->setTransient(false);
    m_Mapping__interfaceIDMapping->setVolatile(false);
    m_Mapping__interfaceIDMapping->setChangeable(true);
    m_Mapping__interfaceIDMapping->setContainment(true);
    m_Mapping__interfaceIDMapping->setResolveProxies(false);
    m_Mapping__interfaceIDMapping->setUnique(true);
    m_Mapping__interfaceIDMapping->setDerived(false);
    m_Mapping__interfaceIDMapping->setOrdered(true);
    // NominalScaled
    m_NominalScaledEClass->setName("NominalScaled");
    m_NominalScaledEClass->setAbstract(false);
    m_NominalScaledEClass->setInterface(false);
    m_NominalScaled__requiredValue->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_NominalScaled__requiredValue->setName("requiredValue");
    m_NominalScaled__requiredValue->setDefaultValueLiteral("");
    m_NominalScaled__requiredValue->setLowerBound(0);
    m_NominalScaled__requiredValue->setUpperBound(-1);
    m_NominalScaled__requiredValue->setTransient(false);
    m_NominalScaled__requiredValue->setVolatile(false);
    m_NominalScaled__requiredValue->setChangeable(true);
    m_NominalScaled__requiredValue->setUnsettable(false);
    m_NominalScaled__requiredValue->setID(false);
    m_NominalScaled__requiredValue->setUnique(false);
    m_NominalScaled__requiredValue->setDerived(false);
    m_NominalScaled__requiredValue->setOrdered(true);
    // OrdinalScaled
    m_OrdinalScaledEClass->setName("OrdinalScaled");
    m_OrdinalScaledEClass->setAbstract(false);
    m_OrdinalScaledEClass->setInterface(false);
    m_OrdinalScaled__requiredMaxValue->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_OrdinalScaled__requiredMaxValue->setName("requiredMaxValue");
    m_OrdinalScaled__requiredMaxValue->setDefaultValueLiteral("");
    m_OrdinalScaled__requiredMaxValue->setLowerBound(0);
    m_OrdinalScaled__requiredMaxValue->setUpperBound(1);
    m_OrdinalScaled__requiredMaxValue->setTransient(false);
    m_OrdinalScaled__requiredMaxValue->setVolatile(false);
    m_OrdinalScaled__requiredMaxValue->setChangeable(true);
    m_OrdinalScaled__requiredMaxValue->setUnsettable(false);
    m_OrdinalScaled__requiredMaxValue->setID(false);
    m_OrdinalScaled__requiredMaxValue->setUnique(true);
    m_OrdinalScaled__requiredMaxValue->setDerived(false);
    m_OrdinalScaled__requiredMaxValue->setOrdered(true);
    m_OrdinalScaled__requiredValue->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_OrdinalScaled__requiredValue->setName("requiredValue");
    m_OrdinalScaled__requiredValue->setDefaultValueLiteral("");
    m_OrdinalScaled__requiredValue->setLowerBound(0);
    m_OrdinalScaled__requiredValue->setUpperBound(1);
    m_OrdinalScaled__requiredValue->setTransient(false);
    m_OrdinalScaled__requiredValue->setVolatile(false);
    m_OrdinalScaled__requiredValue->setChangeable(true);
    m_OrdinalScaled__requiredValue->setUnsettable(false);
    m_OrdinalScaled__requiredValue->setID(false);
    m_OrdinalScaled__requiredValue->setUnique(true);
    m_OrdinalScaled__requiredValue->setDerived(false);
    m_OrdinalScaled__requiredValue->setOrdered(true);
    m_OrdinalScaled__requiredMinValue->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_OrdinalScaled__requiredMinValue->setName("requiredMinValue");
    m_OrdinalScaled__requiredMinValue->setDefaultValueLiteral("");
    m_OrdinalScaled__requiredMinValue->setLowerBound(0);
    m_OrdinalScaled__requiredMinValue->setUpperBound(1);
    m_OrdinalScaled__requiredMinValue->setTransient(false);
    m_OrdinalScaled__requiredMinValue->setVolatile(false);
    m_OrdinalScaled__requiredMinValue->setChangeable(true);
    m_OrdinalScaled__requiredMinValue->setUnsettable(false);
    m_OrdinalScaled__requiredMinValue->setID(false);
    m_OrdinalScaled__requiredMinValue->setUnique(true);
    m_OrdinalScaled__requiredMinValue->setDerived(false);
    m_OrdinalScaled__requiredMinValue->setOrdered(true);
    // RefSemantic
    m_RefSemanticEClass->setName("RefSemantic");
    m_RefSemanticEClass->setAbstract(false);
    m_RefSemanticEClass->setInterface(false);
    m_RefSemantic__correspondingAttributePath->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_RefSemantic__correspondingAttributePath->setName(
            "correspondingAttributePath");
    m_RefSemantic__correspondingAttributePath->setDefaultValueLiteral("");
    m_RefSemantic__correspondingAttributePath->setLowerBound(1);
    m_RefSemantic__correspondingAttributePath->setUpperBound(1);
    m_RefSemantic__correspondingAttributePath->setTransient(false);
    m_RefSemantic__correspondingAttributePath->setVolatile(false);
    m_RefSemantic__correspondingAttributePath->setChangeable(true);
    m_RefSemantic__correspondingAttributePath->setUnsettable(false);
    m_RefSemantic__correspondingAttributePath->setID(false);
    m_RefSemantic__correspondingAttributePath->setUnique(true);
    m_RefSemantic__correspondingAttributePath->setDerived(false);
    m_RefSemantic__correspondingAttributePath->setOrdered(true);
    // RoleClassLib
    m_RoleClassLibEClass->setName("RoleClassLib");
    m_RoleClassLibEClass->setAbstract(false);
    m_RoleClassLibEClass->setInterface(false);
    m_RoleClassLib__roleClass->setEType(m_RoleClassEClass);
    m_RoleClassLib__roleClass->setName("roleClass");
    m_RoleClassLib__roleClass->setDefaultValueLiteral("");
    m_RoleClassLib__roleClass->setLowerBound(0);
    m_RoleClassLib__roleClass->setUpperBound(-1);
    m_RoleClassLib__roleClass->setTransient(false);
    m_RoleClassLib__roleClass->setVolatile(false);
    m_RoleClassLib__roleClass->setChangeable(true);
    m_RoleClassLib__roleClass->setContainment(true);
    m_RoleClassLib__roleClass->setResolveProxies(false);
    m_RoleClassLib__roleClass->setUnique(true);
    m_RoleClassLib__roleClass->setDerived(false);
    m_RoleClassLib__roleClass->setOrdered(true);
    // RoleClass
    m_RoleClassEClass->setName("RoleClass");
    m_RoleClassEClass->setAbstract(false);
    m_RoleClassEClass->setInterface(false);
    m_RoleClass__refBaseClassPath->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_RoleClass__refBaseClassPath->setName("refBaseClassPath");
    m_RoleClass__refBaseClassPath->setDefaultValueLiteral("");
    m_RoleClass__refBaseClassPath->setLowerBound(0);
    m_RoleClass__refBaseClassPath->setUpperBound(1);
    m_RoleClass__refBaseClassPath->setTransient(false);
    m_RoleClass__refBaseClassPath->setVolatile(false);
    m_RoleClass__refBaseClassPath->setChangeable(true);
    m_RoleClass__refBaseClassPath->setUnsettable(false);
    m_RoleClass__refBaseClassPath->setID(false);
    m_RoleClass__refBaseClassPath->setUnique(true);
    m_RoleClass__refBaseClassPath->setDerived(false);
    m_RoleClass__refBaseClassPath->setOrdered(true);
    m_RoleClass__attribute->setEType(m_AttributeEClass);
    m_RoleClass__attribute->setName("attribute");
    m_RoleClass__attribute->setDefaultValueLiteral("");
    m_RoleClass__attribute->setLowerBound(0);
    m_RoleClass__attribute->setUpperBound(-1);
    m_RoleClass__attribute->setTransient(false);
    m_RoleClass__attribute->setVolatile(false);
    m_RoleClass__attribute->setChangeable(true);
    m_RoleClass__attribute->setContainment(true);
    m_RoleClass__attribute->setResolveProxies(false);
    m_RoleClass__attribute->setUnique(true);
    m_RoleClass__attribute->setDerived(false);
    m_RoleClass__attribute->setOrdered(true);
    m_RoleClass__externalInterface->setEType(m_ExternalInterfaceEClass);
    m_RoleClass__externalInterface->setName("externalInterface");
    m_RoleClass__externalInterface->setDefaultValueLiteral("");
    m_RoleClass__externalInterface->setLowerBound(0);
    m_RoleClass__externalInterface->setUpperBound(-1);
    m_RoleClass__externalInterface->setTransient(false);
    m_RoleClass__externalInterface->setVolatile(false);
    m_RoleClass__externalInterface->setChangeable(true);
    m_RoleClass__externalInterface->setContainment(true);
    m_RoleClass__externalInterface->setResolveProxies(false);
    m_RoleClass__externalInterface->setUnique(true);
    m_RoleClass__externalInterface->setDerived(false);
    m_RoleClass__externalInterface->setOrdered(true);
    m_RoleClass__baseClass->setEType(m_RoleClassEClass);
    m_RoleClass__baseClass->setName("baseClass");
    m_RoleClass__baseClass->setDefaultValueLiteral("");
    m_RoleClass__baseClass->setLowerBound(0);
    m_RoleClass__baseClass->setUpperBound(1);
    m_RoleClass__baseClass->setTransient(false);
    m_RoleClass__baseClass->setVolatile(false);
    m_RoleClass__baseClass->setChangeable(true);
    m_RoleClass__baseClass->setContainment(false);
    m_RoleClass__baseClass->setResolveProxies(true);
    m_RoleClass__baseClass->setUnique(true);
    m_RoleClass__baseClass->setDerived(false);
    m_RoleClass__baseClass->setOrdered(true);
    m_RoleClass__roleClass->setEType(m_RoleClassEClass);
    m_RoleClass__roleClass->setName("roleClass");
    m_RoleClass__roleClass->setDefaultValueLiteral("");
    m_RoleClass__roleClass->setLowerBound(0);
    m_RoleClass__roleClass->setUpperBound(-1);
    m_RoleClass__roleClass->setTransient(false);
    m_RoleClass__roleClass->setVolatile(false);
    m_RoleClass__roleClass->setChangeable(true);
    m_RoleClass__roleClass->setContainment(true);
    m_RoleClass__roleClass->setResolveProxies(false);
    m_RoleClass__roleClass->setUnique(true);
    m_RoleClass__roleClass->setDerived(false);
    m_RoleClass__roleClass->setOrdered(true);
    // RoleFamily
    m_RoleFamilyEClass->setName("RoleFamily");
    m_RoleFamilyEClass->setAbstract(false);
    m_RoleFamilyEClass->setInterface(false);
    // RoleRequirements
    m_RoleRequirementsEClass->setName("RoleRequirements");
    m_RoleRequirementsEClass->setAbstract(false);
    m_RoleRequirementsEClass->setInterface(false);
    m_RoleRequirements__refBaseRoleClassPath->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_RoleRequirements__refBaseRoleClassPath->setName("refBaseRoleClassPath");
    m_RoleRequirements__refBaseRoleClassPath->setDefaultValueLiteral("");
    m_RoleRequirements__refBaseRoleClassPath->setLowerBound(1);
    m_RoleRequirements__refBaseRoleClassPath->setUpperBound(1);
    m_RoleRequirements__refBaseRoleClassPath->setTransient(false);
    m_RoleRequirements__refBaseRoleClassPath->setVolatile(false);
    m_RoleRequirements__refBaseRoleClassPath->setChangeable(true);
    m_RoleRequirements__refBaseRoleClassPath->setUnsettable(false);
    m_RoleRequirements__refBaseRoleClassPath->setID(false);
    m_RoleRequirements__refBaseRoleClassPath->setUnique(true);
    m_RoleRequirements__refBaseRoleClassPath->setDerived(false);
    m_RoleRequirements__refBaseRoleClassPath->setOrdered(true);
    m_RoleRequirements__attribute->setEType(m_AttributeEClass);
    m_RoleRequirements__attribute->setName("attribute");
    m_RoleRequirements__attribute->setDefaultValueLiteral("");
    m_RoleRequirements__attribute->setLowerBound(0);
    m_RoleRequirements__attribute->setUpperBound(-1);
    m_RoleRequirements__attribute->setTransient(false);
    m_RoleRequirements__attribute->setVolatile(false);
    m_RoleRequirements__attribute->setChangeable(true);
    m_RoleRequirements__attribute->setContainment(true);
    m_RoleRequirements__attribute->setResolveProxies(false);
    m_RoleRequirements__attribute->setUnique(true);
    m_RoleRequirements__attribute->setDerived(false);
    m_RoleRequirements__attribute->setOrdered(true);
    m_RoleRequirements__externalInterface->setEType(m_InterfaceClassEClass);
    m_RoleRequirements__externalInterface->setName("externalInterface");
    m_RoleRequirements__externalInterface->setDefaultValueLiteral("");
    m_RoleRequirements__externalInterface->setLowerBound(0);
    m_RoleRequirements__externalInterface->setUpperBound(-1);
    m_RoleRequirements__externalInterface->setTransient(false);
    m_RoleRequirements__externalInterface->setVolatile(false);
    m_RoleRequirements__externalInterface->setChangeable(true);
    m_RoleRequirements__externalInterface->setContainment(true);
    m_RoleRequirements__externalInterface->setResolveProxies(false);
    m_RoleRequirements__externalInterface->setUnique(true);
    m_RoleRequirements__externalInterface->setDerived(false);
    m_RoleRequirements__externalInterface->setOrdered(true);
    m_RoleRequirements__mappingObject->setEType(m_MappingEClass);
    m_RoleRequirements__mappingObject->setName("mappingObject");
    m_RoleRequirements__mappingObject->setDefaultValueLiteral("");
    m_RoleRequirements__mappingObject->setLowerBound(0);
    m_RoleRequirements__mappingObject->setUpperBound(1);
    m_RoleRequirements__mappingObject->setTransient(false);
    m_RoleRequirements__mappingObject->setVolatile(false);
    m_RoleRequirements__mappingObject->setChangeable(true);
    m_RoleRequirements__mappingObject->setContainment(true);
    m_RoleRequirements__mappingObject->setResolveProxies(false);
    m_RoleRequirements__mappingObject->setUnique(true);
    m_RoleRequirements__mappingObject->setDerived(false);
    m_RoleRequirements__mappingObject->setOrdered(true);
    m_RoleRequirements__roleClass->setEType(m_RoleClassEClass);
    m_RoleRequirements__roleClass->setName("roleClass");
    m_RoleRequirements__roleClass->setDefaultValueLiteral("");
    m_RoleRequirements__roleClass->setLowerBound(1);
    m_RoleRequirements__roleClass->setUpperBound(1);
    m_RoleRequirements__roleClass->setTransient(false);
    m_RoleRequirements__roleClass->setVolatile(false);
    m_RoleRequirements__roleClass->setChangeable(true);
    m_RoleRequirements__roleClass->setContainment(false);
    m_RoleRequirements__roleClass->setResolveProxies(true);
    m_RoleRequirements__roleClass->setUnique(true);
    m_RoleRequirements__roleClass->setDerived(false);
    m_RoleRequirements__roleClass->setOrdered(true);
    // SourceDocumentInformation
    m_SourceDocumentInformationEClass->setName("SourceDocumentInformation");
    m_SourceDocumentInformationEClass->setAbstract(false);
    m_SourceDocumentInformationEClass->setInterface(false);
    m_SourceDocumentInformation__lastWritingDateTime->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getDateTime());
    m_SourceDocumentInformation__lastWritingDateTime->setName(
            "lastWritingDateTime");
    m_SourceDocumentInformation__lastWritingDateTime->setDefaultValueLiteral(
            "");
    m_SourceDocumentInformation__lastWritingDateTime->setLowerBound(1);
    m_SourceDocumentInformation__lastWritingDateTime->setUpperBound(1);
    m_SourceDocumentInformation__lastWritingDateTime->setTransient(false);
    m_SourceDocumentInformation__lastWritingDateTime->setVolatile(false);
    m_SourceDocumentInformation__lastWritingDateTime->setChangeable(true);
    m_SourceDocumentInformation__lastWritingDateTime->setUnsettable(false);
    m_SourceDocumentInformation__lastWritingDateTime->setID(false);
    m_SourceDocumentInformation__lastWritingDateTime->setUnique(true);
    m_SourceDocumentInformation__lastWritingDateTime->setDerived(false);
    m_SourceDocumentInformation__lastWritingDateTime->setOrdered(true);
    m_SourceDocumentInformation__originID->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_SourceDocumentInformation__originID->setName("originID");
    m_SourceDocumentInformation__originID->setDefaultValueLiteral("");
    m_SourceDocumentInformation__originID->setLowerBound(1);
    m_SourceDocumentInformation__originID->setUpperBound(1);
    m_SourceDocumentInformation__originID->setTransient(false);
    m_SourceDocumentInformation__originID->setVolatile(false);
    m_SourceDocumentInformation__originID->setChangeable(true);
    m_SourceDocumentInformation__originID->setUnsettable(false);
    m_SourceDocumentInformation__originID->setID(false);
    m_SourceDocumentInformation__originID->setUnique(true);
    m_SourceDocumentInformation__originID->setDerived(false);
    m_SourceDocumentInformation__originID->setOrdered(true);
    m_SourceDocumentInformation__originName->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_SourceDocumentInformation__originName->setName("originName");
    m_SourceDocumentInformation__originName->setDefaultValueLiteral("");
    m_SourceDocumentInformation__originName->setLowerBound(1);
    m_SourceDocumentInformation__originName->setUpperBound(1);
    m_SourceDocumentInformation__originName->setTransient(false);
    m_SourceDocumentInformation__originName->setVolatile(false);
    m_SourceDocumentInformation__originName->setChangeable(true);
    m_SourceDocumentInformation__originName->setUnsettable(false);
    m_SourceDocumentInformation__originName->setID(false);
    m_SourceDocumentInformation__originName->setUnique(true);
    m_SourceDocumentInformation__originName->setDerived(false);
    m_SourceDocumentInformation__originName->setOrdered(true);
    m_SourceDocumentInformation__originProjectID->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_SourceDocumentInformation__originProjectID->setName("originProjectID");
    m_SourceDocumentInformation__originProjectID->setDefaultValueLiteral("");
    m_SourceDocumentInformation__originProjectID->setLowerBound(0);
    m_SourceDocumentInformation__originProjectID->setUpperBound(1);
    m_SourceDocumentInformation__originProjectID->setTransient(false);
    m_SourceDocumentInformation__originProjectID->setVolatile(false);
    m_SourceDocumentInformation__originProjectID->setChangeable(true);
    m_SourceDocumentInformation__originProjectID->setUnsettable(false);
    m_SourceDocumentInformation__originProjectID->setID(false);
    m_SourceDocumentInformation__originProjectID->setUnique(true);
    m_SourceDocumentInformation__originProjectID->setDerived(false);
    m_SourceDocumentInformation__originProjectID->setOrdered(true);
    m_SourceDocumentInformation__originProjectTitle->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_SourceDocumentInformation__originProjectTitle->setName(
            "originProjectTitle");
    m_SourceDocumentInformation__originProjectTitle->setDefaultValueLiteral("");
    m_SourceDocumentInformation__originProjectTitle->setLowerBound(0);
    m_SourceDocumentInformation__originProjectTitle->setUpperBound(1);
    m_SourceDocumentInformation__originProjectTitle->setTransient(false);
    m_SourceDocumentInformation__originProjectTitle->setVolatile(false);
    m_SourceDocumentInformation__originProjectTitle->setChangeable(true);
    m_SourceDocumentInformation__originProjectTitle->setUnsettable(false);
    m_SourceDocumentInformation__originProjectTitle->setID(false);
    m_SourceDocumentInformation__originProjectTitle->setUnique(true);
    m_SourceDocumentInformation__originProjectTitle->setDerived(false);
    m_SourceDocumentInformation__originProjectTitle->setOrdered(true);
    m_SourceDocumentInformation__originRelease->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_SourceDocumentInformation__originRelease->setName("originRelease");
    m_SourceDocumentInformation__originRelease->setDefaultValueLiteral("");
    m_SourceDocumentInformation__originRelease->setLowerBound(0);
    m_SourceDocumentInformation__originRelease->setUpperBound(1);
    m_SourceDocumentInformation__originRelease->setTransient(false);
    m_SourceDocumentInformation__originRelease->setVolatile(false);
    m_SourceDocumentInformation__originRelease->setChangeable(true);
    m_SourceDocumentInformation__originRelease->setUnsettable(false);
    m_SourceDocumentInformation__originRelease->setID(false);
    m_SourceDocumentInformation__originRelease->setUnique(true);
    m_SourceDocumentInformation__originRelease->setDerived(false);
    m_SourceDocumentInformation__originRelease->setOrdered(true);
    m_SourceDocumentInformation__originVendor->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_SourceDocumentInformation__originVendor->setName("originVendor");
    m_SourceDocumentInformation__originVendor->setDefaultValueLiteral("");
    m_SourceDocumentInformation__originVendor->setLowerBound(0);
    m_SourceDocumentInformation__originVendor->setUpperBound(1);
    m_SourceDocumentInformation__originVendor->setTransient(false);
    m_SourceDocumentInformation__originVendor->setVolatile(false);
    m_SourceDocumentInformation__originVendor->setChangeable(true);
    m_SourceDocumentInformation__originVendor->setUnsettable(false);
    m_SourceDocumentInformation__originVendor->setID(false);
    m_SourceDocumentInformation__originVendor->setUnique(true);
    m_SourceDocumentInformation__originVendor->setDerived(false);
    m_SourceDocumentInformation__originVendor->setOrdered(true);
    m_SourceDocumentInformation__originVendorURL->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_SourceDocumentInformation__originVendorURL->setName("originVendorURL");
    m_SourceDocumentInformation__originVendorURL->setDefaultValueLiteral("");
    m_SourceDocumentInformation__originVendorURL->setLowerBound(0);
    m_SourceDocumentInformation__originVendorURL->setUpperBound(1);
    m_SourceDocumentInformation__originVendorURL->setTransient(false);
    m_SourceDocumentInformation__originVendorURL->setVolatile(false);
    m_SourceDocumentInformation__originVendorURL->setChangeable(true);
    m_SourceDocumentInformation__originVendorURL->setUnsettable(false);
    m_SourceDocumentInformation__originVendorURL->setID(false);
    m_SourceDocumentInformation__originVendorURL->setUnique(true);
    m_SourceDocumentInformation__originVendorURL->setDerived(false);
    m_SourceDocumentInformation__originVendorURL->setOrdered(true);
    m_SourceDocumentInformation__originVersion->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_SourceDocumentInformation__originVersion->setName("originVersion");
    m_SourceDocumentInformation__originVersion->setDefaultValueLiteral("");
    m_SourceDocumentInformation__originVersion->setLowerBound(1);
    m_SourceDocumentInformation__originVersion->setUpperBound(1);
    m_SourceDocumentInformation__originVersion->setTransient(false);
    m_SourceDocumentInformation__originVersion->setVolatile(false);
    m_SourceDocumentInformation__originVersion->setChangeable(true);
    m_SourceDocumentInformation__originVersion->setUnsettable(false);
    m_SourceDocumentInformation__originVersion->setID(false);
    m_SourceDocumentInformation__originVersion->setUnique(true);
    m_SourceDocumentInformation__originVersion->setDerived(false);
    m_SourceDocumentInformation__originVersion->setOrdered(true);
    // SupportedRoleClass
    m_SupportedRoleClassEClass->setName("SupportedRoleClass");
    m_SupportedRoleClassEClass->setAbstract(false);
    m_SupportedRoleClassEClass->setInterface(false);
    m_SupportedRoleClass__refRoleClassPath->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_SupportedRoleClass__refRoleClassPath->setName("refRoleClassPath");
    m_SupportedRoleClass__refRoleClassPath->setDefaultValueLiteral("");
    m_SupportedRoleClass__refRoleClassPath->setLowerBound(1);
    m_SupportedRoleClass__refRoleClassPath->setUpperBound(1);
    m_SupportedRoleClass__refRoleClassPath->setTransient(false);
    m_SupportedRoleClass__refRoleClassPath->setVolatile(false);
    m_SupportedRoleClass__refRoleClassPath->setChangeable(true);
    m_SupportedRoleClass__refRoleClassPath->setUnsettable(false);
    m_SupportedRoleClass__refRoleClassPath->setID(false);
    m_SupportedRoleClass__refRoleClassPath->setUnique(true);
    m_SupportedRoleClass__refRoleClassPath->setDerived(false);
    m_SupportedRoleClass__refRoleClassPath->setOrdered(true);
    m_SupportedRoleClass__mappingObject->setEType(m_MappingEClass);
    m_SupportedRoleClass__mappingObject->setName("mappingObject");
    m_SupportedRoleClass__mappingObject->setDefaultValueLiteral("");
    m_SupportedRoleClass__mappingObject->setLowerBound(0);
    m_SupportedRoleClass__mappingObject->setUpperBound(1);
    m_SupportedRoleClass__mappingObject->setTransient(false);
    m_SupportedRoleClass__mappingObject->setVolatile(false);
    m_SupportedRoleClass__mappingObject->setChangeable(true);
    m_SupportedRoleClass__mappingObject->setContainment(true);
    m_SupportedRoleClass__mappingObject->setResolveProxies(false);
    m_SupportedRoleClass__mappingObject->setUnique(true);
    m_SupportedRoleClass__mappingObject->setDerived(false);
    m_SupportedRoleClass__mappingObject->setOrdered(true);
    m_SupportedRoleClass__roleClass->setEType(m_RoleClassEClass);
    m_SupportedRoleClass__roleClass->setName("roleClass");
    m_SupportedRoleClass__roleClass->setDefaultValueLiteral("");
    m_SupportedRoleClass__roleClass->setLowerBound(1);
    m_SupportedRoleClass__roleClass->setUpperBound(1);
    m_SupportedRoleClass__roleClass->setTransient(false);
    m_SupportedRoleClass__roleClass->setVolatile(false);
    m_SupportedRoleClass__roleClass->setChangeable(true);
    m_SupportedRoleClass__roleClass->setContainment(false);
    m_SupportedRoleClass__roleClass->setResolveProxies(true);
    m_SupportedRoleClass__roleClass->setUnique(true);
    m_SupportedRoleClass__roleClass->setDerived(false);
    m_SupportedRoleClass__roleClass->setOrdered(true);
    // SystemUnitClassLib
    m_SystemUnitClassLibEClass->setName("SystemUnitClassLib");
    m_SystemUnitClassLibEClass->setAbstract(false);
    m_SystemUnitClassLibEClass->setInterface(false);
    m_SystemUnitClassLib__systemUnitClass->setEType(m_SystemUnitClassEClass);
    m_SystemUnitClassLib__systemUnitClass->setName("systemUnitClass");
    m_SystemUnitClassLib__systemUnitClass->setDefaultValueLiteral("");
    m_SystemUnitClassLib__systemUnitClass->setLowerBound(0);
    m_SystemUnitClassLib__systemUnitClass->setUpperBound(-1);
    m_SystemUnitClassLib__systemUnitClass->setTransient(false);
    m_SystemUnitClassLib__systemUnitClass->setVolatile(false);
    m_SystemUnitClassLib__systemUnitClass->setChangeable(true);
    m_SystemUnitClassLib__systemUnitClass->setContainment(true);
    m_SystemUnitClassLib__systemUnitClass->setResolveProxies(false);
    m_SystemUnitClassLib__systemUnitClass->setUnique(true);
    m_SystemUnitClassLib__systemUnitClass->setDerived(false);
    m_SystemUnitClassLib__systemUnitClass->setOrdered(true);
    // SystemUnitClass
    m_SystemUnitClassEClass->setName("SystemUnitClass");
    m_SystemUnitClassEClass->setAbstract(false);
    m_SystemUnitClassEClass->setInterface(false);
    m_SystemUnitClass__refBaseClassPath->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_SystemUnitClass__refBaseClassPath->setName("refBaseClassPath");
    m_SystemUnitClass__refBaseClassPath->setDefaultValueLiteral("");
    m_SystemUnitClass__refBaseClassPath->setLowerBound(0);
    m_SystemUnitClass__refBaseClassPath->setUpperBound(1);
    m_SystemUnitClass__refBaseClassPath->setTransient(false);
    m_SystemUnitClass__refBaseClassPath->setVolatile(false);
    m_SystemUnitClass__refBaseClassPath->setChangeable(true);
    m_SystemUnitClass__refBaseClassPath->setUnsettable(false);
    m_SystemUnitClass__refBaseClassPath->setID(false);
    m_SystemUnitClass__refBaseClassPath->setUnique(true);
    m_SystemUnitClass__refBaseClassPath->setDerived(false);
    m_SystemUnitClass__refBaseClassPath->setOrdered(true);
    m_SystemUnitClass__attribute->setEType(m_AttributeEClass);
    m_SystemUnitClass__attribute->setName("attribute");
    m_SystemUnitClass__attribute->setDefaultValueLiteral("");
    m_SystemUnitClass__attribute->setLowerBound(0);
    m_SystemUnitClass__attribute->setUpperBound(-1);
    m_SystemUnitClass__attribute->setTransient(false);
    m_SystemUnitClass__attribute->setVolatile(false);
    m_SystemUnitClass__attribute->setChangeable(true);
    m_SystemUnitClass__attribute->setContainment(true);
    m_SystemUnitClass__attribute->setResolveProxies(false);
    m_SystemUnitClass__attribute->setUnique(true);
    m_SystemUnitClass__attribute->setDerived(false);
    m_SystemUnitClass__attribute->setOrdered(true);
    m_SystemUnitClass__externalInterface->setEType(m_InterfaceClassEClass);
    m_SystemUnitClass__externalInterface->setName("externalInterface");
    m_SystemUnitClass__externalInterface->setDefaultValueLiteral("");
    m_SystemUnitClass__externalInterface->setLowerBound(0);
    m_SystemUnitClass__externalInterface->setUpperBound(-1);
    m_SystemUnitClass__externalInterface->setTransient(false);
    m_SystemUnitClass__externalInterface->setVolatile(false);
    m_SystemUnitClass__externalInterface->setChangeable(true);
    m_SystemUnitClass__externalInterface->setContainment(true);
    m_SystemUnitClass__externalInterface->setResolveProxies(false);
    m_SystemUnitClass__externalInterface->setUnique(true);
    m_SystemUnitClass__externalInterface->setDerived(false);
    m_SystemUnitClass__externalInterface->setOrdered(true);
    m_SystemUnitClass__internalElement->setEType(m_InternalElementEClass);
    m_SystemUnitClass__internalElement->setName("internalElement");
    m_SystemUnitClass__internalElement->setDefaultValueLiteral("");
    m_SystemUnitClass__internalElement->setLowerBound(0);
    m_SystemUnitClass__internalElement->setUpperBound(-1);
    m_SystemUnitClass__internalElement->setTransient(false);
    m_SystemUnitClass__internalElement->setVolatile(false);
    m_SystemUnitClass__internalElement->setChangeable(true);
    m_SystemUnitClass__internalElement->setContainment(true);
    m_SystemUnitClass__internalElement->setResolveProxies(false);
    m_SystemUnitClass__internalElement->setUnique(true);
    m_SystemUnitClass__internalElement->setDerived(false);
    m_SystemUnitClass__internalElement->setOrdered(true);
    m_SystemUnitClass__supportedRoleClass->setEType(m_SupportedRoleClassEClass);
    m_SystemUnitClass__supportedRoleClass->setName("supportedRoleClass");
    m_SystemUnitClass__supportedRoleClass->setDefaultValueLiteral("");
    m_SystemUnitClass__supportedRoleClass->setLowerBound(0);
    m_SystemUnitClass__supportedRoleClass->setUpperBound(-1);
    m_SystemUnitClass__supportedRoleClass->setTransient(false);
    m_SystemUnitClass__supportedRoleClass->setVolatile(false);
    m_SystemUnitClass__supportedRoleClass->setChangeable(true);
    m_SystemUnitClass__supportedRoleClass->setContainment(true);
    m_SystemUnitClass__supportedRoleClass->setResolveProxies(false);
    m_SystemUnitClass__supportedRoleClass->setUnique(true);
    m_SystemUnitClass__supportedRoleClass->setDerived(false);
    m_SystemUnitClass__supportedRoleClass->setOrdered(true);
    m_SystemUnitClass__internalLink->setEType(m_InternalLinkEClass);
    m_SystemUnitClass__internalLink->setName("internalLink");
    m_SystemUnitClass__internalLink->setDefaultValueLiteral("");
    m_SystemUnitClass__internalLink->setLowerBound(0);
    m_SystemUnitClass__internalLink->setUpperBound(-1);
    m_SystemUnitClass__internalLink->setTransient(false);
    m_SystemUnitClass__internalLink->setVolatile(false);
    m_SystemUnitClass__internalLink->setChangeable(true);
    m_SystemUnitClass__internalLink->setContainment(true);
    m_SystemUnitClass__internalLink->setResolveProxies(false);
    m_SystemUnitClass__internalLink->setUnique(true);
    m_SystemUnitClass__internalLink->setDerived(false);
    m_SystemUnitClass__internalLink->setOrdered(true);
    m_SystemUnitClass__baseClass->setEType(m_SystemUnitClassEClass);
    m_SystemUnitClass__baseClass->setName("baseClass");
    m_SystemUnitClass__baseClass->setDefaultValueLiteral("");
    m_SystemUnitClass__baseClass->setLowerBound(0);
    m_SystemUnitClass__baseClass->setUpperBound(1);
    m_SystemUnitClass__baseClass->setTransient(false);
    m_SystemUnitClass__baseClass->setVolatile(false);
    m_SystemUnitClass__baseClass->setChangeable(true);
    m_SystemUnitClass__baseClass->setContainment(false);
    m_SystemUnitClass__baseClass->setResolveProxies(true);
    m_SystemUnitClass__baseClass->setUnique(true);
    m_SystemUnitClass__baseClass->setDerived(false);
    m_SystemUnitClass__baseClass->setOrdered(true);
    m_SystemUnitClass__systemUnitClass->setEType(m_SystemUnitClassEClass);
    m_SystemUnitClass__systemUnitClass->setName("systemUnitClass");
    m_SystemUnitClass__systemUnitClass->setDefaultValueLiteral("");
    m_SystemUnitClass__systemUnitClass->setLowerBound(0);
    m_SystemUnitClass__systemUnitClass->setUpperBound(-1);
    m_SystemUnitClass__systemUnitClass->setTransient(false);
    m_SystemUnitClass__systemUnitClass->setVolatile(false);
    m_SystemUnitClass__systemUnitClass->setChangeable(true);
    m_SystemUnitClass__systemUnitClass->setContainment(true);
    m_SystemUnitClass__systemUnitClass->setResolveProxies(false);
    m_SystemUnitClass__systemUnitClass->setUnique(true);
    m_SystemUnitClass__systemUnitClass->setDerived(false);
    m_SystemUnitClass__systemUnitClass->setOrdered(true);
    // SystemUnitFamily
    m_SystemUnitFamilyEClass->setName("SystemUnitFamily");
    m_SystemUnitFamilyEClass->setAbstract(false);
    m_SystemUnitFamilyEClass->setInterface(false);
    // UnknownType
    m_UnknownTypeEClass->setName("UnknownType");
    m_UnknownTypeEClass->setAbstract(false);
    m_UnknownTypeEClass->setInterface(false);
    m_UnknownType__requirements->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_UnknownType__requirements->setName("requirements");
    m_UnknownType__requirements->setDefaultValueLiteral("");
    m_UnknownType__requirements->setLowerBound(0);
    m_UnknownType__requirements->setUpperBound(1);
    m_UnknownType__requirements->setTransient(false);
    m_UnknownType__requirements->setVolatile(false);
    m_UnknownType__requirements->setChangeable(true);
    m_UnknownType__requirements->setUnsettable(false);
    m_UnknownType__requirements->setID(false);
    m_UnknownType__requirements->setUnique(true);
    m_UnknownType__requirements->setDerived(false);
    m_UnknownType__requirements->setOrdered(true);
    // Copyright
    m_CopyrightEClass->setName("Copyright");
    m_CopyrightEClass->setAbstract(false);
    m_CopyrightEClass->setInterface(false);
    m_Copyright__value->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_Copyright__value->setName("value");
    m_Copyright__value->setDefaultValueLiteral("");
    m_Copyright__value->setLowerBound(0);
    m_Copyright__value->setUpperBound(1);
    m_Copyright__value->setTransient(false);
    m_Copyright__value->setVolatile(false);
    m_Copyright__value->setChangeable(true);
    m_Copyright__value->setUnsettable(false);
    m_Copyright__value->setID(false);
    m_Copyright__value->setUnique(true);
    m_Copyright__value->setDerived(false);
    m_Copyright__value->setOrdered(true);
    m_Copyright__changeMode->setEType(m_ChangeModeEEnum);
    m_Copyright__changeMode->setName("changeMode");
    m_Copyright__changeMode->setDefaultValueLiteral("");
    m_Copyright__changeMode->setLowerBound(0);
    m_Copyright__changeMode->setUpperBound(1);
    m_Copyright__changeMode->setTransient(false);
    m_Copyright__changeMode->setVolatile(false);
    m_Copyright__changeMode->setChangeable(true);
    m_Copyright__changeMode->setUnsettable(false);
    m_Copyright__changeMode->setID(false);
    m_Copyright__changeMode->setUnique(true);
    m_Copyright__changeMode->setDerived(false);
    m_Copyright__changeMode->setOrdered(true);
    // Description
    m_DescriptionEClass->setName("Description");
    m_DescriptionEClass->setAbstract(false);
    m_DescriptionEClass->setInterface(false);
    m_Description__value->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_Description__value->setName("value");
    m_Description__value->setDefaultValueLiteral("");
    m_Description__value->setLowerBound(0);
    m_Description__value->setUpperBound(1);
    m_Description__value->setTransient(false);
    m_Description__value->setVolatile(false);
    m_Description__value->setChangeable(true);
    m_Description__value->setUnsettable(false);
    m_Description__value->setID(false);
    m_Description__value->setUnique(true);
    m_Description__value->setDerived(false);
    m_Description__value->setOrdered(true);
    m_Description__changeMode->setEType(m_ChangeModeEEnum);
    m_Description__changeMode->setName("changeMode");
    m_Description__changeMode->setDefaultValueLiteral("");
    m_Description__changeMode->setLowerBound(0);
    m_Description__changeMode->setUpperBound(1);
    m_Description__changeMode->setTransient(false);
    m_Description__changeMode->setVolatile(false);
    m_Description__changeMode->setChangeable(true);
    m_Description__changeMode->setUnsettable(false);
    m_Description__changeMode->setID(false);
    m_Description__changeMode->setUnique(true);
    m_Description__changeMode->setDerived(false);
    m_Description__changeMode->setOrdered(true);
    // Revision
    m_RevisionEClass->setName("Revision");
    m_RevisionEClass->setAbstract(false);
    m_RevisionEClass->setInterface(false);
    m_Revision__revisionDate->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getDateTime());
    m_Revision__revisionDate->setName("revisionDate");
    m_Revision__revisionDate->setDefaultValueLiteral("");
    m_Revision__revisionDate->setLowerBound(1);
    m_Revision__revisionDate->setUpperBound(1);
    m_Revision__revisionDate->setTransient(false);
    m_Revision__revisionDate->setVolatile(false);
    m_Revision__revisionDate->setChangeable(true);
    m_Revision__revisionDate->setUnsettable(false);
    m_Revision__revisionDate->setID(false);
    m_Revision__revisionDate->setUnique(true);
    m_Revision__revisionDate->setDerived(false);
    m_Revision__revisionDate->setOrdered(true);
    m_Revision__oldVersion->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_Revision__oldVersion->setName("oldVersion");
    m_Revision__oldVersion->setDefaultValueLiteral("");
    m_Revision__oldVersion->setLowerBound(0);
    m_Revision__oldVersion->setUpperBound(1);
    m_Revision__oldVersion->setTransient(false);
    m_Revision__oldVersion->setVolatile(false);
    m_Revision__oldVersion->setChangeable(true);
    m_Revision__oldVersion->setUnsettable(false);
    m_Revision__oldVersion->setID(false);
    m_Revision__oldVersion->setUnique(true);
    m_Revision__oldVersion->setDerived(false);
    m_Revision__oldVersion->setOrdered(true);
    m_Revision__newVersion->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_Revision__newVersion->setName("newVersion");
    m_Revision__newVersion->setDefaultValueLiteral("");
    m_Revision__newVersion->setLowerBound(0);
    m_Revision__newVersion->setUpperBound(1);
    m_Revision__newVersion->setTransient(false);
    m_Revision__newVersion->setVolatile(false);
    m_Revision__newVersion->setChangeable(true);
    m_Revision__newVersion->setUnsettable(false);
    m_Revision__newVersion->setID(false);
    m_Revision__newVersion->setUnique(true);
    m_Revision__newVersion->setDerived(false);
    m_Revision__newVersion->setOrdered(true);
    m_Revision__authorName->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_Revision__authorName->setName("authorName");
    m_Revision__authorName->setDefaultValueLiteral("");
    m_Revision__authorName->setLowerBound(1);
    m_Revision__authorName->setUpperBound(1);
    m_Revision__authorName->setTransient(false);
    m_Revision__authorName->setVolatile(false);
    m_Revision__authorName->setChangeable(true);
    m_Revision__authorName->setUnsettable(false);
    m_Revision__authorName->setID(false);
    m_Revision__authorName->setUnique(true);
    m_Revision__authorName->setDerived(false);
    m_Revision__authorName->setOrdered(true);
    m_Revision__comment->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_Revision__comment->setName("comment");
    m_Revision__comment->setDefaultValueLiteral("");
    m_Revision__comment->setLowerBound(0);
    m_Revision__comment->setUpperBound(1);
    m_Revision__comment->setTransient(false);
    m_Revision__comment->setVolatile(false);
    m_Revision__comment->setChangeable(true);
    m_Revision__comment->setUnsettable(false);
    m_Revision__comment->setID(false);
    m_Revision__comment->setUnique(true);
    m_Revision__comment->setDerived(false);
    m_Revision__comment->setOrdered(true);
    // Version
    m_VersionEClass->setName("Version");
    m_VersionEClass->setAbstract(false);
    m_VersionEClass->setInterface(false);
    m_Version__value->setEType(
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance())->getString());
    m_Version__value->setName("value");
    m_Version__value->setDefaultValueLiteral("");
    m_Version__value->setLowerBound(0);
    m_Version__value->setUpperBound(1);
    m_Version__value->setTransient(false);
    m_Version__value->setVolatile(false);
    m_Version__value->setChangeable(true);
    m_Version__value->setUnsettable(false);
    m_Version__value->setID(false);
    m_Version__value->setUnique(true);
    m_Version__value->setDerived(false);
    m_Version__value->setOrdered(true);
    m_Version__changeMode->setEType(m_ChangeModeEEnum);
    m_Version__changeMode->setName("changeMode");
    m_Version__changeMode->setDefaultValueLiteral("");
    m_Version__changeMode->setLowerBound(0);
    m_Version__changeMode->setUpperBound(1);
    m_Version__changeMode->setTransient(false);
    m_Version__changeMode->setVolatile(false);
    m_Version__changeMode->setChangeable(true);
    m_Version__changeMode->setUnsettable(false);
    m_Version__changeMode->setID(false);
    m_Version__changeMode->setUnique(true);
    m_Version__changeMode->setDerived(false);
    m_Version__changeMode->setOrdered(true);
    // AdditionalInformation
    m_AdditionalInformationEClass->setName("AdditionalInformation");
    m_AdditionalInformationEClass->setAbstract(false);
    m_AdditionalInformationEClass->setInterface(false);

    // TODO: Initialize data types

    // AttributeDataType
    m_AttributeDataTypeEDataType->setName("AttributeDataType");
    m_AttributeDataTypeEDataType->setSerializable(true);

    // ChangeModeObject
    m_ChangeModeObjectEDataType->setName("ChangeModeObject");
    m_ChangeModeObjectEDataType->setSerializable(true);

    // ChangeMode
    m_ChangeModeEEnum->setName("ChangeMode");
    m_ChangeModeEEnum->setSerializable(true);

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // state
        _el->setName("state");
        _el->setValue(0);
        _el->setLiteral("state");
        _el->setEEnum(m_ChangeModeEEnum);
        m_ChangeModeEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // create
        _el->setName("create");
        _el->setValue(1);
        _el->setLiteral("create");
        _el->setEEnum(m_ChangeModeEEnum);
        m_ChangeModeEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // delete
        _el->setName("delete");
        _el->setValue(2);
        _el->setLiteral("delete");
        _el->setEEnum(m_ChangeModeEEnum);
        m_ChangeModeEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // change
        _el->setName("change");
        _el->setValue(3);
        _el->setLiteral("change");
        _el->setEEnum(m_ChangeModeEEnum);
        m_ChangeModeEEnum->getELiterals().push_back(_el);
    }

    _initialize();
}

::ecore::EDataType_ptr CaexPackage::getAttributeDataType()
{
    return m_AttributeDataTypeEDataType;
}
::ecore::EClass_ptr CaexPackage::getAttributeFamily()
{
    return m_AttributeFamilyEClass;
}
::ecore::EClass_ptr CaexPackage::getAttributeNameMapping()
{
    return m_AttributeNameMappingEClass;
}
::ecore::EClass_ptr CaexPackage::getAttribute()
{
    return m_AttributeEClass;
}
::ecore::EClass_ptr CaexPackage::getAttributeLib()
{
    return m_AttributeLibEClass;
}
::ecore::EClass_ptr CaexPackage::getAttributeValueRequirement()
{
    return m_AttributeValueRequirementEClass;
}
::ecore::EClass_ptr CaexPackage::getCAEXBasicObject()
{
    return m_CAEXBasicObjectEClass;
}
::ecore::EClass_ptr CaexPackage::getCAEXFile()
{
    return m_CAEXFileEClass;
}
::ecore::EClass_ptr CaexPackage::getCAEXObject()
{
    return m_CAEXObjectEClass;
}
::ecore::EEnum_ptr CaexPackage::getChangeMode()
{
    return m_ChangeModeEEnum;
}
::ecore::EDataType_ptr CaexPackage::getChangeModeObject()
{
    return m_ChangeModeObjectEDataType;
}
::ecore::EClass_ptr CaexPackage::getDocumentRoot()
{
    return m_DocumentRootEClass;
}
::ecore::EClass_ptr CaexPackage::getExternalInterface()
{
    return m_ExternalInterfaceEClass;
}
::ecore::EClass_ptr CaexPackage::getExternalReference()
{
    return m_ExternalReferenceEClass;
}
::ecore::EClass_ptr CaexPackage::getInstanceHierarchy()
{
    return m_InstanceHierarchyEClass;
}
::ecore::EClass_ptr CaexPackage::getInterfaceClassLib()
{
    return m_InterfaceClassLibEClass;
}
::ecore::EClass_ptr CaexPackage::getInterfaceClass()
{
    return m_InterfaceClassEClass;
}
::ecore::EClass_ptr CaexPackage::getInterfaceFamily()
{
    return m_InterfaceFamilyEClass;
}
::ecore::EClass_ptr CaexPackage::getInterfaceIDMapping()
{
    return m_InterfaceIDMappingEClass;
}
::ecore::EClass_ptr CaexPackage::getInternalElement()
{
    return m_InternalElementEClass;
}
::ecore::EClass_ptr CaexPackage::getInternalLink()
{
    return m_InternalLinkEClass;
}
::ecore::EClass_ptr CaexPackage::getMapping()
{
    return m_MappingEClass;
}
::ecore::EClass_ptr CaexPackage::getNominalScaled()
{
    return m_NominalScaledEClass;
}
::ecore::EClass_ptr CaexPackage::getOrdinalScaled()
{
    return m_OrdinalScaledEClass;
}
::ecore::EClass_ptr CaexPackage::getRefSemantic()
{
    return m_RefSemanticEClass;
}
::ecore::EClass_ptr CaexPackage::getRoleClassLib()
{
    return m_RoleClassLibEClass;
}
::ecore::EClass_ptr CaexPackage::getRoleClass()
{
    return m_RoleClassEClass;
}
::ecore::EClass_ptr CaexPackage::getRoleFamily()
{
    return m_RoleFamilyEClass;
}
::ecore::EClass_ptr CaexPackage::getRoleRequirements()
{
    return m_RoleRequirementsEClass;
}
::ecore::EClass_ptr CaexPackage::getSourceDocumentInformation()
{
    return m_SourceDocumentInformationEClass;
}
::ecore::EClass_ptr CaexPackage::getSupportedRoleClass()
{
    return m_SupportedRoleClassEClass;
}
::ecore::EClass_ptr CaexPackage::getSystemUnitClassLib()
{
    return m_SystemUnitClassLibEClass;
}
::ecore::EClass_ptr CaexPackage::getSystemUnitClass()
{
    return m_SystemUnitClassEClass;
}
::ecore::EClass_ptr CaexPackage::getSystemUnitFamily()
{
    return m_SystemUnitFamilyEClass;
}
::ecore::EClass_ptr CaexPackage::getUnknownType()
{
    return m_UnknownTypeEClass;
}
::ecore::EClass_ptr CaexPackage::getCopyright()
{
    return m_CopyrightEClass;
}
::ecore::EClass_ptr CaexPackage::getDescription()
{
    return m_DescriptionEClass;
}
::ecore::EClass_ptr CaexPackage::getRevision()
{
    return m_RevisionEClass;
}
::ecore::EClass_ptr CaexPackage::getVersion()
{
    return m_VersionEClass;
}
::ecore::EClass_ptr CaexPackage::getAdditionalInformation()
{
    return m_AdditionalInformationEClass;
}

::ecore::EAttribute_ptr CaexPackage::getCAEXBasicObject__changeMode()
{
    return m_CAEXBasicObject__changeMode;
}
::ecore::EReference_ptr CaexPackage::getCAEXBasicObject__description()
{
    return m_CAEXBasicObject__description;
}
::ecore::EReference_ptr CaexPackage::getCAEXBasicObject__version()
{
    return m_CAEXBasicObject__version;
}
::ecore::EReference_ptr CaexPackage::getCAEXBasicObject__revision()
{
    return m_CAEXBasicObject__revision;
}
::ecore::EReference_ptr CaexPackage::getCAEXBasicObject__copyright()
{
    return m_CAEXBasicObject__copyright;
}
::ecore::EReference_ptr CaexPackage::getCAEXBasicObject__additionalInformation()
{
    return m_CAEXBasicObject__additionalInformation;
}
::ecore::EAttribute_ptr CaexPackage::getCAEXObject__iD()
{
    return m_CAEXObject__iD;
}
::ecore::EAttribute_ptr CaexPackage::getCAEXObject__name()
{
    return m_CAEXObject__name;
}
::ecore::EAttribute_ptr CaexPackage::getAttribute__defaultValue()
{
    return m_Attribute__defaultValue;
}
::ecore::EAttribute_ptr CaexPackage::getAttribute__value()
{
    return m_Attribute__value;
}
::ecore::EReference_ptr CaexPackage::getAttribute__refSemantic()
{
    return m_Attribute__refSemantic;
}
::ecore::EReference_ptr CaexPackage::getAttribute__constraint()
{
    return m_Attribute__constraint;
}
::ecore::EReference_ptr CaexPackage::getAttribute__attribute()
{
    return m_Attribute__attribute;
}
::ecore::EAttribute_ptr CaexPackage::getAttribute__attributeDataType()
{
    return m_Attribute__attributeDataType;
}
::ecore::EAttribute_ptr CaexPackage::getAttribute__refAttributeType()
{
    return m_Attribute__refAttributeType;
}
::ecore::EAttribute_ptr CaexPackage::getAttribute__unit()
{
    return m_Attribute__unit;
}
::ecore::EReference_ptr CaexPackage::getAttribute__referenceAttribute()
{
    return m_Attribute__referenceAttribute;
}
::ecore::EAttribute_ptr CaexPackage::getAttributeNameMapping__roleAttributeName()
{
    return m_AttributeNameMapping__roleAttributeName;
}
::ecore::EAttribute_ptr CaexPackage::getAttributeNameMapping__systemUnitAttributeName()
{
    return m_AttributeNameMapping__systemUnitAttributeName;
}
::ecore::EReference_ptr CaexPackage::getAttributeNameMapping__roleAttribute()
{
    return m_AttributeNameMapping__roleAttribute;
}
::ecore::EReference_ptr CaexPackage::getAttributeNameMapping__systemUnitAttribute()
{
    return m_AttributeNameMapping__systemUnitAttribute;
}
::ecore::EReference_ptr CaexPackage::getAttributeLib__attributeType()
{
    return m_AttributeLib__attributeType;
}
::ecore::EReference_ptr CaexPackage::getAttributeValueRequirement__ordinalScaledType()
{
    return m_AttributeValueRequirement__ordinalScaledType;
}
::ecore::EReference_ptr CaexPackage::getAttributeValueRequirement__nominalScaledType()
{
    return m_AttributeValueRequirement__nominalScaledType;
}
::ecore::EReference_ptr CaexPackage::getAttributeValueRequirement__unknownType()
{
    return m_AttributeValueRequirement__unknownType;
}
::ecore::EAttribute_ptr CaexPackage::getAttributeValueRequirement__name()
{
    return m_AttributeValueRequirement__name;
}
::ecore::EAttribute_ptr CaexPackage::getCAEXFile__superiorStandardVersion()
{
    return m_CAEXFile__superiorStandardVersion;
}
::ecore::EReference_ptr CaexPackage::getCAEXFile__sourceDocumentInformation()
{
    return m_CAEXFile__sourceDocumentInformation;
}
::ecore::EReference_ptr CaexPackage::getCAEXFile__externalReference()
{
    return m_CAEXFile__externalReference;
}
::ecore::EReference_ptr CaexPackage::getCAEXFile__instanceHierarchy()
{
    return m_CAEXFile__instanceHierarchy;
}
::ecore::EReference_ptr CaexPackage::getCAEXFile__interfaceClassLib()
{
    return m_CAEXFile__interfaceClassLib;
}
::ecore::EReference_ptr CaexPackage::getCAEXFile__roleClassLib()
{
    return m_CAEXFile__roleClassLib;
}
::ecore::EReference_ptr CaexPackage::getCAEXFile__systemUnitClassLib()
{
    return m_CAEXFile__systemUnitClassLib;
}
::ecore::EReference_ptr CaexPackage::getCAEXFile__attributeTypeLib()
{
    return m_CAEXFile__attributeTypeLib;
}
::ecore::EAttribute_ptr CaexPackage::getCAEXFile__fileName()
{
    return m_CAEXFile__fileName;
}
::ecore::EAttribute_ptr CaexPackage::getCAEXFile__schemaVersion()
{
    return m_CAEXFile__schemaVersion;
}
::ecore::EAttribute_ptr CaexPackage::getDocumentRoot__mixed()
{
    return m_DocumentRoot__mixed;
}
::ecore::EReference_ptr CaexPackage::getDocumentRoot__xMLNSPrefixMap()
{
    return m_DocumentRoot__xMLNSPrefixMap;
}
::ecore::EReference_ptr CaexPackage::getDocumentRoot__xSISchemaLocation()
{
    return m_DocumentRoot__xSISchemaLocation;
}
::ecore::EReference_ptr CaexPackage::getDocumentRoot__cAEXFile()
{
    return m_DocumentRoot__cAEXFile;
}
::ecore::EReference_ptr CaexPackage::getInterfaceClass__attribute()
{
    return m_InterfaceClass__attribute;
}
::ecore::EAttribute_ptr CaexPackage::getInterfaceClass__refBaseClassPath()
{
    return m_InterfaceClass__refBaseClassPath;
}
::ecore::EReference_ptr CaexPackage::getInterfaceClass__baseClass()
{
    return m_InterfaceClass__baseClass;
}
::ecore::EReference_ptr CaexPackage::getInterfaceClass__interfaceClass()
{
    return m_InterfaceClass__interfaceClass;
}
::ecore::EReference_ptr CaexPackage::getInterfaceClass__externalInterface()
{
    return m_InterfaceClass__externalInterface;
}
::ecore::EAttribute_ptr CaexPackage::getExternalReference__alias()
{
    return m_ExternalReference__alias;
}
::ecore::EAttribute_ptr CaexPackage::getExternalReference__path()
{
    return m_ExternalReference__path;
}
::ecore::EReference_ptr CaexPackage::getInstanceHierarchy__internalElement()
{
    return m_InstanceHierarchy__internalElement;
}
::ecore::EReference_ptr CaexPackage::getInterfaceClassLib__interfaceClass()
{
    return m_InterfaceClassLib__interfaceClass;
}
::ecore::EAttribute_ptr CaexPackage::getInterfaceIDMapping__roleInterfaceID()
{
    return m_InterfaceIDMapping__roleInterfaceID;
}
::ecore::EAttribute_ptr CaexPackage::getInterfaceIDMapping__systemUnitInterfaceID()
{
    return m_InterfaceIDMapping__systemUnitInterfaceID;
}
::ecore::EReference_ptr CaexPackage::getInterfaceIDMapping__roleInterface()
{
    return m_InterfaceIDMapping__roleInterface;
}
::ecore::EReference_ptr CaexPackage::getInterfaceIDMapping__systemUnitInterface()
{
    return m_InterfaceIDMapping__systemUnitInterface;
}
::ecore::EReference_ptr CaexPackage::getSystemUnitClass__attribute()
{
    return m_SystemUnitClass__attribute;
}
::ecore::EReference_ptr CaexPackage::getSystemUnitClass__externalInterface()
{
    return m_SystemUnitClass__externalInterface;
}
::ecore::EReference_ptr CaexPackage::getSystemUnitClass__internalElement()
{
    return m_SystemUnitClass__internalElement;
}
::ecore::EReference_ptr CaexPackage::getSystemUnitClass__supportedRoleClass()
{
    return m_SystemUnitClass__supportedRoleClass;
}
::ecore::EReference_ptr CaexPackage::getSystemUnitClass__internalLink()
{
    return m_SystemUnitClass__internalLink;
}
::ecore::EReference_ptr CaexPackage::getSystemUnitClass__baseClass()
{
    return m_SystemUnitClass__baseClass;
}
::ecore::EReference_ptr CaexPackage::getSystemUnitClass__systemUnitClass()
{
    return m_SystemUnitClass__systemUnitClass;
}
::ecore::EAttribute_ptr CaexPackage::getSystemUnitClass__refBaseClassPath()
{
    return m_SystemUnitClass__refBaseClassPath;
}
::ecore::EReference_ptr CaexPackage::getInternalElement__roleRequirements()
{
    return m_InternalElement__roleRequirements;
}
::ecore::EAttribute_ptr CaexPackage::getInternalElement__refBaseSystemUnitPath()
{
    return m_InternalElement__refBaseSystemUnitPath;
}
::ecore::EReference_ptr CaexPackage::getInternalElement__baseSystemUnit()
{
    return m_InternalElement__baseSystemUnit;
}
::ecore::EAttribute_ptr CaexPackage::getInternalLink__refPartnerSideA()
{
    return m_InternalLink__refPartnerSideA;
}
::ecore::EAttribute_ptr CaexPackage::getInternalLink__refPartnerSideB()
{
    return m_InternalLink__refPartnerSideB;
}
::ecore::EReference_ptr CaexPackage::getInternalLink__partnerSideA()
{
    return m_InternalLink__partnerSideA;
}
::ecore::EReference_ptr CaexPackage::getInternalLink__partnerSideB()
{
    return m_InternalLink__partnerSideB;
}
::ecore::EReference_ptr CaexPackage::getMapping__attributeNameMapping()
{
    return m_Mapping__attributeNameMapping;
}
::ecore::EReference_ptr CaexPackage::getMapping__interfaceIDMapping()
{
    return m_Mapping__interfaceIDMapping;
}
::ecore::EAttribute_ptr CaexPackage::getNominalScaled__requiredValue()
{
    return m_NominalScaled__requiredValue;
}
::ecore::EAttribute_ptr CaexPackage::getOrdinalScaled__requiredMaxValue()
{
    return m_OrdinalScaled__requiredMaxValue;
}
::ecore::EAttribute_ptr CaexPackage::getOrdinalScaled__requiredValue()
{
    return m_OrdinalScaled__requiredValue;
}
::ecore::EAttribute_ptr CaexPackage::getOrdinalScaled__requiredMinValue()
{
    return m_OrdinalScaled__requiredMinValue;
}
::ecore::EAttribute_ptr CaexPackage::getRefSemantic__correspondingAttributePath()
{
    return m_RefSemantic__correspondingAttributePath;
}
::ecore::EReference_ptr CaexPackage::getRoleClassLib__roleClass()
{
    return m_RoleClassLib__roleClass;
}
::ecore::EReference_ptr CaexPackage::getRoleClass__attribute()
{
    return m_RoleClass__attribute;
}
::ecore::EReference_ptr CaexPackage::getRoleClass__externalInterface()
{
    return m_RoleClass__externalInterface;
}
::ecore::EAttribute_ptr CaexPackage::getRoleClass__refBaseClassPath()
{
    return m_RoleClass__refBaseClassPath;
}
::ecore::EReference_ptr CaexPackage::getRoleClass__baseClass()
{
    return m_RoleClass__baseClass;
}
::ecore::EReference_ptr CaexPackage::getRoleClass__roleClass()
{
    return m_RoleClass__roleClass;
}
::ecore::EReference_ptr CaexPackage::getRoleRequirements__attribute()
{
    return m_RoleRequirements__attribute;
}
::ecore::EReference_ptr CaexPackage::getRoleRequirements__externalInterface()
{
    return m_RoleRequirements__externalInterface;
}
::ecore::EReference_ptr CaexPackage::getRoleRequirements__mappingObject()
{
    return m_RoleRequirements__mappingObject;
}
::ecore::EReference_ptr CaexPackage::getRoleRequirements__roleClass()
{
    return m_RoleRequirements__roleClass;
}
::ecore::EAttribute_ptr CaexPackage::getRoleRequirements__refBaseRoleClassPath()
{
    return m_RoleRequirements__refBaseRoleClassPath;
}
::ecore::EAttribute_ptr CaexPackage::getSourceDocumentInformation__lastWritingDateTime()
{
    return m_SourceDocumentInformation__lastWritingDateTime;
}
::ecore::EAttribute_ptr CaexPackage::getSourceDocumentInformation__originID()
{
    return m_SourceDocumentInformation__originID;
}
::ecore::EAttribute_ptr CaexPackage::getSourceDocumentInformation__originName()
{
    return m_SourceDocumentInformation__originName;
}
::ecore::EAttribute_ptr CaexPackage::getSourceDocumentInformation__originProjectID()
{
    return m_SourceDocumentInformation__originProjectID;
}
::ecore::EAttribute_ptr CaexPackage::getSourceDocumentInformation__originProjectTitle()
{
    return m_SourceDocumentInformation__originProjectTitle;
}
::ecore::EAttribute_ptr CaexPackage::getSourceDocumentInformation__originRelease()
{
    return m_SourceDocumentInformation__originRelease;
}
::ecore::EAttribute_ptr CaexPackage::getSourceDocumentInformation__originVendor()
{
    return m_SourceDocumentInformation__originVendor;
}
::ecore::EAttribute_ptr CaexPackage::getSourceDocumentInformation__originVendorURL()
{
    return m_SourceDocumentInformation__originVendorURL;
}
::ecore::EAttribute_ptr CaexPackage::getSourceDocumentInformation__originVersion()
{
    return m_SourceDocumentInformation__originVersion;
}
::ecore::EReference_ptr CaexPackage::getSupportedRoleClass__mappingObject()
{
    return m_SupportedRoleClass__mappingObject;
}
::ecore::EAttribute_ptr CaexPackage::getSupportedRoleClass__refRoleClassPath()
{
    return m_SupportedRoleClass__refRoleClassPath;
}
::ecore::EReference_ptr CaexPackage::getSupportedRoleClass__roleClass()
{
    return m_SupportedRoleClass__roleClass;
}
::ecore::EReference_ptr CaexPackage::getSystemUnitClassLib__systemUnitClass()
{
    return m_SystemUnitClassLib__systemUnitClass;
}
::ecore::EAttribute_ptr CaexPackage::getUnknownType__requirements()
{
    return m_UnknownType__requirements;
}
::ecore::EAttribute_ptr CaexPackage::getCopyright__value()
{
    return m_Copyright__value;
}
::ecore::EAttribute_ptr CaexPackage::getCopyright__changeMode()
{
    return m_Copyright__changeMode;
}
::ecore::EAttribute_ptr CaexPackage::getDescription__value()
{
    return m_Description__value;
}
::ecore::EAttribute_ptr CaexPackage::getDescription__changeMode()
{
    return m_Description__changeMode;
}
::ecore::EAttribute_ptr CaexPackage::getRevision__revisionDate()
{
    return m_Revision__revisionDate;
}
::ecore::EAttribute_ptr CaexPackage::getRevision__oldVersion()
{
    return m_Revision__oldVersion;
}
::ecore::EAttribute_ptr CaexPackage::getRevision__newVersion()
{
    return m_Revision__newVersion;
}
::ecore::EAttribute_ptr CaexPackage::getRevision__authorName()
{
    return m_Revision__authorName;
}
::ecore::EAttribute_ptr CaexPackage::getRevision__comment()
{
    return m_Revision__comment;
}
::ecore::EAttribute_ptr CaexPackage::getVersion__value()
{
    return m_Version__value;
}
::ecore::EAttribute_ptr CaexPackage::getVersion__changeMode()
{
    return m_Version__changeMode;
}
::ecore::EAttribute_ptr CaexPackage::getElement__name()
{
    return m_Element__name;
}
::ecore::EAttribute_ptr CaexPackage::getElement__value()
{
    return m_Element__value;
}
::ecore::EReference_ptr CaexPackage::getGenericElement__nestedElements()
{
    return m_GenericElement__nestedElements;
}
::ecore::EReference_ptr CaexPackage::getGenericElement__attributes()
{
    return m_GenericElement__attributes;
}
::ecore::EAttribute_ptr CaexPackage::getGenericElement__elementFeatureMap()
{
    return m_GenericElement__elementFeatureMap;
}
::ecore::EAttribute_ptr CaexPackage::getGenericElement__attributeFeatureMap()
{
    return m_GenericElement__attributeFeatureMap;
}

