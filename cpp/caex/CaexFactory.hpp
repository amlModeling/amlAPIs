// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/CaexFactory.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _CAEXFACTORY_HPP
#define _CAEXFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <caex.hpp>

namespace caex
{

    class CaexFactory: public virtual ::ecore::EFactory
    {
    public:

        static CaexFactory_ptr _instance();

        virtual AttributeFamily_ptr createAttributeFamily();
        virtual AttributeNameMapping_ptr createAttributeNameMapping();
        virtual Attribute_ptr createAttribute();
        virtual AttributeLib_ptr createAttributeLib();
        virtual AttributeValueRequirement_ptr createAttributeValueRequirement();
        virtual CAEXBasicObject_ptr createCAEXBasicObject();
        virtual CAEXFile_ptr createCAEXFile();
        virtual CAEXObject_ptr createCAEXObject();
        virtual DocumentRoot_ptr createDocumentRoot();
        virtual ExternalInterface_ptr createExternalInterface();
        virtual ExternalReference_ptr createExternalReference();
        virtual InstanceHierarchy_ptr createInstanceHierarchy();
        virtual InterfaceClassLib_ptr createInterfaceClassLib();
        virtual InterfaceClass_ptr createInterfaceClass();
        virtual InterfaceFamily_ptr createInterfaceFamily();
        virtual InterfaceIDMapping_ptr createInterfaceIDMapping();
        virtual InternalElement_ptr createInternalElement();
        virtual InternalLink_ptr createInternalLink();
        virtual Mapping_ptr createMapping();
        virtual NominalScaled_ptr createNominalScaled();
        virtual OrdinalScaled_ptr createOrdinalScaled();
        virtual RefSemantic_ptr createRefSemantic();
        virtual RoleClassLib_ptr createRoleClassLib();
        virtual RoleClass_ptr createRoleClass();
        virtual RoleFamily_ptr createRoleFamily();
        virtual RoleRequirements_ptr createRoleRequirements();
        virtual SourceDocumentInformation_ptr createSourceDocumentInformation();
        virtual SupportedRoleClass_ptr createSupportedRoleClass();
        virtual SystemUnitClassLib_ptr createSystemUnitClassLib();
        virtual SystemUnitClass_ptr createSystemUnitClass();
        virtual SystemUnitFamily_ptr createSystemUnitFamily();
        virtual UnknownType_ptr createUnknownType();
        virtual Copyright_ptr createCopyright();
        virtual Description_ptr createDescription();
        virtual Revision_ptr createRevision();
        virtual Version_ptr createVersion();
        virtual AdditionalInformation_ptr createAdditionalInformation();

        virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString(
                ::ecore::EDataType_ptr _eDataType,
                ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString(
                ::ecore::EDataType_ptr _eDataType,
                ::ecore::EJavaObject const& _instanceValue);

    protected:

        static std::auto_ptr< CaexFactory > s_instance;

        CaexFactory();

    };

} // caex

#endif // _CAEXFACTORY_HPP

