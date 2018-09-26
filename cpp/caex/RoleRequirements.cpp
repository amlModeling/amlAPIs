// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/RoleRequirements.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RoleRequirements.hpp"
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Attribute.hpp>
#include <caex/InterfaceClass.hpp>
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
RoleRequirements::RoleRequirements() :
        m_mappingObject(0), m_roleClass(0)
{

    m_attribute.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::Attribute, -1,
                    true, false >(this, NULL));
    m_externalInterface.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::InterfaceClass,
                    -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(RoleRequirementsImpl__RoleRequirementsImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

RoleRequirements::~RoleRequirements()
{
    if (m_mappingObject)
    {
        delete m_mappingObject;
    }
}

/*PROTECTED REGION ID(RoleRequirements.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String RoleRequirements::getRefBaseRoleClassPath() const
{
    return m_refBaseRoleClassPath;
}

void RoleRequirements::setRefBaseRoleClassPath(
        ::type::String _refBaseRoleClassPath)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_refBaseRoleClassPath = m_refBaseRoleClassPath;
#endif
    m_refBaseRoleClassPath = _refBaseRoleClassPath;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getRoleRequirements__refBaseRoleClassPath(),
                _old_refBaseRoleClassPath,
                m_refBaseRoleClassPath
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecorecpp::mapping::EList< ::caex::Attribute >& RoleRequirements::getAttribute()
{
    return *m_attribute;
}

::ecorecpp::mapping::EList< ::caex::InterfaceClass >& RoleRequirements::getExternalInterface()
{
    return *m_externalInterface;
}

::caex::Mapping_ptr RoleRequirements::getMappingObject()
{
    return m_mappingObject;
}

void RoleRequirements::setMappingObject(::caex::Mapping_ptr _mappingObject)
{
    ::caex::Mapping_ptr _old_mappingObject = m_mappingObject;

    m_mappingObject = _mappingObject;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getRoleRequirements__mappingObject(),
                _old_mappingObject,
                m_mappingObject
        );
        eNotify(&notification);
    }
#endif

    delete _old_mappingObject;
}

::caex::RoleClass_ptr RoleRequirements::getRoleClass()
{
    return m_roleClass;
}

void RoleRequirements::setRoleClass(::caex::RoleClass_ptr _roleClass)
{
    ::caex::RoleClass_ptr _old_roleClass = m_roleClass;

    m_roleClass = _roleClass;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getRoleRequirements__roleClass(),
                _old_roleClass,
                m_roleClass
        );
        eNotify(&notification);
    }
#endif

}

