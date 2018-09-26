// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/CAEXFile.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CAEXFile.hpp"
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/SourceDocumentInformation.hpp>
#include <caex/ExternalReference.hpp>
#include <caex/InstanceHierarchy.hpp>
#include <caex/InterfaceClassLib.hpp>
#include <caex/RoleClassLib.hpp>
#include <caex/SystemUnitClassLib.hpp>
#include <caex/AttributeLib.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
CAEXFile::CAEXFile() :
        m_schemaVersion(3.00)
{

    m_sourceDocumentInformation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::SourceDocumentInformation, -1, true, false >(this,
                    NULL));
    m_externalReference.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::ExternalReference, -1, true, false >(this, NULL));
    m_instanceHierarchy.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::InstanceHierarchy, -1, true, false >(this, NULL));
    m_interfaceClassLib.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::InterfaceClassLib, -1, true, false >(this, NULL));
    m_roleClassLib.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::RoleClassLib,
                    -1, true, false >(this, NULL));
    m_systemUnitClassLib.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::SystemUnitClassLib, -1, true, false >(this, NULL));
    m_attributeTypeLib.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::AttributeLib,
                    -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(CAEXFileImpl__CAEXFileImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

CAEXFile::~CAEXFile()
{
}

/*PROTECTED REGION ID(CAEXFile.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
std::vector< ::type::String > const& CAEXFile::getSuperiorStandardVersion() const
{
    return m_superiorStandardVersion;
}

void CAEXFile::setSuperiorStandardVersion(
        std::vector< ::type::String > _superiorStandardVersion)
{
#ifdef ECORECPP_NOTIFICATION_API
    std::vector< ::type::String > _old_superiorStandardVersion = m_superiorStandardVersion;
#endif
    m_superiorStandardVersion = _superiorStandardVersion;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getCAEXFile__superiorStandardVersion(),
                _old_superiorStandardVersion,
                m_superiorStandardVersion
        );
        eNotify(&notification);
    }
#endif
}

void CAEXFile::addSuperiorStandardVersion(
        ::type::String const& _new_element_in_superiorStandardVersion)
{
    m_superiorStandardVersion.push_back(
            _new_element_in_superiorStandardVersion);
}

void CAEXFile::setSuperiorStandardVersionAt(size_t _position,
        ::type::String const& _new_element_in_superiorStandardVersion)
{
    if (_position >= m_superiorStandardVersion.size())
        m_superiorStandardVersion.resize(_position + 1, 0);

    m_superiorStandardVersion[_position] =
            _new_element_in_superiorStandardVersion;
}

void CAEXFile::deleteSuperiorStandardVersionAt(size_t _position)
{
    if (_position >= m_superiorStandardVersion.size())
        throw "Attribute counter out of bounds!";

    // TODO: This is not actually quite true
    if (_position == m_superiorStandardVersion.size() - 1)
        m_superiorStandardVersion.resize(_position);
}

::type::String CAEXFile::getFileName() const
{
    return m_fileName;
}

void CAEXFile::setFileName(::type::String _fileName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_fileName = m_fileName;
#endif
    m_fileName = _fileName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getCAEXFile__fileName(),
                _old_fileName,
                m_fileName
        );
        eNotify(&notification);
    }
#endif
}

::type::String CAEXFile::getSchemaVersion() const
{
    return m_schemaVersion;
}

void CAEXFile::setSchemaVersion(::type::String _schemaVersion)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_schemaVersion = m_schemaVersion;
#endif
    m_schemaVersion = _schemaVersion;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getCAEXFile__schemaVersion(),
                _old_schemaVersion,
                m_schemaVersion
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecorecpp::mapping::EList< ::caex::SourceDocumentInformation >& CAEXFile::getSourceDocumentInformation()
{
    return *m_sourceDocumentInformation;
}

::ecorecpp::mapping::EList< ::caex::ExternalReference >& CAEXFile::getExternalReference()
{
    return *m_externalReference;
}

::ecorecpp::mapping::EList< ::caex::InstanceHierarchy >& CAEXFile::getInstanceHierarchy()
{
    return *m_instanceHierarchy;
}

::ecorecpp::mapping::EList< ::caex::InterfaceClassLib >& CAEXFile::getInterfaceClassLib()
{
    return *m_interfaceClassLib;
}

::ecorecpp::mapping::EList< ::caex::RoleClassLib >& CAEXFile::getRoleClassLib()
{
    return *m_roleClassLib;
}

::ecorecpp::mapping::EList< ::caex::SystemUnitClassLib >& CAEXFile::getSystemUnitClassLib()
{
    return *m_systemUnitClassLib;
}

::ecorecpp::mapping::EList< ::caex::AttributeLib >& CAEXFile::getAttributeTypeLib()
{
    return *m_attributeTypeLib;
}

