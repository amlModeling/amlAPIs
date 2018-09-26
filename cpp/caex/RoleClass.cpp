// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/RoleClass.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RoleClass.hpp"
#include <caex/CAEXObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Attribute.hpp>
#include <caex/ExternalInterface.hpp>
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
RoleClass::RoleClass() :
        m_baseClass(0)
{

    m_attribute.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::Attribute, -1,
                    true, false >(this, NULL));
    m_externalInterface.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::ExternalInterface, -1, true, false >(this, NULL));
    m_roleClass.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::RoleClass, -1,
                    true, false >(this, NULL));

    /*PROTECTED REGION ID(RoleClassImpl__RoleClassImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

RoleClass::~RoleClass()
{
}

/*PROTECTED REGION ID(RoleClass.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String RoleClass::getRefBaseClassPath() const
{
    return m_refBaseClassPath;
}

void RoleClass::setRefBaseClassPath(::type::String _refBaseClassPath)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_refBaseClassPath = m_refBaseClassPath;
#endif
    m_refBaseClassPath = _refBaseClassPath;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getRoleClass__refBaseClassPath(),
                _old_refBaseClassPath,
                m_refBaseClassPath
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecorecpp::mapping::EList< ::caex::Attribute >& RoleClass::getAttribute()
{
    return *m_attribute;
}

::ecorecpp::mapping::EList< ::caex::ExternalInterface >& RoleClass::getExternalInterface()
{
    return *m_externalInterface;
}

::caex::RoleClass_ptr RoleClass::getBaseClass()
{
    return m_baseClass;
}

void RoleClass::setBaseClass(::caex::RoleClass_ptr _baseClass)
{
    ::caex::RoleClass_ptr _old_baseClass = m_baseClass;

    m_baseClass = _baseClass;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getRoleClass__baseClass(),
                _old_baseClass,
                m_baseClass
        );
        eNotify(&notification);
    }
#endif

}

::ecorecpp::mapping::EList< ::caex::RoleClass >& RoleClass::getRoleClass()
{
    return *m_roleClass;
}

