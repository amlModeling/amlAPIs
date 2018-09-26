// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/SupportedRoleClass.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SupportedRoleClass.hpp"
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Mapping.hpp>
#include <caex/RoleClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
SupportedRoleClass::SupportedRoleClass() :
        m_mappingObject(0), m_roleClass(0)
{

    /*PROTECTED REGION ID(SupportedRoleClassImpl__SupportedRoleClassImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

SupportedRoleClass::~SupportedRoleClass()
{
    if (m_mappingObject)
    {
        delete m_mappingObject;
    }
}

/*PROTECTED REGION ID(SupportedRoleClass.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String SupportedRoleClass::getRefRoleClassPath() const
{
    return m_refRoleClassPath;
}

void SupportedRoleClass::setRefRoleClassPath(::type::String _refRoleClassPath)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_refRoleClassPath = m_refRoleClassPath;
#endif
    m_refRoleClassPath = _refRoleClassPath;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSupportedRoleClass__refRoleClassPath(),
                _old_refRoleClassPath,
                m_refRoleClassPath
        );
        eNotify(&notification);
    }
#endif
}

// References
::caex::Mapping_ptr SupportedRoleClass::getMappingObject()
{
    return m_mappingObject;
}

void SupportedRoleClass::setMappingObject(::caex::Mapping_ptr _mappingObject)
{
    ::caex::Mapping_ptr _old_mappingObject = m_mappingObject;

    m_mappingObject = _mappingObject;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSupportedRoleClass__mappingObject(),
                _old_mappingObject,
                m_mappingObject
        );
        eNotify(&notification);
    }
#endif

    delete _old_mappingObject;
}

::caex::RoleClass_ptr SupportedRoleClass::getRoleClass()
{
    return m_roleClass;
}

void SupportedRoleClass::setRoleClass(::caex::RoleClass_ptr _roleClass)
{
    ::caex::RoleClass_ptr _old_roleClass = m_roleClass;

    m_roleClass = _roleClass;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSupportedRoleClass__roleClass(),
                _old_roleClass,
                m_roleClass
        );
        eNotify(&notification);
    }
#endif

}

