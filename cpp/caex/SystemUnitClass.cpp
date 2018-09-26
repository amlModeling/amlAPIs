// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/SystemUnitClass.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SystemUnitClass.hpp"
#include <caex/CAEXObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Attribute.hpp>
#include <caex/InterfaceClass.hpp>
#include <caex/InternalElement.hpp>
#include <caex/SupportedRoleClass.hpp>
#include <caex/InternalLink.hpp>
#include <caex/SystemUnitClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
SystemUnitClass::SystemUnitClass() :
        m_baseClass(0)
{

    m_attribute.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::Attribute, -1,
                    true, false >(this, NULL));
    m_externalInterface.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::InterfaceClass,
                    -1, true, false >(this, NULL));
    m_internalElement.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::InternalElement, -1, true, false >(this, NULL));
    m_supportedRoleClass.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::SupportedRoleClass, -1, true, false >(this, NULL));
    m_internalLink.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::InternalLink,
                    -1, true, false >(this, NULL));
    m_systemUnitClass.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::SystemUnitClass, -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(SystemUnitClassImpl__SystemUnitClassImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

SystemUnitClass::~SystemUnitClass()
{
}

/*PROTECTED REGION ID(SystemUnitClass.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String SystemUnitClass::getRefBaseClassPath() const
{
    return m_refBaseClassPath;
}

void SystemUnitClass::setRefBaseClassPath(::type::String _refBaseClassPath)
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
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSystemUnitClass__refBaseClassPath(),
                _old_refBaseClassPath,
                m_refBaseClassPath
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecorecpp::mapping::EList< ::caex::Attribute >& SystemUnitClass::getAttribute()
{
    return *m_attribute;
}

::ecorecpp::mapping::EList< ::caex::InterfaceClass >& SystemUnitClass::getExternalInterface()
{
    return *m_externalInterface;
}

::ecorecpp::mapping::EList< ::caex::InternalElement >& SystemUnitClass::getInternalElement()
{
    return *m_internalElement;
}

::ecorecpp::mapping::EList< ::caex::SupportedRoleClass >& SystemUnitClass::getSupportedRoleClass()
{
    return *m_supportedRoleClass;
}

::ecorecpp::mapping::EList< ::caex::InternalLink >& SystemUnitClass::getInternalLink()
{
    return *m_internalLink;
}

::caex::SystemUnitClass_ptr SystemUnitClass::getBaseClass()
{
    return m_baseClass;
}

void SystemUnitClass::setBaseClass(::caex::SystemUnitClass_ptr _baseClass)
{
    ::caex::SystemUnitClass_ptr _old_baseClass = m_baseClass;

    m_baseClass = _baseClass;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSystemUnitClass__baseClass(),
                _old_baseClass,
                m_baseClass
        );
        eNotify(&notification);
    }
#endif

}

::ecorecpp::mapping::EList< ::caex::SystemUnitClass >& SystemUnitClass::getSystemUnitClass()
{
    return *m_systemUnitClass;
}

