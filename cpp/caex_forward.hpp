// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex_forward.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _CAEX_FORWARD_HPP
#define _CAEX_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(caex_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace caex
{

// EDataType
    /*PROTECTED REGION ID(caex_AttributeDataType) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int AttributeDataType;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(caex_ChangeMode) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int ChangeMode;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(caex_ChangeModeObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int ChangeModeObject;
    /*PROTECTED REGION END*/

// EClass
// AttributeFamily
    class AttributeFamily;
    typedef AttributeFamily* AttributeFamily_ptr;

// AttributeNameMapping
    class AttributeNameMapping;
    typedef AttributeNameMapping* AttributeNameMapping_ptr;

// Attribute
    class Attribute;
    typedef Attribute* Attribute_ptr;

// AttributeLib
    class AttributeLib;
    typedef AttributeLib* AttributeLib_ptr;

// AttributeValueRequirement
    class AttributeValueRequirement;
    typedef AttributeValueRequirement* AttributeValueRequirement_ptr;

// CAEXBasicObject
    class CAEXBasicObject;
    typedef CAEXBasicObject* CAEXBasicObject_ptr;

// CAEXFile
    class CAEXFile;
    typedef CAEXFile* CAEXFile_ptr;

// CAEXObject
    class CAEXObject;
    typedef CAEXObject* CAEXObject_ptr;

// DocumentRoot
    class DocumentRoot;
    typedef DocumentRoot* DocumentRoot_ptr;

// ExternalInterface
    class ExternalInterface;
    typedef ExternalInterface* ExternalInterface_ptr;

// ExternalReference
    class ExternalReference;
    typedef ExternalReference* ExternalReference_ptr;

// InstanceHierarchy
    class InstanceHierarchy;
    typedef InstanceHierarchy* InstanceHierarchy_ptr;

// InterfaceClassLib
    class InterfaceClassLib;
    typedef InterfaceClassLib* InterfaceClassLib_ptr;

// InterfaceClass
    class InterfaceClass;
    typedef InterfaceClass* InterfaceClass_ptr;

// InterfaceFamily
    class InterfaceFamily;
    typedef InterfaceFamily* InterfaceFamily_ptr;

// InterfaceIDMapping
    class InterfaceIDMapping;
    typedef InterfaceIDMapping* InterfaceIDMapping_ptr;

// InternalElement
    class InternalElement;
    typedef InternalElement* InternalElement_ptr;

// InternalLink
    class InternalLink;
    typedef InternalLink* InternalLink_ptr;

// Mapping
    class Mapping;
    typedef Mapping* Mapping_ptr;

// NominalScaled
    class NominalScaled;
    typedef NominalScaled* NominalScaled_ptr;

// OrdinalScaled
    class OrdinalScaled;
    typedef OrdinalScaled* OrdinalScaled_ptr;

// RefSemantic
    class RefSemantic;
    typedef RefSemantic* RefSemantic_ptr;

// RoleClassLib
    class RoleClassLib;
    typedef RoleClassLib* RoleClassLib_ptr;

// RoleClass
    class RoleClass;
    typedef RoleClass* RoleClass_ptr;

// RoleFamily
    class RoleFamily;
    typedef RoleFamily* RoleFamily_ptr;

// RoleRequirements
    class RoleRequirements;
    typedef RoleRequirements* RoleRequirements_ptr;

// SourceDocumentInformation
    class SourceDocumentInformation;
    typedef SourceDocumentInformation* SourceDocumentInformation_ptr;

// SupportedRoleClass
    class SupportedRoleClass;
    typedef SupportedRoleClass* SupportedRoleClass_ptr;

// SystemUnitClassLib
    class SystemUnitClassLib;
    typedef SystemUnitClassLib* SystemUnitClassLib_ptr;

// SystemUnitClass
    class SystemUnitClass;
    typedef SystemUnitClass* SystemUnitClass_ptr;

// SystemUnitFamily
    class SystemUnitFamily;
    typedef SystemUnitFamily* SystemUnitFamily_ptr;

// UnknownType
    class UnknownType;
    typedef UnknownType* UnknownType_ptr;

// Copyright
    class Copyright;
    typedef Copyright* Copyright_ptr;

// Description
    class Description;
    typedef Description* Description_ptr;

// Revision
    class Revision;
    typedef Revision* Revision_ptr;

// Version
    class Version;
    typedef Version* Version_ptr;

// AdditionalInformation
    class AdditionalInformation;
    typedef AdditionalInformation* AdditionalInformation_ptr;

// Package & Factory
    class CaexFactory;
    typedef CaexFactory * CaexFactory_ptr;
    class CaexPackage;
    typedef CaexPackage * CaexPackage_ptr;

    template< typename T, typename S >
    inline T* instanceOf(S* _s)
    {
        return dynamic_cast< T* >(_s);
    }

} // caex

#endif // _CAEX_FORWARD_HPP

