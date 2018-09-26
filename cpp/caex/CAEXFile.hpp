// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/CAEXFile.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_CAEXFILE_HPP
#define CAEX_CAEXFILE_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/CAEXBasicObject.hpp>

/*PROTECTED REGION ID(CAEXFile_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class CAEXFile: public virtual ::caex::CAEXBasicObject
    {
    public:
        CAEXFile();

        virtual ~CAEXFile();

        virtual void _initialize();

        // Operations

        // Attributes
        std::vector< ::type::String > const& getSuperiorStandardVersion() const;
        void setSuperiorStandardVersion(
                std::vector< ::type::String > _superiorStandardVersion);

        void addSuperiorStandardVersion(
                ::type::String const& _new_element_in_superiorStandardVersion);
        void setSuperiorStandardVersionAt(size_t _position,
                ::type::String const& _new_element_in_superiorStandardVersion);
        void deleteSuperiorStandardVersionAt(size_t _position);

        ::type::String getFileName() const;
        void setFileName(::type::String _fileName);

        ::type::String getSchemaVersion() const;
        void setSchemaVersion(::type::String _schemaVersion);

        // References
        ::ecorecpp::mapping::EList< ::caex::SourceDocumentInformation >& getSourceDocumentInformation();

        ::ecorecpp::mapping::EList< ::caex::ExternalReference >& getExternalReference();

        ::ecorecpp::mapping::EList< ::caex::InstanceHierarchy >& getInstanceHierarchy();

        ::ecorecpp::mapping::EList< ::caex::InterfaceClassLib >& getInterfaceClassLib();

        ::ecorecpp::mapping::EList< ::caex::RoleClassLib >& getRoleClassLib();

        ::ecorecpp::mapping::EList< ::caex::SystemUnitClassLib >& getSystemUnitClassLib();

        ::ecorecpp::mapping::EList< ::caex::AttributeLib >& getAttributeTypeLib();

        /*PROTECTED REGION ID(CAEXFile) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        virtual ::ecore::EJavaObject eGet(::ecore::EInt _featureID,
                ::ecore::EBoolean _resolve);
        virtual void eSet(::ecore::EInt _featureID,
                ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::EBoolean eIsSet(::ecore::EInt _featureID);
        virtual void eUnset(::ecore::EInt _featureID);
        virtual ::ecore::EClass_ptr _eClass();

        /*PROTECTED REGION ID(CAEXFileImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        std::vector< ::type::String > m_superiorStandardVersion;

        ::type::String m_fileName;

        ::type::String m_schemaVersion;

        // References

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::SourceDocumentInformation > > m_sourceDocumentInformation;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::ExternalReference > > m_externalReference;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::InstanceHierarchy > > m_instanceHierarchy;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::InterfaceClassLib > > m_interfaceClassLib;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::RoleClassLib > > m_roleClassLib;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::SystemUnitClassLib > > m_systemUnitClassLib;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::AttributeLib > > m_attributeTypeLib;

    };

} // caex

#endif // CAEX_CAEXFILE_HPP

