// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InterfaceClass.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InterfaceClass.hpp"
#include <caex/CAEXObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Attribute.hpp>
#include <caex/InterfaceClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
InterfaceClass::InterfaceClass() :
        m_baseClass(0)
{

    m_attribute.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::Attribute, -1,
                    true, false >(this, NULL));
    m_interfaceClass.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::InterfaceClass,
                    -1, true, false >(this, NULL));
    m_externalInterface.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::InterfaceClass,
                    -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(InterfaceClassImpl__InterfaceClassImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

InterfaceClass::~InterfaceClass()
{
}

/*PROTECTED REGION ID(InterfaceClass.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String InterfaceClass::getRefBaseClassPath() const
{
    return m_refBaseClassPath;
}

void InterfaceClass::setRefBaseClassPath(::type::String _refBaseClassPath)
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
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getInterfaceClass__refBaseClassPath(),
                _old_refBaseClassPath,
                m_refBaseClassPath
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecorecpp::mapping::EList< ::caex::Attribute >& InterfaceClass::getAttribute()
{
    return *m_attribute;
}

::caex::InterfaceClass_ptr InterfaceClass::getBaseClass()
{
    return m_baseClass;
}

void InterfaceClass::setBaseClass(::caex::InterfaceClass_ptr _baseClass)
{
    ::caex::InterfaceClass_ptr _old_baseClass = m_baseClass;

    m_baseClass = _baseClass;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getInterfaceClass__baseClass(),
                _old_baseClass,
                m_baseClass
        );
        eNotify(&notification);
    }
#endif

}

::ecorecpp::mapping::EList< ::caex::InterfaceClass >& InterfaceClass::getInterfaceClass()
{
    return *m_interfaceClass;
}

::ecorecpp::mapping::EList< ::caex::InterfaceClass >& InterfaceClass::getExternalInterface()
{
    return *m_externalInterface;
}

